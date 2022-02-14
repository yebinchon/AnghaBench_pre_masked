
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {int high; } ;
struct TYPE_6__ {TYPE_1__ indexed; } ;
struct TYPE_7__ {scalar_t__ type; int n; TYPE_2__ u; } ;
typedef TYPE_3__ fz_colorspace ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 float FUNC_0 (float const,int,int) ;

void
FUNC_1(fz_context *VAR_2, fz_colorspace *VAR_3, const float *VAR_4, float *VAR_5)
{
 if (VAR_3->type == VAR_1)
 {
  VAR_5[0] = FUNC_0(VAR_4[0], 0, 100);
  VAR_5[1] = FUNC_0(VAR_4[1], -128, 127);
  VAR_5[2] = FUNC_0(VAR_4[2], -128, 127);
 }
 else if (VAR_3->type == VAR_0)
 {
  VAR_5[0] = FUNC_0(VAR_4[0], 0, VAR_3->u.indexed.high) / 255.0f;
 }
 else
 {
  int VAR_6, VAR_7 = VAR_3->n;
  for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
   VAR_5[VAR_6] = FUNC_0(VAR_4[VAR_6], 0, 1);
 }
}
