
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; } ;
struct TYPE_4__ {int name; } ;
struct symt_typedef {TYPE_1__ symt; TYPE_2__ hash_elt; struct symt* type; } ;
struct symt {int dummy; } ;
struct module {int ht_types; int pool; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 struct symt_typedef* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (struct module*,TYPE_1__*) ;

struct symt_typedef* FUNC_4(struct module* VAR_1, struct symt* VAR_2,
                                      const char* VAR_3)
{
    struct symt_typedef* VAR_4;

    if ((VAR_4 = FUNC_1(&VAR_1->pool, sizeof(*VAR_4))))
    {
        VAR_4->symt.tag = VAR_0;
        VAR_4->type = VAR_2;
        VAR_4->hash_elt.name = FUNC_2(&VAR_1->pool, VAR_3);
        FUNC_0(&VAR_1->ht_types, &VAR_4->hash_elt);
        FUNC_3(VAR_1, &VAR_4->symt);
    }
    return VAR_4;
}
