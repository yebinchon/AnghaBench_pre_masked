
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_0 ;
 int FUNC_7 (scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_8(int (*VAR_1)(void), char *VAR_2)
{
 int VAR_3;
 pid_t VAR_4;
 int VAR_5;

 FUNC_3(VAR_0);
 VAR_4 = FUNC_4();

 if (VAR_4) {
  FUNC_7(VAR_4, &VAR_3, 0);
  if (FUNC_1(VAR_3)) {
   VAR_5 = FUNC_0(VAR_3);
   if (!VAR_5)
    FUNC_6("[RUN]\t%s\n", VAR_2);
   else
    FUNC_5("[RUN]\t%s\n", VAR_2);
   return VAR_5;
  }
  return 1;
 }

 FUNC_2(VAR_1());
}
