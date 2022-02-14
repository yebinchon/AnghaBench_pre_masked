
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nprim; } ;
struct policydb {struct cond_bool_datum** bool_val_to_struct; void*** sym_val_to_name; TYPE_1__ p_bools; } ;
struct cond_bool_datum {int value; } ;


 int VAR_0 ;
 size_t VAR_1 ;

int FUNC_0(void *VAR_2, void *VAR_3, void *VAR_4)
{
 struct policydb *VAR_5;
 struct cond_bool_datum *VAR_6;

 VAR_6 = VAR_3;
 VAR_5 = VAR_4;

 if (!VAR_6->value || VAR_6->value > VAR_5->p_bools.nprim)
  return -VAR_0;

 VAR_5->sym_val_to_name[VAR_1][VAR_6->value - 1] = VAR_2;
 VAR_5->bool_val_to_struct[VAR_6->value - 1] = VAR_6;

 return 0;
}
