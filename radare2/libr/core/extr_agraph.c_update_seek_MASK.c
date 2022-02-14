
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int x; int y; int w; int h; } ;
struct TYPE_5__ {int sx; int sy; int w; int h; } ;
typedef TYPE_1__ RConsCanvas ;
typedef TYPE_2__ RANode ;



__attribute__((used)) static void FUNC_0(RConsCanvas *VAR_0, RANode *VAR_1, int VAR_2) {
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 if (!VAR_1) {
  return;
 }
 VAR_3 = VAR_1->x + VAR_0->sx;
 VAR_4 = VAR_1->y + VAR_0->sy;
 VAR_5 = VAR_0->w;
 VAR_6 = VAR_0->h;

 VAR_7 = VAR_2 || VAR_4 < 0 || VAR_4 + 5 > VAR_6 || VAR_3 + 5 > VAR_5 || VAR_3 + VAR_1->w + 5 < 0;

 if (VAR_7) {
  if (VAR_1->w > VAR_5) {
   VAR_0->sx = -VAR_1->x;
  } else {
   VAR_0->sx = -VAR_1->x - VAR_1->w / 2 + VAR_5 / 2;
  }
  if (VAR_1->h > VAR_6) {
   VAR_0->sy = -VAR_1->y;
  } else {
   VAR_0->sy = -VAR_1->y - VAR_1->h / 8 + VAR_6 / 4;
  }
 }
}
