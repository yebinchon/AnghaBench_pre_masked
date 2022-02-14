
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char**,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(char *VAR_2, pid_t VAR_3)
 {
 char *VAR_4;
 char *VAR_5 = ((void*)0);
 pid_t VAR_6;

 if (VAR_1 > 2)
  FUNC_0(VAR_0, "jit marker trying : %s\n", VAR_2);



 VAR_4 = FUNC_4(VAR_2, '/');
 if (!VAR_4)
  return -1;




 if (FUNC_3(VAR_4, "/jit-", 5))
  return -1;




 VAR_4 += 5;




 if (!FUNC_1(*VAR_4))
  return -1;

 VAR_6 = (int)FUNC_5(VAR_4, &VAR_5, 10);
 if (!VAR_5)
  return -1;





 if (VAR_3 && VAR_6 != VAR_3)
  return -1;



 if (FUNC_2(VAR_5, ".dump"))
  return -1;

 if (VAR_1 > 0)
  FUNC_0(VAR_0, "jit marker found: %s\n", VAR_2);

 return 0;
}
