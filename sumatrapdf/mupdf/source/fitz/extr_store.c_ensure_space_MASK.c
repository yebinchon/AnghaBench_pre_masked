
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
struct TYPE_22__ {int hash; TYPE_4__* head; TYPE_4__* tail; int size; } ;
typedef TYPE_3__ fz_store ;
struct TYPE_23__ {int key; TYPE_1__* type; TYPE_8__* val; struct TYPE_23__* next; scalar_t__ size; struct TYPE_23__* prev; } ;
typedef TYPE_4__ fz_item ;
struct TYPE_24__ {TYPE_3__* store; } ;
typedef TYPE_5__ fz_context ;
struct TYPE_25__ {int refs; int (* drop ) (TYPE_5__*,TYPE_8__*) ;} ;
struct TYPE_20__ {int (* drop_key ) (TYPE_5__*,int ) ;scalar_t__ (* make_hash_key ) (TYPE_5__*,TYPE_2__*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*,int ,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_5__*,int ) ;

__attribute__((used)) static size_t
FUNC_9(fz_context *VAR_1, size_t VAR_2)
{
 fz_item *VAR_3, *VAR_4;
 size_t VAR_5;
 fz_store *VAR_6 = VAR_1->store;
 fz_item *VAR_7 = ((void*)0);

 FUNC_1(VAR_1, VAR_0);



 VAR_5 = 0;
 for (VAR_3 = VAR_6->tail; VAR_3; VAR_3 = VAR_3->prev)
 {
  if (VAR_3->val->refs == 1)
  {
   VAR_5 += VAR_3->size;
   if (VAR_5 >= VAR_2)
    break;
  }
 }


 if (VAR_3 == ((void*)0))
 {
  return 0;
 }


 VAR_5 = 0;
 for (VAR_3 = VAR_6->tail; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->prev;
  if (VAR_3->val->refs != 1)
   continue;

  VAR_6->size -= VAR_3->size;


  if (VAR_3->next)
   VAR_3->next->prev = VAR_3->prev;
  else
   VAR_6->tail = VAR_3->prev;
  if (VAR_3->prev)
   VAR_3->prev->next = VAR_3->next;
  else
   VAR_6->head = VAR_3->next;


  if (VAR_3->type->make_hash_key)
  {
   fz_store_hash VAR_8 = { ((void*)0) };
   VAR_8.drop = VAR_3->val->drop;
   if (VAR_3->type->make_hash_key(VAR_1, &VAR_8, VAR_3->key))
    FUNC_3(VAR_1, VAR_6->hash, &VAR_8);
  }


  VAR_3->next = VAR_7;
  VAR_7 = VAR_3;

  VAR_5 += VAR_3->size;
  if (VAR_5 >= VAR_2)
   break;
 }





 while (VAR_7)
 {
  fz_item *VAR_9 = VAR_7;
  int VAR_10;

  VAR_7 = VAR_7->next;


  if (VAR_9->val->refs > 0)
   (void)FUNC_0(VAR_9->val);
  VAR_10 = (VAR_9->val->refs > 0 && --VAR_9->val->refs == 0);

  FUNC_5(VAR_1, VAR_0);
  if (VAR_10)
   VAR_9->val->drop(VAR_1, VAR_9->val);


  VAR_9->type->drop_key(VAR_1, VAR_9->key);
  FUNC_2(VAR_1, VAR_9);
  FUNC_4(VAR_1, VAR_0);
 }

 return VAR_5;
}
