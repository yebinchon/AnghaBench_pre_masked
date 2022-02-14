
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(HWND *VAR_3)
{
    RECT VAR_4;
    FUNC_4(VAR_3);
    FUNC_2(*VAR_3, VAR_0,
        FUNC_0(*VAR_3, VAR_0) | VAR_1);
    FUNC_1(*VAR_3, VAR_2, 1, (LPARAM)&VAR_4);
    FUNC_3(VAR_4.top == 2, "Test will make no sense because initial top is %d instead of 2\n",
        VAR_4.top);
}
