
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int hash; TYPE_3__* head; } ;
typedef TYPE_2__ fz_store ;
struct TYPE_15__ {TYPE_10__* val; scalar_t__ size; int key; TYPE_1__* type; struct TYPE_15__* next; } ;
typedef TYPE_3__ fz_item ;
struct TYPE_16__ {TYPE_2__* store; } ;
typedef TYPE_4__ fz_context ;
struct TYPE_13__ {int (* format_key ) (TYPE_4__*,char*,int,int ) ;} ;
struct TYPE_12__ {int refs; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_10__*) ;
 int FUNC_1 (TYPE_10__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int ,int *,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (TYPE_4__*,char*,int,int ) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_2)
{
 fz_item *VAR_3, *VAR_4;
 char VAR_5[256];
 fz_store *VAR_6 = VAR_2->store;

 FUNC_5("-- resource store contents --\n");

 for (VAR_3 = VAR_6->head; VAR_3; VAR_3 = VAR_4)
 {
  VAR_4 = VAR_3->next;
  if (VAR_4)
  {
   (void)FUNC_1(VAR_4->val);
   VAR_4->val->refs++;
  }
  FUNC_4(VAR_2, VAR_0);
  VAR_3->type->format_key(VAR_2, VAR_5, sizeof VAR_5, VAR_3->key);
  FUNC_3(VAR_2, VAR_0);
  FUNC_5("store[*][refs=%d][size=%d] key=%s val=%p\n",
    VAR_3->val->refs, (int)VAR_3->size, VAR_5, (void *)VAR_3->val);
  if (VAR_4)
  {
   (void)FUNC_0(VAR_4->val);
   VAR_4->val->refs--;
  }
 }

 FUNC_5("-- resource store hash contents --\n");
 FUNC_2(VAR_2, VAR_6->hash, ((void*)0), VAR_1);
 FUNC_5("-- end --\n");
}
