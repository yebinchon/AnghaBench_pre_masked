
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evsel {int dummy; } ;
struct evlist {int dummy; } ;


 int FUNC_0 (struct evsel*) ;
 struct evsel* FUNC_1 (struct evlist*,char*) ;

int FUNC_2(struct evlist *VAR_0)
{
 struct evsel *VAR_1 = FUNC_1(VAR_0, "__bpf_stdout__");
 return FUNC_0(VAR_1);
}
