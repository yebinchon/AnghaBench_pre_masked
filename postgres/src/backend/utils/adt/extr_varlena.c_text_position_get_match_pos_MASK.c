
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_match; int str1; scalar_t__ refpoint; int refpos; int is_multibyte; } ;
typedef TYPE_1__ TextPositionState ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(TextPositionState *VAR_0)
{
 if (!VAR_0->is_multibyte)
  return VAR_0->last_match - VAR_0->str1 + 1;
 else
 {

  while (VAR_0->refpoint < VAR_0->last_match)
  {
   VAR_0->refpoint += FUNC_1(VAR_0->refpoint);
   VAR_0->refpos++;
  }
  FUNC_0(VAR_0->refpoint == VAR_0->last_match);
  return VAR_0->refpos + 1;
 }
}
