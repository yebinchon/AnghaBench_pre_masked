
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_entry {int dummy; } ;
struct idmap_lookup {int compare; int value; } ;
struct idmap_cache {int lock; TYPE_1__* ops; int head; } ;
struct TYPE_2__ {int (* entry_copy ) (struct list_entry*,struct list_entry*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct list_entry* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct list_entry*,struct list_entry*) ;

__attribute__((used)) static int FUNC_4(
    struct idmap_cache *VAR_2,
    const struct idmap_lookup *VAR_3,
    struct list_entry *VAR_4)
{
    struct list_entry *VAR_5;
    int VAR_6 = VAR_0;

    FUNC_0(&VAR_2->lock);

    VAR_5 = FUNC_2(&VAR_2->head, VAR_3->value, VAR_3->compare);
    if (VAR_5) {

        VAR_2->ops->entry_copy(VAR_4, VAR_5);
        VAR_6 = VAR_1;
    }

    FUNC_1(&VAR_2->lock);
    return VAR_6;
}
