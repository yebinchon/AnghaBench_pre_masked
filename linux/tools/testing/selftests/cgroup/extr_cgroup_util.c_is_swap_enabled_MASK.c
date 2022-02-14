
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char const*) ;

int FUNC_2(void)
{
 char VAR_1[VAR_0];
 const char VAR_2[] = "\n";
 int VAR_3 = 0;
 char *VAR_4;

 if (FUNC_0("/proc/swaps", VAR_1, sizeof(VAR_1)) <= 0)
  return -1;

 for (VAR_4 = FUNC_1(VAR_1, VAR_2); VAR_4; VAR_4 = FUNC_1(((void*)0), VAR_2))
  VAR_3++;

 return VAR_3 > 1;
}
