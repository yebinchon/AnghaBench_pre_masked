
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; scalar_t__ typtype; scalar_t__ domainData; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_9__ {int constraints; int dccRefCount; } ;
struct TYPE_8__ {scalar_t__ dcc; int constraints; int refctx; scalar_t__ need_exprstate; TYPE_1__* tcache; } ;
typedef TYPE_2__ DomainConstraintRef ;
typedef TYPE_3__ DomainConstraintCache ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(DomainConstraintRef *VAR_3)
{
 TypeCacheEntry *VAR_4 = VAR_3->tcache;


 if ((VAR_4->flags & VAR_1) == 0 &&
  VAR_4->typtype == VAR_2)
  FUNC_1(VAR_4);


 if (VAR_3->dcc != VAR_4->domainData)
 {

  DomainConstraintCache *VAR_5 = VAR_3->dcc;

  if (VAR_5)
  {
   VAR_3->constraints = VAR_0;
   VAR_3->dcc = ((void*)0);
   FUNC_0(VAR_5);
  }
  VAR_5 = VAR_4->domainData;
  if (VAR_5)
  {
   VAR_3->dcc = VAR_5;
   VAR_5->dccRefCount++;
   if (VAR_3->need_exprstate)
    VAR_3->constraints = FUNC_2(VAR_5->constraints,
                 VAR_3->refctx);
   else
    VAR_3->constraints = VAR_5->constraints;
  }
 }
}
