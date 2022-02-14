
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag; } ;
struct TYPE_4__ {int * name; } ;
struct symt_basic {int bt; unsigned int size; TYPE_1__ symt; TYPE_2__ hash_elt; } ;
struct module {int ht_types; int pool; } ;
typedef enum BasicType { ____Placeholder_BasicType } BasicType ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 struct symt_basic* FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (struct module*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct module*,int ,char const*) ;

struct symt_basic* FUNC_5(struct module* VAR_1, enum BasicType VAR_2,
                                  const char* VAR_3, unsigned VAR_4)
{
    struct symt_basic* VAR_5;

    if (VAR_3)
    {
        VAR_5 = (struct symt_basic*)FUNC_4(VAR_1, VAR_0,
                                                         VAR_3);
        if (VAR_5 && VAR_5->bt == VAR_2 && VAR_5->size == VAR_4)
            return VAR_5;
    }
    if ((VAR_5 = FUNC_1(&VAR_1->pool, sizeof(*VAR_5))))
    {
        VAR_5->symt.tag = VAR_0;
        if (VAR_3)
        {
            VAR_5->hash_elt.name = FUNC_2(&VAR_1->pool, VAR_3);
            FUNC_0(&VAR_1->ht_types, &VAR_5->hash_elt);
        } else VAR_5->hash_elt.name = ((void*)0);
        VAR_5->bt = VAR_2;
        VAR_5->size = VAR_4;
        FUNC_3(VAR_1, &VAR_5->symt);
    }
    return VAR_5;
}
