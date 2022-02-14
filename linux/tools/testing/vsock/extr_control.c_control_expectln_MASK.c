
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,char*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

void FUNC_5(const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_0();
 if (FUNC_4(VAR_2, VAR_3) != 0) {
  FUNC_2(VAR_1, "expected \"%s\" on control socket, got \"%s\"\n",
   VAR_2, VAR_3);
  FUNC_1(VAR_0);
 }

 FUNC_3(VAR_3);
}
