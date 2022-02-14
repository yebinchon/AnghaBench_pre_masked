
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iItem; int state; int stateMask; scalar_t__ iSubItem; int mask; } ;
typedef TYPE_1__ LVITEMW ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(HWND VAR_7, int VAR_8)
{
    LVITEMW VAR_9;
    int VAR_10;
    HWND VAR_11 = FUNC_0(VAR_7, VAR_2);

    VAR_9.mask = VAR_3;
    VAR_9.iItem = VAR_8;
    VAR_9.iSubItem = 0;
    VAR_9.stateMask = VAR_4;
    VAR_10 = FUNC_2(VAR_11, VAR_5, 0, (LPARAM)&VAR_9);
    if (VAR_10)
    {
        int VAR_12 = VAR_9.state >> 12;

        VAR_9.state = FUNC_1(
         VAR_12 == VAR_0 ? VAR_1 :
         VAR_0);
        FUNC_2(VAR_11, VAR_6, VAR_8, (LPARAM)&VAR_9);
    }
}
