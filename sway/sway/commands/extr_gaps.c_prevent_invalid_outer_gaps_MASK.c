
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int left; int bottom; int right; int top; } ;
struct TYPE_4__ {int gaps_inner; TYPE_1__ gaps_outer; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(void) {
 if (VAR_0->gaps_outer.top < -VAR_0->gaps_inner) {
  VAR_0->gaps_outer.top = -VAR_0->gaps_inner;
 }
 if (VAR_0->gaps_outer.right < -VAR_0->gaps_inner) {
  VAR_0->gaps_outer.right = -VAR_0->gaps_inner;
 }
 if (VAR_0->gaps_outer.bottom < -VAR_0->gaps_inner) {
  VAR_0->gaps_outer.bottom = -VAR_0->gaps_inner;
 }
 if (VAR_0->gaps_outer.left < -VAR_0->gaps_inner) {
  VAR_0->gaps_outer.left = -VAR_0->gaps_inner;
 }
}
