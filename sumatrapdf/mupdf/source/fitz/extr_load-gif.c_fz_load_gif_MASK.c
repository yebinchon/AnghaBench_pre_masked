
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct info {int yres; int xres; } ;
struct TYPE_4__ {int yres; int xres; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,struct info*,unsigned char const*,size_t,int ) ;

fz_pixmap *
FUNC_1(fz_context *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 fz_pixmap *VAR_3;
 struct info VAR_4;

 VAR_3 = FUNC_0(VAR_0, &VAR_4, VAR_1, VAR_2, 0);
 VAR_3->xres = VAR_4.xres;
 VAR_3->yres = VAR_4.yres;

 return VAR_3;
}
