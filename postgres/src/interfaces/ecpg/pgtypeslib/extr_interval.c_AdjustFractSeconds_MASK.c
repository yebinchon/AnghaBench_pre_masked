
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_sec; } ;
typedef int fsec_t ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static void
FUNC_1(double VAR_0, struct tm *VAR_1, fsec_t *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_0 == 0)
  return;
 VAR_0 *= VAR_3;
 VAR_4 = (int) VAR_0;
 VAR_1->tm_sec += VAR_4;
 VAR_0 -= VAR_4;
 *VAR_2 += FUNC_0(VAR_0 * 1000000);
}
