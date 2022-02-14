
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ instrument; } ;
struct TYPE_9__ {TYPE_2__* hashtable; TYPE_1__ ps; int * parallel_state; } ;
struct TYPE_8__ {int partialTuples; } ;
typedef int Node ;
typedef TYPE_3__ HashState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

Node *
FUNC_4(HashState *VAR_0)
{

 if (VAR_0->ps.instrument)
  FUNC_0(VAR_0->ps.instrument);

 if (VAR_0->parallel_state != ((void*)0))
  FUNC_2(VAR_0);
 else
  FUNC_3(VAR_0);


 if (VAR_0->ps.instrument)
  FUNC_1(VAR_0->ps.instrument, VAR_0->hashtable->partialTuples);
 return ((void*)0);
}
