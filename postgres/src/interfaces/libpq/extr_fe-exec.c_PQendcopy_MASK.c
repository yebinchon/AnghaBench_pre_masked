
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pversion; } ;
typedef TYPE_1__ PGconn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int
FUNC_3(PGconn *VAR_0)
{
 if (!VAR_0)
  return 0;

 if (FUNC_0(VAR_0->pversion) >= 3)
  return FUNC_2(VAR_0);
 else
  return FUNC_1(VAR_0);
}
