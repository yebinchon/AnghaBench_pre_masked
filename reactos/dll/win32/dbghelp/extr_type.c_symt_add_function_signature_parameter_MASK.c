
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tag; } ;
struct symt_function_signature {int vchildren; TYPE_1__ symt; } ;
struct symt {int tag; } ;
struct symt_function_arg_type {struct symt symt; TYPE_1__* container; struct symt* arg_type; } ;
struct module {int pool; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct symt_function_arg_type* FUNC_1 (int *,int) ;
 struct symt** FUNC_2 (int *,int *) ;

BOOL FUNC_3(struct module* VAR_4,
                                           struct symt_function_signature* VAR_5,
                                           struct symt* VAR_6)
{
    struct symt** VAR_7;
    struct symt_function_arg_type* VAR_8;

    FUNC_0(VAR_5->symt.tag == VAR_2);
    VAR_8 = FUNC_1(&VAR_4->pool, sizeof(*VAR_8));
    if (!VAR_8) return VAR_0;
    VAR_8->symt.tag = VAR_1;
    VAR_8->arg_type = VAR_6;
    VAR_8->container = &VAR_5->symt;
    VAR_7 = FUNC_2(&VAR_5->vchildren, &VAR_4->pool);
    if (!VAR_7) return VAR_0;
    *VAR_7 = &VAR_8->symt;

    return VAR_3;
}
