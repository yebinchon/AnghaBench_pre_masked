
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct sigmadsp {TYPE_1__ rate_constraints; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct sigmadsp*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct sigmadsp *VAR_0,
 unsigned int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0)
  return 0;

 if (VAR_0->rate_constraints.count) {
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (VAR_2 < 0)
   return 0;

  return FUNC_0(VAR_2);
 } else {
  return ~0;
 }
}
