
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int width; int height; float xres; float yres; } ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,struct info*,unsigned char const*,size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;

void
FUNC_3(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, fz_colorspace **VAR_7)
{
 struct info VAR_8;

 FUNC_0(VAR_0, &VAR_8, VAR_1, VAR_2, 1);

 *VAR_7 = FUNC_2(VAR_0, FUNC_1(VAR_0));
 *VAR_3 = VAR_8.width;
 *VAR_4 = VAR_8.height;
 *VAR_5 = VAR_8.xres / (1000.0f / 25.4f);
 *VAR_6 = VAR_8.yres / (1000.0f / 25.4f);
}
