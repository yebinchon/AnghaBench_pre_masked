
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val_str ;
struct invalid_value_data {TYPE_1__* type; int location; } ;
struct TYPE_2__ {int type_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int *,unsigned long*) ;
 int FUNC_4 (char*,int,TYPE_1__*,void*) ;

void FUNC_5(struct invalid_value_data *VAR_1,
    void *VAR_2)
{
 unsigned long VAR_3;
 char VAR_4[VAR_0];

 if (FUNC_1(&VAR_1->location))
  return;

 FUNC_3(&VAR_1->location, &VAR_3);

 FUNC_4(VAR_4, sizeof(VAR_4), VAR_1->type, VAR_2);

 FUNC_0("load of value %s is not a valid value for type %s\n",
  VAR_4, VAR_1->type->type_name);

 FUNC_2(&VAR_3);
}
