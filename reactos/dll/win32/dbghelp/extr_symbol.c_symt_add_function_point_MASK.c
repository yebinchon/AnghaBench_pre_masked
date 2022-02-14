
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symt {int tag; } ;
struct TYPE_2__ {int * name; } ;
struct location {int dummy; } ;
struct symt_hierarchy_point {struct symt symt; TYPE_1__ hash_elt; struct location loc; int * parent; } ;
struct symt_function {int vchildren; int symt; } ;
struct module {int pool; } ;
typedef enum SymTagEnum { ____Placeholder_SymTagEnum } SymTagEnum ;


 struct symt_hierarchy_point* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char const*) ;
 struct symt** FUNC_2 (int *,int *) ;

struct symt_hierarchy_point* FUNC_3(struct module* VAR_0,
                                                     struct symt_function* VAR_1,
                                                     enum SymTagEnum VAR_2,
                                                     const struct location* VAR_3,
                                                     const char* VAR_4)
{
    struct symt_hierarchy_point*VAR_5;
    struct symt** VAR_6;

    if ((VAR_5 = FUNC_0(&VAR_0->pool, sizeof(*VAR_5))))
    {
        VAR_5->symt.tag = VAR_2;
        VAR_5->parent = &VAR_1->symt;
        VAR_5->loc = *VAR_3;
        VAR_5->hash_elt.name = VAR_4 ? FUNC_1(&VAR_0->pool, VAR_4) : ((void*)0);
        VAR_6 = FUNC_2(&VAR_1->vchildren, &VAR_0->pool);
        *VAR_6 = &VAR_5->symt;
    }
    return VAR_5;
}
