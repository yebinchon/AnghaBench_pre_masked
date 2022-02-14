
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; } ;
struct symtab_elt {TYPE_2__* symp; TYPE_1__ ht_elt; int compiland; } ;
struct module {scalar_t__ reloc_delta; } ;
struct hash_table_iter {int dummy; } ;
struct hash_table {int dummy; } ;
struct TYPE_4__ {int st_size; scalar_t__ st_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hash_table const*,struct hash_table_iter*,int *) ;
 struct symtab_elt* FUNC_1 (struct hash_table_iter*) ;
 int FUNC_2 (struct module*,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct module* VAR_3, const struct hash_table* VAR_4)
{
    struct hash_table_iter VAR_5;
    struct symtab_elt* VAR_6;

    if (VAR_2 & VAR_0) return VAR_1;



    FUNC_0(VAR_4, &VAR_5, ((void*)0));
    while ((VAR_6 = FUNC_1(&VAR_5)))
    {
        FUNC_2(VAR_3, VAR_6->compiland, VAR_6->ht_elt.name,
                        VAR_3->reloc_delta + VAR_6->symp->st_value,
                        VAR_6->symp->st_size);
    }
    return VAR_1;
}
