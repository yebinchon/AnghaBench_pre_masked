
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * errMsg; } ;
typedef TYPE_1__ PGresult ;


 int * FUNC_0 (TYPE_1__*,char const*) ;

void
FUNC_1(PGresult *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return;
 if (VAR_1 && *VAR_1)
  VAR_0->errMsg = FUNC_0(VAR_0, VAR_1);
 else
  VAR_0->errMsg = ((void*)0);
}
