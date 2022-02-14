
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h; int stride; int samples; int alpha; int seps; int w; int y; int x; int colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int ,int ,int ,int) ;
 TYPE_1__* FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

fz_pixmap *FUNC_3(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 fz_pixmap *VAR_2 = FUNC_1(VAR_0, VAR_1->colorspace, FUNC_0(VAR_1->x, VAR_1->y, VAR_1->w, VAR_1->h), VAR_1->seps, VAR_1->alpha);
 FUNC_2(VAR_2->samples, VAR_1->samples, VAR_2->stride * VAR_2->h);
 return VAR_2;
}
