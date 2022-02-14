
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_separations ;
typedef int fz_context ;
typedef int fz_colorspace ;
struct TYPE_4__ {int w; int h; int n; int alpha; int xres; int yres; int pagenum; int (* header ) (int *,TYPE_1__*,int *) ;int seps; scalar_t__ line; int s; int * band; } ;
typedef TYPE_1__ fz_band_writer ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int *) ;

void FUNC_3(fz_context *VAR_0, fz_band_writer *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, fz_colorspace *VAR_9, fz_separations *VAR_10)
{
 if (VAR_1 == ((void*)0) || VAR_1->band == ((void*)0))
  return;

 VAR_1->w = VAR_2;
 VAR_1->h = VAR_3;
 VAR_1->s = FUNC_0(VAR_0, VAR_10);
 VAR_1->n = VAR_4;
 VAR_1->alpha = VAR_5;
 VAR_1->xres = VAR_6;
 VAR_1->yres = VAR_7;
 VAR_1->pagenum = VAR_8;
 VAR_1->line = 0;
 VAR_1->seps = FUNC_1(VAR_0, VAR_10);
 VAR_1->header(VAR_0, VAR_1, VAR_9);
}
