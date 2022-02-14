
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ refcount; int n_members; int keys; int nkeys; int cache_elem; TYPE_2__** members; TYPE_1__* my_cache; } ;
struct TYPE_10__ {scalar_t__ refcount; scalar_t__ dead; TYPE_3__* c_list; } ;
struct TYPE_9__ {int cc_keyno; int cc_tupdesc; } ;
typedef TYPE_1__ CatCache ;
typedef TYPE_2__ CatCTup ;
typedef TYPE_3__ CatCList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(CatCache *VAR_0, CatCList *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->refcount == 0);
 FUNC_0(VAR_1->my_cache == VAR_0);


 for (VAR_2 = VAR_1->n_members; --VAR_2 >= 0;)
 {
  CatCTup *VAR_3 = VAR_1->members[VAR_2];

  FUNC_0(VAR_3->c_list == VAR_1);
  VAR_3->c_list = ((void*)0);

  if (

   VAR_3->dead &&

   VAR_3->refcount == 0)
   FUNC_2(VAR_0, VAR_3);
 }


 FUNC_3(&VAR_1->cache_elem);


 FUNC_1(VAR_0->cc_tupdesc, VAR_1->nkeys,
      VAR_0->cc_keyno, VAR_1->keys);

 FUNC_4(VAR_1);
}
