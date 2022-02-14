
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_0, const char *VAR_1,
     const char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4;
 int VAR_5;


 if (!VAR_2)
  VAR_3 = 32;
 else
  VAR_3 = FUNC_4(VAR_2) + 1;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return -1;

 if (FUNC_0(VAR_0, VAR_1, VAR_4, VAR_3)) {
  FUNC_1(VAR_4);
  return -1;
 }

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 FUNC_1(VAR_4);
 return VAR_5;
}
