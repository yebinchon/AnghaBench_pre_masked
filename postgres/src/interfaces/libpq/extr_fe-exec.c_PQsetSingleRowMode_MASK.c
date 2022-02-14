
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asyncStatus; scalar_t__ queryclass; int singleRowMode; scalar_t__ result; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_0(PGconn *VAR_3)
{




 if (!VAR_3)
  return 0;
 if (VAR_3->asyncStatus != VAR_0)
  return 0;
 if (VAR_3->queryclass != VAR_2 &&
  VAR_3->queryclass != VAR_1)
  return 0;
 if (VAR_3->result)
  return 0;


 VAR_3->singleRowMode = 1;
 return 1;
}
