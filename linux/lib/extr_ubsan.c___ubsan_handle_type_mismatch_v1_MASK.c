
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type_mismatch_data_v1 {unsigned long log_alignment; int type_check_kind; int type; int location; } ;
struct type_mismatch_data_common {unsigned long alignment; int type_check_kind; int type; int * location; } ;


 int FUNC_0 (struct type_mismatch_data_common*,unsigned long) ;

void FUNC_1(struct type_mismatch_data_v1 *VAR_0,
    void *VAR_1)
{

 struct type_mismatch_data_common VAR_2 = {
  .location = &VAR_0->location,
  .type = VAR_0->type,
  .alignment = 1UL << VAR_0->log_alignment,
  .type_check_kind = VAR_0->type_check_kind
 };

 FUNC_0(&VAR_2, (unsigned long)VAR_1);
}
