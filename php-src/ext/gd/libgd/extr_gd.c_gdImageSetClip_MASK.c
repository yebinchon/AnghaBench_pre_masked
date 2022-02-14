
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_3__ {int sx; int sy; int cx1; int cy1; int cx2; int cy2; } ;



void FUNC_0 (gdImagePtr VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_1 < 0) {
  VAR_1 = 0;
 }
 if (VAR_1 >= VAR_0->sx) {
  VAR_1 = VAR_0->sx - 1;
 }
 if (VAR_3 < 0) {
  VAR_3 = 0;
 }
 if (VAR_3 >= VAR_0->sx) {
  VAR_3 = VAR_0->sx - 1;
 }
 if (VAR_2 < 0) {
  VAR_2 = 0;
 }
 if (VAR_2 >= VAR_0->sy) {
  VAR_2 = VAR_0->sy - 1;
 }
 if (VAR_4 < 0) {
  VAR_4 = 0;
 }
 if (VAR_4 >= VAR_0->sy) {
  VAR_4 = VAR_0->sy - 1;
 }
 VAR_0->cx1 = VAR_1;
 VAR_0->cy1 = VAR_2;
 VAR_0->cx2 = VAR_3;
 VAR_0->cy2 = VAR_4;
}
