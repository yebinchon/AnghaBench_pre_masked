
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* gctx; } ;
typedef TYPE_1__ PGconn ;



void *
FUNC_0(PGconn *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return VAR_0->gctx;
}
