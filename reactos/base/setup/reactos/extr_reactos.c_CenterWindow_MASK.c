
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int right; int left; int bottom; int top; } ;
typedef TYPE_1__ RECT ;
typedef int * HWND ;


 int * FUNC_0 () ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int,int,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_2)
{
    HWND VAR_3;
    RECT VAR_4;
    RECT VAR_5;

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0))
        VAR_3 = FUNC_0();

    FUNC_2(VAR_3, &VAR_4);
    FUNC_2(VAR_2, &VAR_5);

    FUNC_3(VAR_2,
                 VAR_0,
                 ((VAR_4.right - VAR_4.left) - (VAR_5.right - VAR_5.left)) / 2,
                 ((VAR_4.bottom - VAR_4.top) - (VAR_5.bottom - VAR_5.top)) / 2,
                 0,
                 0,
                 VAR_1);
}
