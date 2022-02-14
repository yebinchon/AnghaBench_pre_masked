
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {float a; float b; float c; float d; } ;
typedef TYPE_2__ fz_matrix ;
struct TYPE_18__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_3__ fz_irect ;
struct TYPE_19__ {int refs; int l2factor; TYPE_3__ rect; TYPE_5__* image; } ;
typedef TYPE_4__ fz_image_key ;
struct TYPE_20__ {float w; float h; } ;
typedef TYPE_5__ fz_image ;
struct TYPE_21__ {TYPE_1__* tuning; } ;
typedef TYPE_6__ fz_context ;
struct TYPE_16__ {int image_decode_arg; int (* image_decode ) (int ,float,float,int,TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,TYPE_3__*,int) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int ,float,float,int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, fz_image *VAR_1, fz_matrix *VAR_2,
 fz_image_key *VAR_3, const fz_irect *VAR_4, int VAR_5, int *VAR_6, int *VAR_7, int *VAR_8, int *VAR_9)
{
 VAR_3->refs = 1;
 VAR_3->image = VAR_1;
 VAR_3->l2factor = VAR_5;

 if (VAR_4 == ((void*)0))
 {
  VAR_3->rect.x0 = 0;
  VAR_3->rect.y0 = 0;
  VAR_3->rect.x1 = VAR_1->w;
  VAR_3->rect.y1 = VAR_1->h;
 }
 else
 {
  VAR_3->rect = *VAR_4;
  VAR_0->tuning->image_decode(VAR_0->tuning->image_decode_arg, VAR_1->w, VAR_1->h, VAR_3->l2factor, &VAR_3->rect);
  FUNC_0(VAR_0, VAR_1, &VAR_3->rect, VAR_3->l2factor);
 }


 if (VAR_2)
 {
  float VAR_10 = (float) (VAR_3->rect.x1 - VAR_3->rect.x0) / VAR_1->w;
  float VAR_11 = (float) (VAR_3->rect.y1 - VAR_3->rect.y0) / VAR_1->h;
  float VAR_12 = VAR_2->a * VAR_10;
  float VAR_13 = VAR_2->b * VAR_11;
  float VAR_14 = VAR_2->c * VAR_10;
  float VAR_15 = VAR_2->d * VAR_11;
  *VAR_6 = FUNC_1(VAR_12 * VAR_12 + VAR_13 * VAR_13);
  *VAR_7 = FUNC_1(VAR_14 * VAR_14 + VAR_15 * VAR_15);
 }
 else
 {
  *VAR_6 = VAR_1->w;
  *VAR_7 = VAR_1->h;
 }


 if (VAR_8)
  *VAR_8 = *VAR_6;
 if (VAR_9)
  *VAR_9 = *VAR_7;
 if (*VAR_6 > VAR_1->w)
  *VAR_6 = VAR_1->w;
 if (*VAR_7 > VAR_1->h)
  *VAR_7 = VAR_1->h;

 if (*VAR_6 == 0 || *VAR_7 == 0)
  VAR_3->l2factor = 0;
}
