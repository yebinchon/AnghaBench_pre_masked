
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int hash; } ;
typedef TYPE_2__ dshash_table_item ;
struct TYPE_11__ {int find_locked; int find_exclusively_locked; TYPE_1__* control; } ;
typedef TYPE_3__ dshash_table ;
struct TYPE_9__ {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,size_t) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;

void
FUNC_7(dshash_table *VAR_2, void *VAR_3)
{
 dshash_table_item *VAR_4 = FUNC_1(VAR_3);
 size_t VAR_5 = FUNC_4(VAR_4->hash);

 FUNC_0(VAR_2->control->magic == VAR_0);
 FUNC_0(VAR_2->find_locked);
 FUNC_0(VAR_2->find_exclusively_locked);
 FUNC_0(FUNC_2(FUNC_5(VAR_2, VAR_5),
        VAR_1));

 FUNC_6(VAR_2, VAR_4);
 VAR_2->find_locked = 0;
 VAR_2->find_exclusively_locked = 0;
 FUNC_3(FUNC_5(VAR_2, VAR_5));
}
