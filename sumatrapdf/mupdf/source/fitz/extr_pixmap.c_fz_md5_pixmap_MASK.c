
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* samples; int h; int stride; int w; int n; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_md5 ;
typedef int fz_context ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;

void
FUNC_3(fz_context *VAR_0, fz_pixmap *VAR_1, unsigned char VAR_2[16])
{
 fz_md5 VAR_3;

 FUNC_1(&VAR_3);
 if (VAR_1)
 {
  unsigned char *VAR_4 = VAR_1->samples;
  int VAR_5 = VAR_1->h;
  int VAR_6 = VAR_1->stride;
  int VAR_7 = VAR_1->w * VAR_1->n;
  while (VAR_5--)
  {
   FUNC_2(&VAR_3, VAR_4, VAR_7);
   VAR_4 += VAR_6;
  }
 }
 FUNC_0(&VAR_3, VAR_2);
}
