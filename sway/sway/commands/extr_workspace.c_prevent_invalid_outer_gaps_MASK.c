
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int left; int bottom; int right; int top; } ;
struct workspace_config {int gaps_inner; TYPE_1__ gaps_outer; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct workspace_config *VAR_1) {
 if (VAR_1->gaps_outer.top != VAR_0 &&
   VAR_1->gaps_outer.top < -VAR_1->gaps_inner) {
  VAR_1->gaps_outer.top = -VAR_1->gaps_inner;
 }
 if (VAR_1->gaps_outer.right != VAR_0 &&
   VAR_1->gaps_outer.right < -VAR_1->gaps_inner) {
  VAR_1->gaps_outer.right = -VAR_1->gaps_inner;
 }
 if (VAR_1->gaps_outer.bottom != VAR_0 &&
   VAR_1->gaps_outer.bottom < -VAR_1->gaps_inner) {
  VAR_1->gaps_outer.bottom = -VAR_1->gaps_inner;
 }
 if (VAR_1->gaps_outer.left != VAR_0 &&
   VAR_1->gaps_outer.left < -VAR_1->gaps_inner) {
  VAR_1->gaps_outer.left = -VAR_1->gaps_inner;
 }
}
