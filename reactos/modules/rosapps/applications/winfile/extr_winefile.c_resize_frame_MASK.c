
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int right; int bottom; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;


 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(HWND VAR_0, int VAR_1, int VAR_2)
{
 RECT VAR_3;

 VAR_3.left = 0;
 VAR_3.top = 0;
 VAR_3.right = VAR_1;
 VAR_3.bottom = VAR_2;

 FUNC_0(VAR_0, &VAR_3);
}
