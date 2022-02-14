
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* cmdStatus; } ;
typedef TYPE_1__ PGresult ;



char *
FUNC_0(PGresult *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);
 return VAR_0->cmdStatus;
}
