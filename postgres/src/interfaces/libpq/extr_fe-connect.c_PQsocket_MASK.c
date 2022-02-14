
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sock; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;

int
FUNC_0(const PGconn *VAR_1)
{
 if (!VAR_1)
  return -1;
 return (VAR_1->sock != VAR_0) ? VAR_1->sock : -1;
}
