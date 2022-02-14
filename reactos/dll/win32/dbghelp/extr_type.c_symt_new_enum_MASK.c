
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tag; } ;
struct symt_enum {int vchildren; struct symt* base_type; int * name; TYPE_1__ symt; } ;
struct symt {int dummy; } ;
struct module {int pool; } ;


 int VAR_0 ;
 struct symt_enum* FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,int,int) ;

struct symt_enum* FUNC_3(struct module* VAR_1, const char* VAR_2,
                                struct symt* VAR_3)
{
    struct symt_enum* VAR_4;

    if ((VAR_4 = FUNC_0(&VAR_1->pool, sizeof(*VAR_4))))
    {
        VAR_4->symt.tag = VAR_0;
        VAR_4->name = (VAR_2) ? FUNC_1(&VAR_1->pool, VAR_2) : ((void*)0);
        VAR_4->base_type = VAR_3;
        FUNC_2(&VAR_4->vchildren, sizeof(struct symt*), 8);
    }
    return VAR_4;
}
