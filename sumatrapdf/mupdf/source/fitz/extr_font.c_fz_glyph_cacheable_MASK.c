
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* t3flags; int glyph_count; int t3procs; } ;
typedef TYPE_1__ fz_font ;
typedef int fz_context ;


 int VAR_0 ;

int FUNC_0(fz_context *VAR_1, fz_font *VAR_2, int VAR_3)
{
 if (!VAR_2->t3procs || !VAR_2->t3flags || VAR_3 < 0 || VAR_3 >= VAR_2->glyph_count)
  return 1;
 return (VAR_2->t3flags[VAR_3] & VAR_0) == 0;
}
