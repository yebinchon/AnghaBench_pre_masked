
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {scalar_t__ reset_jiffies; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct fw_card *VAR_2)
{
 for (;;) {
  s64 VAR_3 = (VAR_2->reset_jiffies + VAR_1) - FUNC_0();
  if (VAR_3 <= 0)
   return 0;
  if (FUNC_1(VAR_3) > 0)
   return -VAR_0;
 }
}
