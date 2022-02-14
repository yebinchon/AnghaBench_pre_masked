
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int table; } ;
struct policydb {TYPE_1__ p_classes; } ;
struct class_datum {int value; } ;


 struct class_datum* FUNC_0 (int ,char const*) ;

u16 FUNC_1(struct policydb *VAR_0, const char *VAR_1)
{
 struct class_datum *VAR_2;

 VAR_2 = FUNC_0(VAR_0->p_classes.table, VAR_1);
 if (!VAR_2)
  return 0;

 return VAR_2->value;
}
