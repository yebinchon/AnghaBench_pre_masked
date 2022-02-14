
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_exception_item {int access; int minor; int major; int type; } ;
struct TYPE_2__ {int parent; } ;
struct dev_cgroup {scalar_t__ behavior; int exceptions; TYPE_1__ css; } ;


 scalar_t__ VAR_0 ;
 struct dev_cgroup* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct dev_cgroup *VAR_1,
      struct dev_exception_item *VAR_2)
{
 struct dev_cgroup *VAR_3 = FUNC_0(VAR_1->css.parent);

 if (!VAR_3)
  return 1;


 if (VAR_1->behavior == VAR_0)
  return 1;





 return !FUNC_1(&VAR_3->exceptions, VAR_2->type,
     VAR_2->major, VAR_2->minor, VAR_2->access);
}
