
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_exception_item {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct dev_cgroup {int behavior; TYPE_1__ css; } ;


 struct dev_cgroup* FUNC_0 (int ) ;
 int FUNC_1 (struct dev_cgroup*,struct dev_exception_item*,int ) ;

__attribute__((used)) static int FUNC_2(struct dev_cgroup *VAR_0,
      struct dev_exception_item *VAR_1)
{
 struct dev_cgroup *VAR_2 = FUNC_0(VAR_0->css.parent);

 if (!VAR_2)
  return 1;
 return FUNC_1(VAR_2, VAR_1, VAR_0->behavior);
}
