
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_9__ {TYPE_1__* tables; } ;
struct TYPE_8__ {char* MajorVersion; int RevisionNumber; int BuildNumber; int MinorVersion; } ;
struct TYPE_7__ {int offset; } ;
typedef int * LPWSTR ;
typedef int LONG ;
typedef int HRESULT ;
typedef TYPE_2__ ASSEMBLYTABLE ;
typedef TYPE_3__ ASSEMBLY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int) ;
 int * FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int *,char const*,char*,int ,int ,int ) ;

HRESULT FUNC_4(ASSEMBLY *VAR_4, LPWSTR *VAR_5)
{
    static const WCHAR VAR_6[] = {'%','u','.','%','u','.','%','u','.','%','u',0};

    ASSEMBLYTABLE *VAR_7;
    LONG VAR_8;

    *VAR_5 = ((void*)0);

    VAR_8 = VAR_4->tables[FUNC_0(VAR_3)].offset;
    if (VAR_8 == -1)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_4, VAR_8);
    if (!VAR_7)
        return VAR_0;

    if (!(*VAR_5 = FUNC_2(24 * sizeof(WCHAR))))
        return VAR_1;

    FUNC_3(*VAR_5, VAR_6, VAR_7->MajorVersion, VAR_7->MinorVersion,
             VAR_7->BuildNumber, VAR_7->RevisionNumber);

    return VAR_2;
}
