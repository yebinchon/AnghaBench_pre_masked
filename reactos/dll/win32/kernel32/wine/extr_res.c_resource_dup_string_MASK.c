
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int NameOffset; int Id; int NameIsString; } ;
struct TYPE_4__ {int Length; int NameString; } ;
typedef scalar_t__* LPWSTR ;
typedef TYPE_1__ IMAGE_RESOURCE_DIR_STRING_U ;
typedef TYPE_2__ IMAGE_RESOURCE_DIRECTORY_ENTRY ;
typedef int IMAGE_RESOURCE_DIRECTORY ;


 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 scalar_t__* FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,int ,int) ;

__attribute__((used)) static LPWSTR FUNC_4( const IMAGE_RESOURCE_DIRECTORY *VAR_0, const IMAGE_RESOURCE_DIRECTORY_ENTRY *VAR_1 )
{
    const IMAGE_RESOURCE_DIR_STRING_U* VAR_2;
    LPWSTR VAR_3;

    if (!VAR_1->NameIsString)
        return FUNC_2(VAR_1->Id);

    VAR_2 = (const IMAGE_RESOURCE_DIR_STRING_U*) (((const char *)VAR_0) + VAR_1->NameOffset);
    VAR_3 = FUNC_1(FUNC_0(), 0, (VAR_2->Length + 1)*sizeof (WCHAR) );
    FUNC_3( VAR_3, VAR_2->NameString, (VAR_2->Length + 1)*sizeof (WCHAR) );
    VAR_3[VAR_2->Length] = 0;

    return VAR_3;
}
