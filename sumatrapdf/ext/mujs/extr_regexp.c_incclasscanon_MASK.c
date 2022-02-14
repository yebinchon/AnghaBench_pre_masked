
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* end; scalar_t__* spans; } ;
typedef scalar_t__ Rune ;
typedef TYPE_1__ Reclass ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(Reclass *VAR_0, Rune VAR_1)
{
 Rune *VAR_2, VAR_3;
 for (VAR_2 = VAR_0->spans; VAR_2 < VAR_0->end; VAR_2 += 2)
  for (VAR_3 = VAR_2[0]; VAR_3 <= VAR_2[1]; ++VAR_3)
   if (VAR_1 == FUNC_0(VAR_3))
    return 1;
 return 0;
}
