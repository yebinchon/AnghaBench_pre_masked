
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_1)
{
 const char *VAR_2;
 int VAR_3;


 FUNC_3(&VAR_3);

 VAR_2 = "Failed";

 if (FUNC_0(VAR_3) && FUNC_1(VAR_3) == VAR_0) {
  VAR_2 = "Child process hit the breakpoint";
 }

 FUNC_2("%s Result: [%s]\n", VAR_1, VAR_2);
}
