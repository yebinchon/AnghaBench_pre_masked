
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * curEntry; scalar_t__ curBucket; TYPE_1__* hashp; } ;
struct TYPE_6__ {int frozen; } ;
typedef TYPE_1__ HTAB ;
typedef TYPE_2__ HASH_SEQ_STATUS ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(HASH_SEQ_STATUS *VAR_0, HTAB *VAR_1)
{
 VAR_0->hashp = VAR_1;
 VAR_0->curBucket = 0;
 VAR_0->curEntry = ((void*)0);
 if (!VAR_1->frozen)
  FUNC_0(VAR_1);
}
