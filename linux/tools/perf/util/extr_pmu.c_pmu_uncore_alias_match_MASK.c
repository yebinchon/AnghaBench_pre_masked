
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char*,int ) ;
 char* FUNC_4 (char const*,char*) ;
 char* FUNC_5 (char*,char*,char**) ;

__attribute__((used)) static bool FUNC_6(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2 = ((void*)0), *VAR_3, *VAR_4;
 bool VAR_5;

 VAR_4 = FUNC_1(VAR_0);
 if (!VAR_4)
  return 0;




 VAR_3 = FUNC_5(VAR_4, ",", &VAR_2);
 if (FUNC_3(VAR_0, VAR_3, FUNC_2(VAR_3))) {
  VAR_5 = 0;
  goto out;
 }
 for (; VAR_3; VAR_1 += FUNC_2(VAR_3), VAR_3 = FUNC_5(((void*)0), ",", &VAR_2)) {
  VAR_1 = FUNC_4(VAR_1, VAR_3);
  if (!VAR_1) {
   VAR_5 = 0;
   goto out;
  }
 }

 VAR_5 = 1;
out:
 FUNC_0(VAR_4);
 return VAR_5;
}
