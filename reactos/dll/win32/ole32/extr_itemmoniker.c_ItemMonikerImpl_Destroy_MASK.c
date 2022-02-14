
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* itemDelimiter; struct TYPE_5__* itemName; scalar_t__ pMarshal; } ;
typedef TYPE_1__ ItemMonikerImpl ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4(ItemMonikerImpl* VAR_1)
{
    FUNC_3("(%p)\n",VAR_1);

    if (VAR_1->pMarshal) FUNC_2(VAR_1->pMarshal);
    FUNC_1(FUNC_0(),0,VAR_1->itemName);
    FUNC_1(FUNC_0(),0,VAR_1->itemDelimiter);
    FUNC_1(FUNC_0(),0,VAR_1);

    return VAR_0;
}
