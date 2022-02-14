
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
struct TYPE_7__ {int NumberOfNamedEntries; int NumberOfIdEntries; } ;
struct TYPE_6__ {scalar_t__ Id; int OffsetToDirectory; int DataIsDirectory; } ;
typedef TYPE_1__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef TYPE_2__ IMAGE_RESOURCE_DIRECTORY ;


 int FUNC_0 (char*,void*,TYPE_2__*,scalar_t__,...) ;

IMAGE_RESOURCE_DIRECTORY *FUNC_1( IMAGE_RESOURCE_DIRECTORY *VAR_0,
                                            WORD VAR_1, void *VAR_2, int VAR_3 )
{
    const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_4;
    int VAR_5, VAR_6, VAR_7;

    VAR_4 = (const IMAGE_RESOURCE_DIRECTORY_ENTRY *)(VAR_0 + 1);
    VAR_5 = VAR_0->NumberOfNamedEntries;
    VAR_6 = VAR_5 + VAR_0->NumberOfIdEntries - 1;
    while (VAR_5 <= VAR_6)
    {
        VAR_7 = (VAR_5 + VAR_6) / 2;
        if (VAR_4[VAR_7].Id == VAR_1)
        {
            if (!VAR_4[VAR_7].DataIsDirectory == !VAR_3)
            {
                FUNC_0("root %p dir %p id %04x ret %p\n",
                       VAR_2, VAR_0, VAR_1, (const char*)VAR_2 + VAR_4[VAR_7].OffsetToDirectory);
                return (IMAGE_RESOURCE_DIRECTORY *)((char *)VAR_2 + VAR_4[VAR_7].OffsetToDirectory);
            }
            break;
        }
        if (VAR_4[VAR_7].Id > VAR_1) VAR_6 = VAR_7 - 1;
        else VAR_5 = VAR_7 + 1;
    }
    FUNC_0("root %p dir %p id %04x not found\n", VAR_2, VAR_0, VAR_1 );
    return ((void*)0);
}
