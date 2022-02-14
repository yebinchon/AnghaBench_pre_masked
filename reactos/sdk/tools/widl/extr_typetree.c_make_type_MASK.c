
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_type; int ignore; int typelib_idx; int loc_info; void* is_alias; void* checked; void* tfswrite; void* user_types_registered; void* written; void* defined; scalar_t__ ptrdesc; scalar_t__ typestring_offset; int details; int * orig; int * c_name; int * attrs; int * namespace; int * name; } ;
typedef TYPE_1__ type_t ;
typedef enum type_type { ____Placeholder_type_type } type_type ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ VAR_1 ;

type_t *FUNC_3(enum type_type VAR_2)
{
    type_t *VAR_3 = FUNC_0();
    VAR_3->name = ((void*)0);
    VAR_3->namespace = ((void*)0);
    VAR_3->type_type = VAR_2;
    VAR_3->attrs = ((void*)0);
    VAR_3->c_name = ((void*)0);
    VAR_3->orig = ((void*)0);
    FUNC_2(&VAR_3->details, 0, sizeof(VAR_3->details));
    VAR_3->typestring_offset = 0;
    VAR_3->ptrdesc = 0;
    VAR_3->ignore = (VAR_1 != 0);
    VAR_3->defined = VAR_0;
    VAR_3->written = VAR_0;
    VAR_3->user_types_registered = VAR_0;
    VAR_3->tfswrite = VAR_0;
    VAR_3->checked = VAR_0;
    VAR_3->is_alias = VAR_0;
    VAR_3->typelib_idx = -1;
    FUNC_1(&VAR_3->loc_info);
    return VAR_3;
}
