
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ startup_cost; double total_cost; } ;
typedef TYPE_1__ Path ;
typedef scalar_t__ Cost ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;

int
FUNC_1(Path *VAR_1, Path *VAR_2,
         double VAR_3)
{
 Cost VAR_4,
    VAR_5;

 if (VAR_3 <= 0.0 || VAR_3 >= 1.0)
  return FUNC_0(VAR_1, VAR_2, VAR_0);
 VAR_4 = VAR_1->startup_cost +
  VAR_3 * (VAR_1->total_cost - VAR_1->startup_cost);
 VAR_5 = VAR_2->startup_cost +
  VAR_3 * (VAR_2->total_cost - VAR_2->startup_cost);
 if (VAR_4 < VAR_5)
  return -1;
 if (VAR_4 > VAR_5)
  return +1;
 return 0;
}
