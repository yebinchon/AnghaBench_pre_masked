
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_separations ;
typedef int fz_pixmap ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int,int,int *,int,int,int *) ;

fz_pixmap *
FUNC_3(fz_context *VAR_0, fz_colorspace *VAR_1, int VAR_2, int VAR_3, fz_separations *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_1(VAR_0, VAR_4);
 if (!VAR_1 && VAR_7 == 0) VAR_5 = 1;
 VAR_6 = (FUNC_0(VAR_0, VAR_1) + VAR_7 + VAR_5) * VAR_2;
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
}
