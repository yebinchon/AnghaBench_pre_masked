
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct overflow_data {TYPE_1__* type; int location; } ;
typedef int rhs_val_str ;
struct TYPE_4__ {int type_name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (unsigned long*) ;
 int FUNC_5 (int *,unsigned long*) ;
 int FUNC_6 (char*,int,TYPE_1__*,void*) ;

void FUNC_7(struct overflow_data *VAR_1,
    void *VAR_2, void *VAR_3)
{
 unsigned long VAR_4;
 char VAR_5[VAR_0];

 if (FUNC_2(&VAR_1->location))
  return;

 FUNC_5(&VAR_1->location, &VAR_4);

 FUNC_6(VAR_5, sizeof(VAR_5), VAR_1->type, VAR_3);

 if (FUNC_3(VAR_1->type) && FUNC_0(VAR_1->type, VAR_3) == -1)
  FUNC_1("division of %s by -1 cannot be represented in type %s\n",
   VAR_5, VAR_1->type->type_name);
 else
  FUNC_1("division by zero\n");

 FUNC_4(&VAR_4);
}
