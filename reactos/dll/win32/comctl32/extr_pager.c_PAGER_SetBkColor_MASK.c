
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hwndSelf; int clrBk; } ;
typedef TYPE_1__ PAGER_INFO ;
typedef int COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static COLORREF
FUNC_3 (PAGER_INFO* VAR_7, COLORREF VAR_8)
{
    COLORREF VAR_9 = VAR_7->clrBk;

    VAR_7->clrBk = VAR_8;
    FUNC_2("[%p] %06x\n", VAR_7->hwndSelf, VAR_7->clrBk);


    FUNC_1(VAR_7->hwndSelf, 0, 0, 0, 0, 0,
   VAR_2 | VAR_5 | VAR_4 |
   VAR_6 | VAR_3);

    FUNC_0(VAR_7->hwndSelf, 0, 0, VAR_0 | VAR_1);

    return VAR_9;
}
