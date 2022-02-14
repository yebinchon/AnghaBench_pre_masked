
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int frozen; } ;
struct TYPE_4__ {TYPE_3__* hashp; } ;
typedef TYPE_1__ HASH_SEQ_STATUS ;


 int FUNC_0 (TYPE_3__*) ;

void
FUNC_1(HASH_SEQ_STATUS *VAR_0)
{
 if (!VAR_0->hashp->frozen)
  FUNC_0(VAR_0->hashp);
}
