
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_mday; } ;
typedef int fsec_t ;


 int FUNC_0 (double,struct tm*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(double VAR_1, struct tm *VAR_2, fsec_t *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_1 == 0)
  return;
 VAR_1 *= VAR_4;
 VAR_5 = (int) VAR_1;
 VAR_2->tm_mday += VAR_5;
 VAR_1 -= VAR_5;
 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
}
