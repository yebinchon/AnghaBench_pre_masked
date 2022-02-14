
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tag; } ;
struct symt_pointer {unsigned long size; TYPE_1__ symt; struct symt* pointsto; } ;
struct symt {int dummy; } ;
struct module {int pool; } ;


 int VAR_0 ;
 struct symt_pointer* FUNC_0 (int *,int) ;
 int FUNC_1 (struct module*,TYPE_1__*) ;

struct symt_pointer* FUNC_2(struct module* VAR_1, struct symt* VAR_2, unsigned long VAR_3)
{
    struct symt_pointer* VAR_4;

    if ((VAR_4 = FUNC_0(&VAR_1->pool, sizeof(*VAR_4))))
    {
        VAR_4->symt.tag = VAR_0;
        VAR_4->pointsto = VAR_2;
        VAR_4->size = VAR_3;
        FUNC_1(VAR_1, &VAR_4->symt);
    }
    return VAR_4;
}
