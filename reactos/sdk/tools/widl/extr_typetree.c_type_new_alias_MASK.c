
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loc_info; int details; int is_alias; struct TYPE_6__* orig; int * attrs; int name; } ;
typedef TYPE_1__ type_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*) ;

type_t *FUNC_3(type_t *VAR_1, const char *VAR_2)
{
    type_t *VAR_3 = FUNC_0(VAR_1, 0);

    VAR_3->name = FUNC_2(VAR_2);
    VAR_3->attrs = ((void*)0);
    VAR_3->orig = VAR_1;
    VAR_3->is_alias = VAR_0;

    VAR_3->details = VAR_1->details;
    FUNC_1(&VAR_3->loc_info);

    return VAR_3;
}
