
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float h; scalar_t__ type; struct TYPE_6__* next; TYPE_1__* box; } ;
typedef TYPE_2__ fz_html_flow ;
struct TYPE_5__ {float em; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static float FUNC_0(fz_html_flow *VAR_1, fz_html_flow *VAR_2, float *VAR_3)
{
 float VAR_4 = 0, VAR_5 = 0, VAR_6 = VAR_1->h;
 while (VAR_1 != VAR_2)
 {
  if (VAR_1->type == VAR_0)
  {
   if (VAR_1->h > VAR_4)
    VAR_4 = VAR_1->h;
  }
  else
  {
   float VAR_7 = VAR_1->box->em * 0.8f;
   float VAR_8 = VAR_1->box->em * 0.2f;
   if (VAR_7 > VAR_4) VAR_4 = VAR_7;
   if (VAR_8 > VAR_5) VAR_5 = VAR_8;
  }
  if (VAR_1->h > VAR_6) VAR_6 = VAR_1->h;
  if (VAR_4 + VAR_5 > VAR_6) VAR_6 = VAR_4 + VAR_5;
  VAR_1 = VAR_1->next;
 }
 *VAR_3 = VAR_4 + (VAR_6 - VAR_4 - VAR_5) / 2;
 return VAR_6;
}
