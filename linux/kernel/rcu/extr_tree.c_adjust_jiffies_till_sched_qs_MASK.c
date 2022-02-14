
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,unsigned long) ;

__attribute__((used)) static void FUNC_3(void)
{
 unsigned long VAR_8;


 if (VAR_5 != VAR_2) {
  FUNC_1(VAR_6, VAR_5);
  return;
 }

 VAR_8 = FUNC_0(VAR_3) +
        2 * FUNC_0(VAR_4);
 if (VAR_8 < VAR_0 / 10 + VAR_7 / VAR_1)
  VAR_8 = VAR_0 / 10 + VAR_7 / VAR_1;
 FUNC_2("RCU calculated value of scheduler-enlistment delay is %ld jiffies.\n", VAR_8);
 FUNC_1(VAR_6, VAR_8);
}
