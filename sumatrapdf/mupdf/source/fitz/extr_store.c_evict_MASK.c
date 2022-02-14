
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_26__ {int (* drop ) (TYPE_7__*,TYPE_10__*) ;int * member_0; } ;
typedef TYPE_4__ fz_store_hash ;
struct TYPE_27__ {int hash; TYPE_2__* head; TYPE_1__* tail; int size; } ;
typedef TYPE_5__ fz_store ;
struct TYPE_28__ {int key; TYPE_3__* type; TYPE_10__* val; TYPE_2__* next; TYPE_1__* prev; scalar_t__ size; } ;
typedef TYPE_6__ fz_item ;
struct TYPE_29__ {TYPE_5__* store; } ;
typedef TYPE_7__ fz_context ;
struct TYPE_25__ {int (* drop_key ) (TYPE_7__*,int ) ;scalar_t__ (* make_hash_key ) (TYPE_7__*,TYPE_4__*,int ) ;} ;
struct TYPE_24__ {TYPE_1__* prev; } ;
struct TYPE_23__ {TYPE_2__* next; } ;
struct TYPE_22__ {scalar_t__ refs; int (* drop ) (TYPE_7__*,TYPE_10__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_2 (TYPE_7__*,int ,TYPE_4__*) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_7__*,TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_7__*,TYPE_10__*) ;
 int FUNC_7 (TYPE_7__*,int ) ;

__attribute__((used)) static void
FUNC_8(fz_context *VAR_1, fz_item *VAR_2)
{
 fz_store *VAR_3 = VAR_1->store;
 int VAR_4;

 VAR_3->size -= VAR_2->size;

 if (VAR_2->next)
  VAR_2->next->prev = VAR_2->prev;
 else
  VAR_3->tail = VAR_2->prev;
 if (VAR_2->prev)
  VAR_2->prev->next = VAR_2->next;
 else
  VAR_3->head = VAR_2->next;


 if (VAR_2->val->refs > 0)
  (void)FUNC_0(VAR_2->val);
 VAR_4 = (VAR_2->val->refs > 0 && --VAR_2->val->refs == 0);


 if (VAR_2->type->make_hash_key)
 {
  fz_store_hash VAR_5 = { ((void*)0) };
  VAR_5.drop = VAR_2->val->drop;
  if (VAR_2->type->make_hash_key(VAR_1, &VAR_5, VAR_2->key))
   FUNC_2(VAR_1, VAR_3->hash, &VAR_5);
 }
 FUNC_4(VAR_1, VAR_0);
 if (VAR_4)
  VAR_2->val->drop(VAR_1, VAR_2->val);


 VAR_2->type->drop_key(VAR_1, VAR_2->key);
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_0);
}
