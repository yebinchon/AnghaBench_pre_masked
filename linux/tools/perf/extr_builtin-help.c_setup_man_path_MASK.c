
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 char *VAR_1;
 const char *VAR_2 = FUNC_2("MANPATH");





 if (FUNC_0(&VAR_1, "%d:%s", FUNC_5(VAR_0), VAR_2 ?: "") > 0) {
  FUNC_4("MANPATH", VAR_1, 1);
  FUNC_1(VAR_1);
 } else {
  FUNC_3("Unable to setup man path");
 }
}
