
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct TYPE_14__ {float itw; float ith; TYPE_1__ params; } ;
struct TYPE_13__ {int font; } ;
struct TYPE_12__ {int xoff; int yoff; int x0; int y0; int x1; int y1; float xadv; int index; } ;
struct TYPE_11__ {float x0; float y0; float x1; float y1; float s0; float t0; float s1; float t1; } ;
typedef TYPE_2__ FONSquad ;
typedef TYPE_3__ FONSglyph ;
typedef TYPE_4__ FONSfont ;
typedef TYPE_5__ FONScontext ;


 int VAR_0 ;
 float FUNC_0 (int *,int,int ) ;

__attribute__((used)) static void FUNC_1(FONScontext* VAR_1, FONSfont* VAR_2,
         int VAR_3, FONSglyph* VAR_4,
         float VAR_5, float VAR_6, float* VAR_7, float* VAR_8, FONSquad* VAR_9)
{
 float VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15,VAR_16,VAR_17;

 if (VAR_3 != -1) {
  float VAR_18 = FUNC_0(&VAR_2->font, VAR_3, VAR_4->index) * VAR_5;
  *VAR_7 += (int)(VAR_18 + VAR_6 + 0.5f);
 }




 VAR_12 = (short)(VAR_4->xoff+1);
 VAR_13 = (short)(VAR_4->yoff+1);
 VAR_14 = (float)(VAR_4->x0+1);
 VAR_15 = (float)(VAR_4->y0+1);
 VAR_16 = (float)(VAR_4->x1-1);
 VAR_17 = (float)(VAR_4->y1-1);

 if (VAR_1->params.flags & VAR_0) {
  VAR_10 = (float)(int)(*VAR_7 + VAR_12);
  VAR_11 = (float)(int)(*VAR_8 + VAR_13);

  VAR_9->x0 = VAR_10;
  VAR_9->y0 = VAR_11;
  VAR_9->x1 = VAR_10 + VAR_16 - VAR_14;
  VAR_9->y1 = VAR_11 + VAR_17 - VAR_15;

  VAR_9->s0 = VAR_14 * VAR_1->itw;
  VAR_9->t0 = VAR_15 * VAR_1->ith;
  VAR_9->s1 = VAR_16 * VAR_1->itw;
  VAR_9->t1 = VAR_17 * VAR_1->ith;
 } else {
  VAR_10 = (float)(int)(*VAR_7 + VAR_12);
  VAR_11 = (float)(int)(*VAR_8 - VAR_13);

  VAR_9->x0 = VAR_10;
  VAR_9->y0 = VAR_11;
  VAR_9->x1 = VAR_10 + VAR_16 - VAR_14;
  VAR_9->y1 = VAR_11 - VAR_17 + VAR_15;

  VAR_9->s0 = VAR_14 * VAR_1->itw;
  VAR_9->t0 = VAR_15 * VAR_1->ith;
  VAR_9->s1 = VAR_16 * VAR_1->itw;
  VAR_9->t1 = VAR_17 * VAR_1->ith;
 }

 *VAR_7 += (int)(VAR_4->xadv / 10.0f + 0.5f);
}
