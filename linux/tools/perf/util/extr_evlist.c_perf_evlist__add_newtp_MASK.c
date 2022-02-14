
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {void* handler; } ;
struct evlist {int dummy; } ;


 scalar_t__ FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct evlist*,struct evsel*) ;
 struct evsel* FUNC_2 (char const*,char const*) ;

int FUNC_3(struct evlist *VAR_0,
      const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 struct evsel *VAR_4 = FUNC_2(VAR_1, VAR_2);

 if (FUNC_0(VAR_4))
  return -1;

 VAR_4->handler = VAR_3;
 FUNC_1(VAR_0, VAR_4);
 return 0;
}
