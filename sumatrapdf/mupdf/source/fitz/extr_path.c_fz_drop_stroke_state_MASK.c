
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refs; } ;
typedef TYPE_1__ fz_stroke_state ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,TYPE_1__*,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(fz_context *VAR_0, const fz_stroke_state *VAR_1)
{
 fz_stroke_state *VAR_2 = (fz_stroke_state *)VAR_1;

 if (FUNC_0(VAR_0, VAR_2, &VAR_2->refs))
  FUNC_1(VAR_0, VAR_2);
}
