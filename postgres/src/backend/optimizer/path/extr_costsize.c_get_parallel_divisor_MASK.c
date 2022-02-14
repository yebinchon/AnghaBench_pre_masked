
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double parallel_workers; } ;
typedef TYPE_1__ Path ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static double
FUNC_0(Path *VAR_1)
{
 double VAR_2 = VAR_1->parallel_workers;
 if (VAR_0)
 {
  double VAR_3;

  VAR_3 = 1.0 - (0.3 * VAR_1->parallel_workers);
  if (VAR_3 > 0)
   VAR_2 += VAR_3;
 }

 return VAR_2;
}
