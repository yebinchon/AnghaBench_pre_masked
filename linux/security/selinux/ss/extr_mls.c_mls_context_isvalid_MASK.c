
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_datum {int range; } ;
struct TYPE_2__ {int nprim; } ;
struct policydb {struct user_datum** user_val_to_struct; TYPE_1__ p_users; int mls_enabled; } ;
struct context {scalar_t__ role; int user; int range; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct policydb*,int *) ;

int FUNC_2(struct policydb *VAR_1, struct context *VAR_2)
{
 struct user_datum *VAR_3;

 if (!VAR_1->mls_enabled)
  return 1;

 if (!FUNC_1(VAR_1, &VAR_2->range))
  return 0;

 if (VAR_2->role == VAR_0)
  return 1;




 if (!VAR_2->user || VAR_2->user > VAR_1->p_users.nprim)
  return 0;
 VAR_3 = VAR_1->user_val_to_struct[VAR_2->user - 1];
 if (!FUNC_0(VAR_3->range, VAR_2->range))
  return 0;

 return 1;
}
