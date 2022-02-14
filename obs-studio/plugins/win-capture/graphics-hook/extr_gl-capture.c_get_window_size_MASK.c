
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int right; int bottom; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int HWND ;
typedef int HDC ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(HDC VAR_1, uint32_t *VAR_2, uint32_t *VAR_3)
{
 HWND VAR_4 = FUNC_1(VAR_1);
 RECT VAR_5 = {0};

 if (VAR_0) {
  *VAR_2 = 1920;
  *VAR_3 = 1080;
 } else {
  FUNC_0(VAR_4, &VAR_5);
  *VAR_2 = VAR_5.right;
  *VAR_3 = VAR_5.bottom;
 }
}
