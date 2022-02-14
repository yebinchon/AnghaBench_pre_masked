
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int callbackMask; int iImage; int * pszText; } ;
typedef TYPE_1__ HEADER_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(HEADER_ITEM *VAR_3)
{
    if (VAR_3->callbackMask&VAR_1)
    {
        FUNC_0(VAR_3->pszText);
        VAR_3->pszText = ((void*)0);
    }

    if (VAR_3->callbackMask&VAR_0)
        VAR_3->iImage = VAR_2;
}
