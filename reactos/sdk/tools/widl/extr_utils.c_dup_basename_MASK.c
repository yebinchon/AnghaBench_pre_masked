
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (int) ;

char *FUNC_5(const char *VAR_0, const char *VAR_1)
{
 int VAR_2;
 int VAR_3 = FUNC_2(VAR_1);
 char *VAR_4;
 char *VAR_5;

 if(!VAR_0)
  VAR_0 = "widl.tab";

 VAR_5 = FUNC_3(VAR_0, '/');
 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_0, '\\');

 if (VAR_5)
  VAR_0 = VAR_5 + 1;

 VAR_2 = FUNC_2(VAR_0);


 VAR_4 = FUNC_4(VAR_2 +6 +1);
 FUNC_1(VAR_4, VAR_0);
 if(!FUNC_0(VAR_0 + VAR_2-VAR_3, VAR_1))
 {
  VAR_4[VAR_2 - VAR_3] = '\0';
 }
 return VAR_4;
}
