
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * colorspace; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;
typedef int fz_colorspace ;



fz_colorspace *
FUNC_0(fz_context *VAR_0, fz_pixmap *VAR_1)
{
 if (!VAR_1)
  return ((void*)0);
 return VAR_1->colorspace;
}
