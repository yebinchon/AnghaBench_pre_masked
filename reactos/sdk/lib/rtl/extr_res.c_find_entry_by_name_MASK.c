
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_11__ {int NumberOfNamedEntries; } ;
struct TYPE_10__ {int NameOffset; int OffsetToDirectory; int DataIsDirectory; } ;
struct TYPE_9__ {size_t Length; int NameString; } ;
typedef scalar_t__ LPCWSTR ;
typedef TYPE_1__ IMAGE_RESOURCE_DIR_STRING_U ;
typedef TYPE_2__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef TYPE_3__ IMAGE_RESOURCE_DIRECTORY ;


 int FUNC_0 (char*,void*,TYPE_3__*,scalar_t__,...) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,int,void*,int) ;
 size_t FUNC_3 (scalar_t__) ;

IMAGE_RESOURCE_DIRECTORY *FUNC_4( IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                              LPCWSTR VAR_1, void *VAR_2,
                                              int VAR_3 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_4;
    const IMAGE_RESOURCE_DIR_STRING_U *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    size_t VAR_10;

    if (!((ULONG_PTR)VAR_1 & 0xFFFF0000)) return FUNC_2( VAR_0, (ULONG_PTR)VAR_1 & 0xFFFF, VAR_2, VAR_3 );
    VAR_4 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    VAR_10 = FUNC_3(VAR_1);
    VAR_6 = 0;
    VAR_7 = VAR_0->NumberOfNamedEntries - 1;
    while (VAR_6 <= VAR_7)
    {
        VAR_9 = (VAR_6 + VAR_7) / 2;
        VAR_5 = (const IMAGE_RESOURCE_DIR_STRING_U *)((const char *)VAR_2 + VAR_4[VAR_9].NameOffset);
        VAR_8 = FUNC_1( VAR_1, VAR_5->NameString, VAR_5->Length );
        if (!VAR_8 && VAR_10 == VAR_5->Length)
        {
            if (!VAR_4[VAR_9].DataIsDirectory == !VAR_3)
            {
                FUNC_0("root %p dir %p name %ws ret %p\n",
                       VAR_2, VAR_0, VAR_1, (const char*)VAR_2 + VAR_4[VAR_9].OffsetToDirectory);
                return (IMAGE_RESOURCE_DIRECTORY *)((char *)VAR_2 + VAR_4[VAR_9].OffsetToDirectory);
            }
            break;
        }
        if (VAR_8 < 0) VAR_7 = VAR_9 - 1;
        else VAR_6 = VAR_9 + 1;
    }
    FUNC_0("root %p dir %p name %ws not found\n", VAR_2, VAR_0, VAR_1);
    return ((void*)0);
}
