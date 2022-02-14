
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,char*,char*,char const*,char*,char*) ;
 int FUNC_1 (char*) ;
 char* VAR_1 ;
 scalar_t__ FUNC_2 (char*,int*,struct evsel*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;

int FUNC_5(const char *VAR_2, struct evsel *VAR_3)
{
 char *VAR_4, VAR_5[VAR_0];
 bool VAR_6 = 0;

 FUNC_3(VAR_5, 0, VAR_0);
 if (FUNC_2(VAR_5, &VAR_6, VAR_3))
  return -1;

 if (FUNC_0(&VAR_4, "%s%s %s %s%s 2>&1 | less",
   VAR_6 ? "perf script -s " : "",
   VAR_5,
   VAR_2 ? VAR_2 : "",
   VAR_1 ? "-i " : "",
   VAR_1 ? VAR_1 : "") < 0)
  return -1;

 FUNC_4(VAR_4);
 FUNC_1(VAR_4);

 return 0;
}
