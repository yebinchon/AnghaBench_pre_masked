
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {void* arg; int func; } ;
struct TYPE_8__ {TYPE_1__* domainData; } ;
struct TYPE_7__ {int need_exprstate; int constraints; TYPE_1__* dcc; int refctx; TYPE_3__* tcache; TYPE_4__ callback; } ;
struct TYPE_6__ {int constraints; int dccRefCount; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef TYPE_2__ DomainConstraintRef ;


 int FUNC_0 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(Oid VAR_3, DomainConstraintRef *VAR_4,
      MemoryContext VAR_5, bool VAR_6)
{

 VAR_4->tcache = FUNC_1(VAR_3, VAR_1);
 VAR_4->need_exprstate = VAR_6;

 VAR_4->refctx = VAR_5;
 VAR_4->dcc = ((void*)0);
 VAR_4->callback.func = VAR_2;
 VAR_4->callback.arg = (void *) VAR_4;
 FUNC_0(VAR_5, &VAR_4->callback);

 if (VAR_4->tcache->domainData)
 {
  VAR_4->dcc = VAR_4->tcache->domainData;
  VAR_4->dcc->dccRefCount++;
  if (VAR_4->need_exprstate)
   VAR_4->constraints = FUNC_2(VAR_4->dcc->constraints,
                VAR_4->refctx);
  else
   VAR_4->constraints = VAR_4->dcc->constraints;
 }
 else
  VAR_4->constraints = VAR_0;
}
