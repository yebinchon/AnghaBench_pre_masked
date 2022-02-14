
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 if (VAR_0)
 {
  FUNC_3(FUNC_0("caught signal\n"));
  FUNC_2(VAR_3);
  FUNC_1(1);
 }
 else if (VAR_2)
 {
  FUNC_3(FUNC_0("could not write to child process: %s\n"),
      FUNC_4(VAR_1));
  FUNC_2(VAR_3);
  FUNC_1(1);
 }
 else
 {

  FUNC_3(FUNC_0("ok\n"));
  FUNC_2(VAR_3);
 }
}
