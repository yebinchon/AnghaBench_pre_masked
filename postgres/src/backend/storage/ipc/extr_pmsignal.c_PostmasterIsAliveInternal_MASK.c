
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

bool
FUNC_3(void)
{
 {
  char VAR_9;
  ssize_t VAR_10;

  VAR_10 = FUNC_2(VAR_7[VAR_3], &VAR_9, 1);





  if (VAR_10 < 0 && (VAR_6 == VAR_0 || VAR_6 == VAR_1))
   return 1;
  else
  {
   if (VAR_10 < 0)
    FUNC_1(VAR_2, "read on postmaster death monitoring pipe failed: %m");
   else if (VAR_10 > 0)
    FUNC_1(VAR_2, "unexpected data in postmaster death monitoring pipe");

   return 0;
  }
 }
}
