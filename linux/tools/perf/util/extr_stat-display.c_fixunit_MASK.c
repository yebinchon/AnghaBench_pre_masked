
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;


 char* FUNC_0 (struct evsel*) ;
 int FUNC_1 (char*,int,char*,char*,char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_3(char *VAR_0, struct evsel *VAR_1,
      const char *VAR_2)
{
 if (!FUNC_2(VAR_2, "of all", 6)) {
  FUNC_1(VAR_0, 1024, "%s %s", FUNC_0(VAR_1),
    VAR_2);
  return VAR_0;
 }
 return VAR_2;
}
