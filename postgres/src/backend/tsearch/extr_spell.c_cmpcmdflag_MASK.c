
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i; int s; } ;
struct TYPE_4__ {scalar_t__ flagMode; TYPE_1__ flag; } ;
typedef TYPE_2__ CompoundAffixFlag ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_1, const void *VAR_2)
{
 CompoundAffixFlag *VAR_3 = (CompoundAffixFlag *) VAR_1,
      *VAR_4 = (CompoundAffixFlag *) VAR_2;

 FUNC_0(VAR_3->flagMode == VAR_4->flagMode);

 if (VAR_3->flagMode == VAR_0)
 {
  if (VAR_3->flag.i == VAR_4->flag.i)
   return 0;

  return (VAR_3->flag.i > VAR_4->flag.i) ? 1 : -1;
 }

 return FUNC_1(VAR_3->flag.s, VAR_4->flag.s);
}
