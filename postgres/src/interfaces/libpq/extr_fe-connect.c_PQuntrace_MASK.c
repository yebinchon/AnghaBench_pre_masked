
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int *) ;

void
FUNC_1(PGconn *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_0->Pfdebug)
 {
  FUNC_0(VAR_0->Pfdebug);
  VAR_0->Pfdebug = ((void*)0);
 }
}
