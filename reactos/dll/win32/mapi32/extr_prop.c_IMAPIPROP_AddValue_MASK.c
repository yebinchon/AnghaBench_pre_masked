
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int (* lpFree ) (TYPE_1__*) ;int ulNumValues; int values; int lpMore; int (* lpAlloc ) (int,TYPE_1__**) ;} ;
struct TYPE_13__ {struct TYPE_13__* value; int entry; int ulAccess; } ;
typedef int SPropValue ;
typedef TYPE_1__* LPVOID ;
typedef int LPSPropValue ;
typedef TYPE_1__* LPIPropDataItem ;
typedef TYPE_1__ IPropDataItem ;
typedef TYPE_4__ IPropDataImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,TYPE_1__**) ;
 int FUNC_4 (int,TYPE_1__**) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static IPropDataItem *FUNC_7(IPropDataImpl *VAR_1,
                                         LPSPropValue VAR_2)
{
    LPVOID VAR_3;
    LPIPropDataItem VAR_4;
    HRESULT VAR_5;

    VAR_5 = VAR_1->lpAlloc(sizeof(IPropDataItem), &VAR_3);

    if (FUNC_1(VAR_5))
    {
        VAR_4 = VAR_3;
        VAR_4->ulAccess = VAR_0;


        VAR_3 = ((void*)0);
        VAR_5 = VAR_1->lpAlloc(sizeof(SPropValue), &VAR_3);
        if (FUNC_1(VAR_5))
        {
            VAR_4->value = VAR_3;

            VAR_5 = FUNC_0(VAR_4->value, VAR_2, VAR_1->lpMore, VAR_3);
            if (FUNC_1(VAR_5))
            {
                FUNC_2(&VAR_1->values, &VAR_4->entry);
                VAR_1->ulNumValues++;
                return VAR_4;
            }
            VAR_1->lpFree(VAR_4->value);
        }
        VAR_1->lpFree(VAR_4);
    }
    return ((void*)0);
}
