
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int nprim; } ;
struct TYPE_15__ {int nprim; } ;
struct TYPE_14__ {int nprim; } ;
struct TYPE_13__ {int nprim; } ;
struct TYPE_18__ {int nel; } ;
struct TYPE_12__ {int nprim; } ;
struct TYPE_11__ {int nprim; } ;
struct TYPE_10__ {int nprim; } ;
struct policydb {TYPE_8__* symtab; void** sym_val_to_name; void* type_val_to_struct; TYPE_7__ p_types; void* user_val_to_struct; TYPE_6__ p_users; void* role_val_to_struct; TYPE_5__ p_roles; void* class_val_to_struct; TYPE_4__ p_classes; TYPE_9__ te_avtab; TYPE_3__ p_bools; TYPE_2__ p_cats; TYPE_1__ p_levels; scalar_t__ mls_enabled; } ;
struct TYPE_17__ {int table; int nprim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_9__*,char*) ;
 int FUNC_1 (struct policydb*) ;
 int FUNC_2 (int ,int ,struct policydb*) ;
 int * VAR_3 ;
 void* FUNC_3 (int ,int,int ) ;
 void* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (char*,int ,int ,...) ;
 int FUNC_6 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_7(struct policydb *VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4->mls_enabled)
  FUNC_5("SELinux:  %d users, %d roles, %d types, %d bools, %d sens, %d cats\n",
    VAR_4->p_users.nprim, VAR_4->p_roles.nprim, VAR_4->p_types.nprim,
    VAR_4->p_bools.nprim, VAR_4->p_levels.nprim, VAR_4->p_cats.nprim);
 else
  FUNC_5("SELinux:  %d users, %d roles, %d types, %d bools\n",
    VAR_4->p_users.nprim, VAR_4->p_roles.nprim, VAR_4->p_types.nprim,
    VAR_4->p_bools.nprim);

 FUNC_5("SELinux:  %d classes, %d rules\n",
   VAR_4->p_classes.nprim, VAR_4->te_avtab.nel);






 VAR_4->class_val_to_struct = FUNC_3(VAR_4->p_classes.nprim,
      sizeof(*VAR_4->class_val_to_struct),
      VAR_1);
 if (!VAR_4->class_val_to_struct)
  return -VAR_0;

 VAR_4->role_val_to_struct = FUNC_3(VAR_4->p_roles.nprim,
     sizeof(*VAR_4->role_val_to_struct),
     VAR_1);
 if (!VAR_4->role_val_to_struct)
  return -VAR_0;

 VAR_4->user_val_to_struct = FUNC_3(VAR_4->p_users.nprim,
     sizeof(*VAR_4->user_val_to_struct),
     VAR_1);
 if (!VAR_4->user_val_to_struct)
  return -VAR_0;

 VAR_4->type_val_to_struct = FUNC_4(VAR_4->p_types.nprim,
      sizeof(*VAR_4->type_val_to_struct),
      VAR_1);
 if (!VAR_4->type_val_to_struct)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_4);
 if (VAR_6)
  goto out;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->sym_val_to_name[VAR_5] = FUNC_4(VAR_4->symtab[VAR_5].nprim,
       sizeof(char *),
       VAR_1);
  if (!VAR_4->sym_val_to_name[VAR_5])
   return -VAR_0;

  VAR_6 = FUNC_2(VAR_4->symtab[VAR_5].table, VAR_3[VAR_5], VAR_4);
  if (VAR_6)
   goto out;
 }
 VAR_6 = 0;
out:
 return VAR_6;
}
