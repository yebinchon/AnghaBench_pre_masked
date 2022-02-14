
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bottom; int right; } ;
typedef TYPE_1__ RECT ;
typedef int LPWSTR ;
typedef scalar_t__ LONG_PTR ;
typedef int HWND ;
typedef int ATOM ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int ,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int *,int ,int ,int ,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(HWND VAR_7)
{



    ATOM VAR_8 = FUNC_6();
    HWND VAR_9 = FUNC_1(VAR_7, ((void*)0), (LPWSTR)FUNC_4(VAR_8), ((void*)0));
    if (!VAR_9)
        return;

    if (FUNC_3(VAR_9, VAR_0) != (LONG_PTR)VAR_1)
        return;


    RECT VAR_10, VAR_11;
    if (!FUNC_2(VAR_9, &VAR_10))
        return;
    if (!FUNC_2(VAR_7, &VAR_11))
        return;
    if (FUNC_0(&VAR_10, &VAR_11))
        return;
    FUNC_5(VAR_9, ((void*)0), 0, 0, VAR_11.right, VAR_11.bottom, VAR_2 |
        VAR_3 | VAR_6 | VAR_4 | VAR_5);
}
