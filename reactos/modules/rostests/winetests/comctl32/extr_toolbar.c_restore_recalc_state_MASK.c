
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int top; } ;
typedef TYPE_1__ RECT ;
typedef int LPARAM ;
typedef int HWND ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static void FUNC_3(HWND VAR_6)
{
    RECT VAR_7;

    FUNC_1(VAR_6, VAR_0,
                   FUNC_0(VAR_6, VAR_4, 0, 0) & ~VAR_1);

    FUNC_0(VAR_6, VAR_2, 1, (LPARAM)&VAR_5[3]);

    FUNC_1(VAR_6, VAR_0,
                   FUNC_0(VAR_6, VAR_4, 0, 0) | VAR_1);

    FUNC_0(VAR_6, VAR_3, 1, (LPARAM)&VAR_7);
    FUNC_2(VAR_7.top == 2, "Test will make no sense because initial top is %d instead of 2\n",
        VAR_7.top);
}
