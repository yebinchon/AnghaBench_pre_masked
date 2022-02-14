
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct gs_swap_chain {TYPE_1__* wi; } ;
struct TYPE_5__ {int bottom; int right; } ;
struct TYPE_4__ {int hwnd; } ;
typedef TYPE_2__ RECT ;


 int FUNC_0 (int ,TYPE_2__*) ;

extern void FUNC_1(const struct gs_swap_chain *VAR_0, uint32_t *VAR_1,
        uint32_t *VAR_2)
{
 RECT VAR_3;
 if (VAR_0) {
  FUNC_0(VAR_0->wi->hwnd, &VAR_3);
  *VAR_1 = VAR_3.right;
  *VAR_2 = VAR_3.bottom;
 } else {
  *VAR_1 = 0;
  *VAR_2 = 0;
 }
}
