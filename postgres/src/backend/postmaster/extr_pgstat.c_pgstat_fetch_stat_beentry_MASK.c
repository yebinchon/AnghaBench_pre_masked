
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int backendStatus; } ;
typedef int PgBackendStatus ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

PgBackendStatus *
FUNC_1(int VAR_2)
{
 FUNC_0();

 if (VAR_2 < 1 || VAR_2 > VAR_1)
  return ((void*)0);

 return &VAR_0[VAR_2 - 1].backendStatus;
}
