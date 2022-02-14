
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct aa_label {int dummy; } ;
struct TYPE_3__ {int list; } ;
struct aa_profile {struct aa_label label; TYPE_2__* ns; TYPE_1__ base; } ;
struct TYPE_4__ {int labels; int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct aa_profile*) ;
 struct aa_label* FUNC_2 (int *,struct aa_label*) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct list_head *VAR_0, struct aa_profile *VAR_1)
{
 struct aa_label *VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);
 FUNC_0(!VAR_1->ns);
 FUNC_0(!FUNC_5(&VAR_1->ns->lock));

 FUNC_4(&VAR_1->base.list, VAR_0);

 FUNC_1(VAR_1);
 VAR_2 = FUNC_2(&VAR_1->ns->labels, &VAR_1->label);
 FUNC_0(VAR_2 != &VAR_1->label);
 FUNC_3(VAR_2);
}
