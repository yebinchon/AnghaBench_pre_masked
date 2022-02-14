
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;
typedef int rseed ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (unsigned int*,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5(void)
{
 unsigned int VAR_3;

 VAR_0 = FUNC_1();
 VAR_2 = FUNC_0();
 VAR_1 = FUNC_4(VAR_2);






 if (!FUNC_2(&VAR_3, sizeof(VAR_3)))
 {







  VAR_3 = ((uint64) VAR_0) ^
   ((uint64) VAR_2 << 12) ^
   ((uint64) VAR_2 >> 20);
 }
 FUNC_3(VAR_3);
}
