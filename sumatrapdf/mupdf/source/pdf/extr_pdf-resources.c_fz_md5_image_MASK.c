
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* samples; int h; int w; int n; int stride; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_md5 ;
typedef int fz_image ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int *,int *,int *,int ,int ) ;
 int FUNC_2 (int *,unsigned char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_image *VAR_1, unsigned char VAR_2[16])
{
 fz_pixmap *VAR_3;
 fz_md5 VAR_4;
 int VAR_5;
 unsigned char *VAR_6;

 VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), ((void*)0), 0, 0);
 FUNC_3(&VAR_4);
 VAR_6 = VAR_3->samples;
 VAR_5 = VAR_3->h;
 while (VAR_5--)
 {
  FUNC_4(&VAR_4, VAR_6, VAR_3->w * VAR_3->n);
  VAR_6 += VAR_3->stride;
 }
 FUNC_2(&VAR_4, VAR_2);
 FUNC_0(VAR_0, VAR_3);
}
