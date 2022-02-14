
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_mismatch_data_common {int type_check_kind; int alignment; int type; int * location; } ;
struct type_mismatch_data {int type_check_kind; int alignment; int type; int location; } ;


 int FUNC_0 (struct type_mismatch_data_common*,unsigned long) ;

void FUNC_1(struct type_mismatch_data *VAR_0,
    void *VAR_1)
{
 struct type_mismatch_data_common VAR_2 = {
  .location = &VAR_0->location,
  .type = VAR_0->type,
  .alignment = VAR_0->alignment,
  .type_check_kind = VAR_0->type_check_kind
 };

 FUNC_0(&VAR_2, (unsigned long)VAR_1);
}
