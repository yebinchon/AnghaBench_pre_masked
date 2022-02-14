
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfa {scalar_t__* bos; scalar_t__* eos; TYPE_1__* parent; int cm; } ;
struct TYPE_2__ {scalar_t__* bos; scalar_t__* eos; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nfa *VAR_1)
{

 if (VAR_1->parent == ((void*)0))
 {
  VAR_1->bos[0] = FUNC_1(VAR_1->cm);
  VAR_1->bos[1] = FUNC_1(VAR_1->cm);
  VAR_1->eos[0] = FUNC_1(VAR_1->cm);
  VAR_1->eos[1] = FUNC_1(VAR_1->cm);
 }
 else
 {
  FUNC_0(VAR_1->parent->bos[0] != VAR_0);
  VAR_1->bos[0] = VAR_1->parent->bos[0];
  FUNC_0(VAR_1->parent->bos[1] != VAR_0);
  VAR_1->bos[1] = VAR_1->parent->bos[1];
  FUNC_0(VAR_1->parent->eos[0] != VAR_0);
  VAR_1->eos[0] = VAR_1->parent->eos[0];
  FUNC_0(VAR_1->parent->eos[1] != VAR_0);
  VAR_1->eos[1] = VAR_1->parent->eos[1];
 }
}
