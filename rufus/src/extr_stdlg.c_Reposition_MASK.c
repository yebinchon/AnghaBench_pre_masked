
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__ RECT ;
typedef int POINT ;
typedef int HWND ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(HWND VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 HWND VAR_5;
 RECT VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_5, &VAR_6);
 FUNC_2(((void*)0), VAR_1, (POINT*)&VAR_6, 2);
 FUNC_3(VAR_5, VAR_0, VAR_6.left + VAR_3, VAR_6.top, VAR_6.right - VAR_6.left + VAR_4, VAR_6.bottom - VAR_6.top, 0);
}
