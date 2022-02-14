
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int deadline; } ;
struct task_struct {TYPE_3__ dl; } ;
struct TYPE_4__ {int curr; } ;
struct TYPE_5__ {TYPE_1__ earliest_dl; int overloaded; } ;
struct rq {TYPE_2__ dl; struct task_struct* curr; } ;


 int FUNC_0 (struct rq*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rq*) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

__attribute__((used)) static void FUNC_4(struct rq *VAR_0, struct task_struct *VAR_1,
       int VAR_2)
{
 if (FUNC_3(VAR_1) || VAR_0->curr == VAR_1) {
  FUNC_2(VAR_0);

 }
}
