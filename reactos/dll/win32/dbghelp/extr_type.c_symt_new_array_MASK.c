
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tag; } ;
struct symt_array {int start; int end; TYPE_1__ symt; struct symt* index_type; struct symt* base_type; } ;
struct symt {int dummy; } ;
struct module {int pool; } ;


 int VAR_0 ;
 struct symt_array* FUNC_0 (int *,int) ;
 int FUNC_1 (struct module*,TYPE_1__*) ;

struct symt_array* FUNC_2(struct module* VAR_1, int VAR_2, int VAR_3,
                                  struct symt* VAR_4, struct symt* VAR_5)
{
    struct symt_array* VAR_6;

    if ((VAR_6 = FUNC_0(&VAR_1->pool, sizeof(*VAR_6))))
    {
        VAR_6->symt.tag = VAR_0;
        VAR_6->start = VAR_2;
        VAR_6->end = VAR_3;
        VAR_6->base_type = VAR_4;
        VAR_6->index_type = VAR_5;
        FUNC_1(VAR_1, &VAR_6->symt);
    }
    return VAR_6;
}
