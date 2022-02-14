
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry_flags; void* lp_ele; int lp; int value_buf; int field_buf; void* master_fields_ptr; } ;
typedef TYPE_1__ streamIterator ;
typedef int int64_t ;


 int VAR_0 ;
 unsigned char* FUNC_0 (void*,int *,int ) ;
 void* FUNC_1 (int ,void*) ;

void FUNC_2(streamIterator *VAR_1, unsigned char **VAR_2, unsigned char **VAR_3, int64_t *VAR_4, int64_t *VAR_5) {
    if (VAR_1->entry_flags & VAR_0) {
        *VAR_2 = FUNC_0(VAR_1->master_fields_ptr,VAR_4,VAR_1->field_buf);
        VAR_1->master_fields_ptr = FUNC_1(VAR_1->lp,VAR_1->master_fields_ptr);
    } else {
        *VAR_2 = FUNC_0(VAR_1->lp_ele,VAR_4,VAR_1->field_buf);
        VAR_1->lp_ele = FUNC_1(VAR_1->lp,VAR_1->lp_ele);
    }
    *VAR_3 = FUNC_0(VAR_1->lp_ele,VAR_5,VAR_1->value_buf);
    VAR_1->lp_ele = FUNC_1(VAR_1->lp,VAR_1->lp_ele);
}
