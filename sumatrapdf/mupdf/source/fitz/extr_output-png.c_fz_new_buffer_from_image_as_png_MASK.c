
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_pixmap ;
typedef int fz_image ;
typedef int fz_context ;
typedef int fz_color_params ;
typedef int fz_buffer ;


 int * FUNC_0 (int *,int *,int *,int *,int *,int *) ;
 int * FUNC_1 (int *,int *,int ,int) ;

fz_buffer *
FUNC_2(fz_context *VAR_0, fz_image *VAR_1, fz_color_params VAR_2)
{
 fz_pixmap *VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 return FUNC_1(VAR_0, VAR_3, VAR_2, 1);
}
