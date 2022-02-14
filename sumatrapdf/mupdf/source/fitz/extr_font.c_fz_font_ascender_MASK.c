
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float y1; } ;
struct TYPE_6__ {TYPE_3__* ft_face; TYPE_1__ bbox; scalar_t__ t3procs; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;
struct TYPE_7__ {scalar_t__ ascender; float units_per_EM; } ;
typedef TYPE_3__* FT_Face ;



float FUNC_0(fz_context *VAR_0, fz_font *VAR_1)
{
 if (VAR_1->t3procs)
  return VAR_1->bbox.y1;
 else
 {
  FT_Face VAR_2 = VAR_1->ft_face;
  if (VAR_2->ascender == 0)
   return 0.8f;
  return (float)VAR_2->ascender / VAR_2->units_per_EM;
 }
}
