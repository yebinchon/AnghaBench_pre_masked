
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_10__ {scalar_t__ numconflicts; int name; int rows; int numtypes; int types; int numcolumns; int columns; int numlabels; int labels; } ;
struct TYPE_9__ {int hdr; } ;
typedef TYPE_1__ MSIQUERY ;
typedef int MSIDATABASE ;
typedef TYPE_2__ MERGETABLE ;
typedef int LPCWSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__**,char const*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static UINT FUNC_9 (MSIDATABASE *VAR_2, LPCWSTR VAR_3, MERGETABLE **VAR_4)
{
    UINT VAR_5;
    MERGETABLE *VAR_6;
    MSIQUERY *VAR_7 = ((void*)0);

    static const WCHAR VAR_8[] = {'S','E','L','E','C','T',' ','*',' ',
        'F','R','O','M',' ','`','%','s','`',0};

    VAR_6 = FUNC_3(sizeof(MERGETABLE));
    if (!VAR_6)
    {
       *VAR_4 = ((void*)0);
       return VAR_0;
    }

    VAR_5 = FUNC_6(VAR_2, VAR_3, &VAR_6->labels, &VAR_6->numlabels);
    if (VAR_5 != VAR_1)
        goto err;

    VAR_5 = FUNC_0(VAR_2, &VAR_7, VAR_8, VAR_3);
    if (VAR_5 != VAR_1)
        goto err;

    VAR_5 = FUNC_4(VAR_7, &VAR_6->columns, &VAR_6->numcolumns);
    if (VAR_5 != VAR_1)
        goto err;

    VAR_5 = FUNC_5(VAR_7, &VAR_6->types, &VAR_6->numtypes);
    if (VAR_5 != VAR_1)
        goto err;

    FUNC_2(&VAR_6->rows);

    VAR_6->name = FUNC_8(VAR_3);
    VAR_6->numconflicts = 0;

    FUNC_7(&VAR_7->hdr);
    *VAR_4 = VAR_6;
    return VAR_1;

err:
    FUNC_7(&VAR_7->hdr);
    FUNC_1(VAR_6);
    *VAR_4 = ((void*)0);
    return VAR_5;
}
