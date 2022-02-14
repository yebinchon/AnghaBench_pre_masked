
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_4(void)
{
 TimestampTz VAR_1;

 FUNC_0();


 VAR_1 = FUNC_2();
 if (VAR_1 && FUNC_1() >= VAR_1)
  return 1;




 FUNC_3(VAR_0);





 VAR_0 *= 2;
 if (VAR_0 > 1000000)
  VAR_0 = 1000000;

 return 0;
}
