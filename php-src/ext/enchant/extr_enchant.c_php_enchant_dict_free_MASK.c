
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ptr; } ;
typedef TYPE_1__ zend_resource ;
struct TYPE_7__ {size_t id; scalar_t__ pdict; TYPE_3__* pbroker; } ;
typedef TYPE_2__ enchant_dict ;
struct TYPE_8__ {int rsrc; int ** dict; int pbroker; } ;
typedef TYPE_3__ enchant_broker ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(zend_resource *VAR_0)

{
 if (VAR_0->ptr) {
  enchant_dict *VAR_1 = (enchant_dict *)VAR_0->ptr;
  if (VAR_1) {
   enchant_broker *VAR_2 = VAR_1->pbroker;

   if (VAR_1->pdict && VAR_2) {
    FUNC_1(VAR_2->pbroker, VAR_1->pdict);
   }

   VAR_2->dict[VAR_1->id] = ((void*)0);
   FUNC_0(VAR_1);
   FUNC_2(VAR_2->rsrc);
  }
 }
}
