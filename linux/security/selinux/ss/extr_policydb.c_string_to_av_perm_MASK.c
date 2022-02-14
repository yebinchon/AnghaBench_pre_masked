
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
typedef int u16 ;
struct TYPE_6__ {int nprim; } ;
struct policydb {struct class_datum** class_val_to_struct; TYPE_3__ p_classes; } ;
struct perm_datum {int value; } ;
struct TYPE_4__ {int table; } ;
struct common_datum {TYPE_1__ permissions; } ;
struct TYPE_5__ {int table; } ;
struct class_datum {TYPE_2__ permissions; struct common_datum* comdatum; } ;


 struct perm_datum* FUNC_0 (int ,char const*) ;

u32 FUNC_1(struct policydb *VAR_0, u16 VAR_1, const char *VAR_2)
{
 struct class_datum *VAR_3;
 struct perm_datum *VAR_4 = ((void*)0);
 struct common_datum *VAR_5;

 if (!VAR_1 || VAR_1 > VAR_0->p_classes.nprim)
  return 0;

 VAR_3 = VAR_0->class_val_to_struct[VAR_1-1];
 VAR_5 = VAR_3->comdatum;
 if (VAR_5)
  VAR_4 = FUNC_0(VAR_5->permissions.table,
       VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_3->permissions.table,
       VAR_2);
 if (!VAR_4)
  return 0;

 return 1U << (VAR_4->value-1);
}
