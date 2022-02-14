
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* fz_span_painter_t ) (unsigned char*,int ,unsigned char*,int,int ,int,int,int *) ;
typedef int (* fz_span_color_painter_t ) (unsigned char*,unsigned char*,int,int,unsigned char*,int ,int *) ;
struct TYPE_3__ {unsigned char* samples; int y; int stride; int x; int n; int alpha; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_overprint ;


 int FUNC_0 (unsigned char*,unsigned char*,int,int,unsigned char*,int ,int *) ;
 int FUNC_1 (unsigned char*,int ,unsigned char*,int,int ,int,int,int *) ;

__attribute__((used)) static inline void
FUNC_2(fz_pixmap *VAR_0, int VAR_1, int VAR_2, unsigned char *VAR_3, int VAR_4, unsigned char *VAR_5, void *VAR_6, fz_overprint *VAR_7)
{
 unsigned char *VAR_8;
 VAR_8 = VAR_0->samples + (unsigned int)((VAR_2 - VAR_0->y) * VAR_0->stride + (VAR_1 - VAR_0->x) * VAR_0->n);
 if (VAR_5)
  (*(fz_span_color_painter_t *)VAR_6)(VAR_8, VAR_3, VAR_0->n, VAR_4, VAR_5, VAR_0->alpha, VAR_7);
 else
  (*(fz_span_painter_t *)VAR_6)(VAR_8, VAR_0->alpha, VAR_3, 1, 0, VAR_4, 255, VAR_7);
}
