
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct idmap_lookup {int compare; int value; } ;
struct idmap_cache {int lock; int head; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* entry_copy ) (struct list_entry*,struct list_entry const*) ;struct list_entry* (* entry_alloc ) () ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_entry*) ;
 struct list_entry* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct list_entry*,struct list_entry const*) ;
 struct list_entry* FUNC_6 () ;
 int FUNC_7 (struct list_entry*,struct list_entry const*) ;

__attribute__((used)) static int FUNC_8(
    struct idmap_cache *VAR_1,
    const struct idmap_lookup *VAR_2,
    const struct list_entry *VAR_3)
{
    struct list_entry *VAR_4;
    int VAR_5 = VAR_0;

    FUNC_0(&VAR_1->lock);


    VAR_4 = FUNC_4(&VAR_1->head, VAR_2->value, VAR_2->compare);
    if (VAR_4) {

        VAR_1->ops->entry_copy(VAR_4, VAR_3);
        goto out;
    }


    VAR_4 = VAR_1->ops->entry_alloc();
    if (VAR_4 == ((void*)0)) {
        VAR_5 = FUNC_1();
        goto out;
    }
    VAR_1->ops->entry_copy(VAR_4, VAR_3);
    FUNC_3(&VAR_1->head, VAR_4);
out:
    FUNC_2(&VAR_1->lock);
    return VAR_5;
}
