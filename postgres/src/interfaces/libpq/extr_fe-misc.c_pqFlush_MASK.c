
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ outCount; scalar_t__ Pfdebug; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

int
FUNC_2(PGconn *VAR_0)
{
 if (VAR_0->Pfdebug)
  FUNC_0(VAR_0->Pfdebug);

 if (VAR_0->outCount > 0)
  return FUNC_1(VAR_0, VAR_0->outCount);

 return 0;
}
