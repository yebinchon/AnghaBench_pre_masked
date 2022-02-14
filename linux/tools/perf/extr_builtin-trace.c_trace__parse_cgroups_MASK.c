
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace {TYPE_2__* evlist; int cgroup; } ;
struct option {struct trace* value; } ;
struct TYPE_3__ {int entries; } ;
struct TYPE_4__ {TYPE_1__ core; } ;


 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct option const*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_0, const char *VAR_1, int VAR_2)
{
 struct trace *VAR_3 = VAR_0->value;

 if (!FUNC_1(&VAR_3->evlist->core.entries))
  return FUNC_2(VAR_0, VAR_1, VAR_2);

 VAR_3->cgroup = FUNC_0(VAR_3->evlist, VAR_1);

 return 0;
}
