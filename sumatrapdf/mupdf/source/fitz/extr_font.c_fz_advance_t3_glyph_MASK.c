
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* t3widths; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;



__attribute__((used)) static float
FUNC_0(fz_context *VAR_0, fz_font *VAR_1, int VAR_2)
{
 if (VAR_2 < 0 || VAR_2 > 255)
  return 0;
 return VAR_1->t3widths[VAR_2];
}
