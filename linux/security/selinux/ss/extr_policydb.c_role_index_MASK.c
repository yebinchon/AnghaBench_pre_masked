
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct role_datum {int value; scalar_t__ bounds; } ;
struct TYPE_2__ {int nprim; } ;
struct policydb {struct role_datum** role_val_to_struct; void*** sym_val_to_name; TYPE_1__ p_roles; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(void *VAR_2, void *VAR_3, void *VAR_4)
{
 struct policydb *VAR_5;
 struct role_datum *VAR_6;

 VAR_6 = VAR_3;
 VAR_5 = VAR_4;
 if (!VAR_6->value
     || VAR_6->value > VAR_5->p_roles.nprim
     || VAR_6->bounds > VAR_5->p_roles.nprim)
  return -VAR_0;

 VAR_5->sym_val_to_name[VAR_1][VAR_6->value - 1] = VAR_2;
 VAR_5->role_val_to_struct[VAR_6->value - 1] = VAR_6;
 return 0;
}
