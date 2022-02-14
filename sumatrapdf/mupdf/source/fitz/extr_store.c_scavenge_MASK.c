
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* tail; } ;
typedef TYPE_2__ fz_store ;
struct TYPE_10__ {scalar_t__ size; TYPE_1__* val; struct TYPE_10__* prev; } ;
typedef TYPE_3__ fz_item ;
struct TYPE_11__ {TYPE_2__* store; } ;
typedef TYPE_4__ fz_context ;
struct TYPE_8__ {int refs; } ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, size_t VAR_1)
{
 fz_store *VAR_2 = VAR_0->store;
 size_t VAR_3 = 0;
 fz_item *VAR_4, *VAR_5;


 for (VAR_4 = VAR_2->tail; VAR_4; VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->prev;
  if (VAR_4->val->refs == 1)
  {

   VAR_3 += VAR_4->size;
   FUNC_0(VAR_0, VAR_4);

   if (VAR_3 >= VAR_1)
    break;



   VAR_5 = VAR_2->tail;
  }
 }

 return VAR_3 != 0;
}
