
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ TimestampTz ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(void)
{
 TimestampTz VAR_4;





 if (VAR_3 <= 0 || VAR_1 <= 0)
  return;

 if (VAR_2)
  return;






 VAR_4 = FUNC_0(VAR_1,
           VAR_3 / 2);
 if (VAR_0 >= VAR_4)
 {
  FUNC_1(1);
  VAR_2 = 1;


  if (FUNC_3() != 0)
   FUNC_2();
 }
}
