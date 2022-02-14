
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 char* FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;
 FUNC_1(VAR_0, "Out of memory.\n");
 FUNC_0(1);
}
