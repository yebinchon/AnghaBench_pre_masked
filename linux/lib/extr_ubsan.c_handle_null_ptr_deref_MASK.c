
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type_mismatch_data_common {size_t type_check_kind; TYPE_1__* type; int location; } ;
struct TYPE_2__ {int type_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 int FUNC_2 (unsigned long*) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct type_mismatch_data_common *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_1(VAR_1->location))
  return;

 FUNC_3(VAR_1->location, &VAR_2);

 FUNC_0("%s null pointer of type %s\n",
  VAR_0[VAR_1->type_check_kind],
  VAR_1->type->type_name);

 FUNC_2(&VAR_2);
}
