
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double count; double sum; double sum2; } ;
typedef TYPE_1__ SimpleStats ;


 int FUNC_0 (char*,char const*,double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0, SimpleStats *VAR_1)
{
 if (VAR_1->count > 0)
 {
  double VAR_2 = VAR_1->sum / VAR_1->count;
  double VAR_3 = FUNC_1(VAR_1->sum2 / VAR_1->count - VAR_2 * VAR_2);

  FUNC_0("%s average = %.3f ms\n", VAR_0, 0.001 * VAR_2);
  FUNC_0("%s stddev = %.3f ms\n", VAR_0, 0.001 * VAR_3);
 }
}
