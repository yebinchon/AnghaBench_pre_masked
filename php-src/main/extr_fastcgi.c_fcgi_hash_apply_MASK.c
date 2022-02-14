
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* list_next; int val_len; int * val; int var_len; int var; } ;
typedef TYPE_1__ fcgi_hash_bucket ;
struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ fcgi_hash ;
typedef int (* fcgi_apply_func ) (int ,int ,int *,int ,void*) ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(fcgi_hash *VAR_0, fcgi_apply_func VAR_1, void *VAR_2)
{
 fcgi_hash_bucket *VAR_3 = VAR_0->list;

 while (VAR_3) {
  if (FUNC_0(VAR_3->val != ((void*)0))) {
   VAR_1(VAR_3->var, VAR_3->var_len, VAR_3->val, VAR_3->val_len, VAR_2);
  }
  VAR_3 = VAR_3->list_next;
 }
}
