
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ch_ntup; } ;
struct TYPE_9__ {scalar_t__ refcount; int dead; int keys; scalar_t__ negative; int cache_elem; scalar_t__ c_list; TYPE_1__* my_cache; } ;
struct TYPE_8__ {int cc_ntup; int cc_keyno; int cc_nkeys; int cc_tupdesc; } ;
typedef TYPE_1__ CatCache ;
typedef TYPE_2__ CatCTup ;


 int FUNC_0 (int) ;
 TYPE_7__* VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(CatCache *VAR_1, CatCTup *VAR_2)
{
 FUNC_0(VAR_2->refcount == 0);
 FUNC_0(VAR_2->my_cache == VAR_1);

 if (VAR_2->c_list)
 {





  VAR_2->dead = 1;
  FUNC_2(VAR_1, VAR_2->c_list);
  return;
 }


 FUNC_3(&VAR_2->cache_elem);





 if (VAR_2->negative)
  FUNC_1(VAR_1->cc_tupdesc, VAR_1->cc_nkeys,
       VAR_1->cc_keyno, VAR_2->keys);

 FUNC_4(VAR_2);

 --VAR_1->cc_ntup;
 --VAR_0->ch_ntup;
}
