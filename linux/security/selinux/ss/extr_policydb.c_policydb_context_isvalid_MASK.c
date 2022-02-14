
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct user_datum {int roles; } ;
struct role_datum {int types; } ;
struct TYPE_6__ {scalar_t__ nprim; } ;
struct TYPE_5__ {int nprim; } ;
struct TYPE_4__ {int nprim; } ;
struct policydb {struct user_datum** user_val_to_struct; struct role_datum** role_val_to_struct; TYPE_3__ p_types; TYPE_2__ p_users; TYPE_1__ p_roles; } ;
struct context {int role; int user; scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct policydb*,struct context*) ;

int FUNC_2(struct policydb *VAR_1, struct context *VAR_2)
{
 struct role_datum *VAR_3;
 struct user_datum *VAR_4;

 if (!VAR_2->role || VAR_2->role > VAR_1->p_roles.nprim)
  return 0;

 if (!VAR_2->user || VAR_2->user > VAR_1->p_users.nprim)
  return 0;

 if (!VAR_2->type || VAR_2->type > VAR_1->p_types.nprim)
  return 0;

 if (VAR_2->role != VAR_0) {



  VAR_3 = VAR_1->role_val_to_struct[VAR_2->role - 1];
  if (!VAR_3 || !FUNC_0(&VAR_3->types, VAR_2->type - 1))

   return 0;




  VAR_4 = VAR_1->user_val_to_struct[VAR_2->user - 1];
  if (!VAR_4)
   return 0;

  if (!FUNC_0(&VAR_4->roles, VAR_2->role - 1))

   return 0;
 }

 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 return 1;
}
