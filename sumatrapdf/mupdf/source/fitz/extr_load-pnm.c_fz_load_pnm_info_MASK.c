
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {int width; int height; int cs; int member_0; } ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,struct info*,unsigned char const*,size_t,int,int ) ;

void
FUNC_2(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int *VAR_6, fz_colorspace **VAR_7)
{
 struct info VAR_8 = { 0 };
 (void) FUNC_1(VAR_0, &VAR_8, VAR_1, VAR_2, 1, 0);
 *VAR_7 = FUNC_0(VAR_0, VAR_8.cs);
 *VAR_3 = VAR_8.width;
 *VAR_4 = VAR_8.height;
 *VAR_5 = 72;
 *VAR_6 = 72;
}
