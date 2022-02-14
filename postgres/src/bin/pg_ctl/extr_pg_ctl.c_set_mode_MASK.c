
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_9)
{
 if (FUNC_3(VAR_9, "s") == 0 || FUNC_3(VAR_9, "smart") == 0)
 {
  VAR_7 = VAR_5;
  VAR_8 = VAR_4;
 }
 else if (FUNC_3(VAR_9, "f") == 0 || FUNC_3(VAR_9, "fast") == 0)
 {
  VAR_7 = VAR_0;
  VAR_8 = VAR_2;
 }
 else if (FUNC_3(VAR_9, "i") == 0 || FUNC_3(VAR_9, "immediate") == 0)
 {
  VAR_7 = VAR_1;
  VAR_8 = VAR_3;
 }
 else
 {
  FUNC_4(FUNC_0("%s: unrecognized shutdown mode \"%s\"\n"), VAR_6, VAR_9);
  FUNC_1();
  FUNC_2(1);
 }
}
