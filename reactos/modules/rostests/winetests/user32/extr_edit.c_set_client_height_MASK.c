
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int bottom; unsigned int top; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int ,int ,scalar_t__,unsigned int,int) ;
 int FUNC_3 (int,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(HWND VAR_3, unsigned VAR_4)
{
    RECT VAR_5, VAR_6;

    FUNC_1(VAR_3, &VAR_6);
    FUNC_0(VAR_3, &VAR_5);
    FUNC_2(VAR_3, ((void*)0), 0, 0,
                 VAR_6.right - VAR_6.left,
                 VAR_4 + (VAR_6.bottom - VAR_6.top) -
                 (VAR_5.bottom - VAR_5.top),
                 VAR_1 | VAR_0 | VAR_2);



    FUNC_1(VAR_3, &VAR_6);
    FUNC_2(VAR_3, ((void*)0), 0, 0,
                 VAR_6.right - VAR_6.left + 1,
                 VAR_6.bottom - VAR_6.top + 1,
                 VAR_1 | VAR_0 | VAR_2);
    FUNC_2(VAR_3, ((void*)0), 0, 0,
                 VAR_6.right - VAR_6.left,
                 VAR_6.bottom - VAR_6.top,
                 VAR_1 | VAR_0 | VAR_2);

    FUNC_0(VAR_3, &VAR_5);
    FUNC_3(VAR_5.bottom - VAR_5.top == VAR_4,
        "The client height should be %d, but is %d\n",
        VAR_4, VAR_5.bottom - VAR_5.top);
}
