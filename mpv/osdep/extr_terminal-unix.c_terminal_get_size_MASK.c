
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_row; int ws_col; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,struct winsize*) ;
 int VAR_1 ;

void FUNC_1(int *VAR_2, int *VAR_3)
{
    struct winsize VAR_4;
    if (FUNC_0(VAR_1, VAR_0, &VAR_4) < 0 || !VAR_4.ws_row || !VAR_4.ws_col)
        return;

    *VAR_2 = VAR_4.ws_col;
    *VAR_3 = VAR_4.ws_row;
}
