
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {float x0; float y0; float x1; float y1; } ;
struct TYPE_6__ {int invalid_bbox; } ;
struct TYPE_7__ {TYPE_3__ bbox; TYPE_1__ flags; scalar_t__ t3procs; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;


 TYPE_3__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void
FUNC_0(fz_context *VAR_2, fz_font *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 if (VAR_4 >= VAR_6 || VAR_5 >= VAR_7)
 {

  if (VAR_3->t3procs)
  {

   VAR_3->bbox = VAR_0;
  }
  else
  {

   VAR_3->bbox = VAR_1;
  }
  VAR_3->flags.invalid_bbox = 1;
 }
 else
 {
  VAR_3->bbox.x0 = VAR_4;
  VAR_3->bbox.y0 = VAR_5;
  VAR_3->bbox.x1 = VAR_6;
  VAR_3->bbox.y1 = VAR_7;
 }
}
