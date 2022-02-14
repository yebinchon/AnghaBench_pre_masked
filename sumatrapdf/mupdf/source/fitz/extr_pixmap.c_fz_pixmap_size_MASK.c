
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int w; int h; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;



size_t
FUNC_0(fz_context *VAR_0, fz_pixmap * VAR_1)
{
 if (VAR_1 == ((void*)0))
  return 0;
 return sizeof(*VAR_1) + VAR_1->n * VAR_1->w * VAR_1->h;
}
