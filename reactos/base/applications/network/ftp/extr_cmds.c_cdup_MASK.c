
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(int VAR_4, const char *VAR_5[])
{
 if (FUNC_0("CDUP") == VAR_0 && VAR_1 == 500) {
  if (VAR_3) {
   FUNC_2("CDUP command not recognized, trying XCUP\n");
   (void) FUNC_1(VAR_2);
  }
  (void) FUNC_0("XCUP");
 }
}
