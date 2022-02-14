
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,char*,int) ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(void)
{
 char VAR_3[20];
 ssize_t VAR_4;


 VAR_3[0] = 23;
 VAR_3[1] = 8;
 VAR_3[2] = 68;
 FUNC_1(VAR_3 + 3, "tracing", 7);

 if (FUNC_3(VAR_1, VAR_3, 10) != 10)
  return -1;

 VAR_4 = FUNC_2(VAR_0) + 1;
 if (FUNC_3(VAR_1, VAR_0, VAR_4) != VAR_4)
  return -1;


 if (FUNC_0())
  VAR_3[0] = 1;
 else
  VAR_3[0] = 0;

 if (FUNC_3(VAR_1, VAR_3, 1) != 1)
  return -1;


 VAR_3[0] = sizeof(long);
 if (FUNC_3(VAR_1, VAR_3, 1) != 1)
  return -1;


 if (FUNC_3(VAR_1, &VAR_2, 4) != 4)
  return -1;

 return 0;
}
