
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; int pversion; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(const PGconn *VAR_1)
{
 if (!VAR_1)
  return 0;
 if (VAR_1->status == VAR_0)
  return 0;
 return FUNC_0(VAR_1->pversion);
}
