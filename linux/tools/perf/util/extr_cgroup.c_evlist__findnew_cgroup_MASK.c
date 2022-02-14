
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evlist {int dummy; } ;
struct cgroup {int dummy; } ;


 struct cgroup* FUNC_0 (char const*) ;
 struct cgroup* FUNC_1 (struct evlist*,char const*) ;

struct cgroup *FUNC_2(struct evlist *VAR_0, const char *VAR_1)
{
 struct cgroup *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2 ?: FUNC_0(VAR_1);
}
