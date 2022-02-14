
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rnorm_data {double spare; int seed; scalar_t__ has_spare; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (double) ;
 double FUNC_1 (int ) ;
 double FUNC_2 (double) ;

__attribute__((used)) static double
FUNC_3(struct rnorm_data* VAR_2)
{
  double VAR_3, VAR_4, VAR_5;

  if(VAR_2->has_spare) {
    VAR_2->has_spare = VAR_0;
    return VAR_2->spare;
  }

  VAR_2->has_spare = VAR_1;
  do {
    VAR_3 = FUNC_1(VAR_2->seed) * 2.0 - 1.0;
    VAR_4 = FUNC_1(VAR_2->seed) * 2.0 - 1.0;
    VAR_5 = VAR_3 * VAR_3 + VAR_4 * VAR_4;
  } while (VAR_5 >= 1.0 || VAR_5 == 0.0);

  VAR_5 = FUNC_2(-2.0 * FUNC_0(VAR_5) / VAR_5);
  VAR_2->spare = VAR_4 * VAR_5;
  return VAR_3 * VAR_5;
}
