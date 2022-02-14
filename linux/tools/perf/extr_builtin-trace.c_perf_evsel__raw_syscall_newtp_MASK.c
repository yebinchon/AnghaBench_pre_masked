
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;


 scalar_t__ FUNC_0 (struct evsel*) ;
 int FUNC_1 (struct evsel*) ;
 scalar_t__ FUNC_2 (struct evsel*,void*) ;
 struct evsel* FUNC_3 (char*,char const*) ;

__attribute__((used)) static struct evsel *FUNC_4(const char *VAR_0, void *VAR_1)
{
 struct evsel *VAR_2 = FUNC_3("raw_syscalls", VAR_0);


 if (FUNC_0(VAR_2))
  VAR_2 = FUNC_3("syscalls", VAR_0);

 if (FUNC_0(VAR_2))
  return ((void*)0);

 if (FUNC_2(VAR_2, VAR_1))
  goto out_delete;

 return VAR_2;

out_delete:
 FUNC_1(VAR_2);
 return ((void*)0);
}
