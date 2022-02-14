
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int (* drop ) (TYPE_5__*,TYPE_8__*) ;int * member_0; } ;
typedef TYPE_2__ fz_store_hash ;
struct TYPE_22__ {int hash; TYPE_4__* head; TYPE_4__* tail; int size; scalar_t__ needs_reaping; } ;
typedef TYPE_3__ fz_store ;
struct TYPE_23__ {int key; TYPE_1__* type; TYPE_8__* val; struct TYPE_23__* prev; struct TYPE_23__* next; scalar_t__ size; } ;
typedef TYPE_4__ fz_item ;
struct TYPE_24__ {TYPE_3__* store; } ;
typedef TYPE_5__ fz_context ;
struct TYPE_25__ {scalar_t__ refs; int (* drop ) (TYPE_5__*,TYPE_8__*) ;} ;
struct TYPE_20__ {scalar_t__ (* needs_reap ) (TYPE_5__*,int ) ;int (* drop_key ) (TYPE_5__*,int ) ;scalar_t__ (* make_hash_key ) (TYPE_5__*,TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;

__attribute__((used)) static void
FUNC_9(fz_context *VAR_1)
{
 fz_store *VAR_2 = VAR_1->store;
 fz_item *VAR_3, *VAR_4, *VAR_5;

 if (VAR_2 == ((void*)0))
 {
  FUNC_4(VAR_1, VAR_0);
  return;
 }

 FUNC_1(VAR_1, VAR_0);

 VAR_1->store->needs_reaping = 0;


 VAR_5 = ((void*)0);
 for (VAR_3 = VAR_2->tail; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->prev;

  if (VAR_3->type->needs_reap == ((void*)0) || VAR_3->type->needs_reap(VAR_1, VAR_3->key) == 0)
   continue;


  VAR_2->size -= VAR_3->size;


  if (VAR_3->next)
   VAR_3->next->prev = VAR_3->prev;
  else
   VAR_2->tail = VAR_3->prev;
  if (VAR_3->prev)
   VAR_3->prev->next = VAR_3->next;
  else
   VAR_2->head = VAR_3->next;


  if (VAR_3->type->make_hash_key)
  {
   fz_store_hash VAR_6 = { ((void*)0) };
   VAR_6.drop = VAR_3->val->drop;
   if (VAR_3->type->make_hash_key(VAR_1, &VAR_6, VAR_3->key))
    FUNC_3(VAR_1, VAR_2->hash, &VAR_6);
  }


  if (VAR_3->val->refs > 0)
   (void)FUNC_0(VAR_3->val);
  VAR_3->prev = (VAR_3->val->refs > 0 && --VAR_3->val->refs == 0) ? VAR_3 : ((void*)0);


  VAR_3->next = VAR_5;
  VAR_5 = VAR_3;
 }
 FUNC_4(VAR_1, VAR_0);


 for (VAR_3 = VAR_5; VAR_3 != ((void*)0); VAR_3 = VAR_5)
 {
  VAR_5 = VAR_3->next;


  if (VAR_3->prev)
   VAR_3->val->drop(VAR_1, VAR_3->val);


  VAR_3->type->drop_key(VAR_1, VAR_3->key);
  FUNC_2(VAR_1, VAR_3);
 }
}
