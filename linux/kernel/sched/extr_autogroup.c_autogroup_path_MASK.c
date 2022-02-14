
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_group {TYPE_1__* autogroup; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (char*,int,char*,char*,int ) ;
 int FUNC_1 (struct task_group*) ;

int FUNC_2(struct task_group *VAR_0, char *VAR_1, int VAR_2)
{
 if (!FUNC_1(VAR_0))
  return 0;

 return FUNC_0(VAR_1, VAR_2, "%s-%ld", "/autogroup", VAR_0->autogroup->id);
}
