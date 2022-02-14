
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_5;
 char VAR_6 = 0;

retry:
 VAR_5 = FUNC_0(VAR_4, &VAR_6, 1);
 if (VAR_5 < 0)
 {

  if (VAR_3 == VAR_1)
   goto retry;





  if (VAR_3 == VAR_0 || VAR_3 == VAR_2)
   return;






  return;
 }
}
