
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* store; } ;
typedef TYPE_1__ fz_context ;
struct TYPE_10__ {int hash; int refs; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_3__*) ;

void
FUNC_4(fz_context *VAR_0)
{
 if (!VAR_0)
  return;
 if (FUNC_1(VAR_0, VAR_0->store, &VAR_0->store->refs))
 {
  FUNC_2(VAR_0);
  FUNC_0(VAR_0, VAR_0->store->hash);
  FUNC_3(VAR_0, VAR_0->store);
  VAR_0->store = ((void*)0);
 }
}
