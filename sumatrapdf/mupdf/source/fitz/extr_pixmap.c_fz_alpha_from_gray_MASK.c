
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n; unsigned char* samples; int stride; int h; int w; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int *,int *,int ,int ,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;

fz_pixmap *
FUNC_4(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 fz_pixmap *VAR_2;
 unsigned char *VAR_3, *VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_1->n == 1);

 VAR_2 = FUNC_1(VAR_0, ((void*)0), FUNC_2(VAR_0, VAR_1), 0, 1);
 VAR_4 = VAR_2->samples;
 VAR_8 = VAR_2->stride;
 VAR_3 = VAR_1->samples;
 VAR_7 = VAR_1->stride;

 VAR_6 = VAR_1->h;
 VAR_5 = VAR_1->w;
 while (VAR_6--)
 {
  FUNC_3(VAR_4, VAR_3, VAR_5);
  VAR_3 += VAR_7;
  VAR_4 += VAR_8;
 }

 return VAR_2;
}
