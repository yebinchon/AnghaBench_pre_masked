
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; int nonblocking; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

int
FUNC_1(PGconn *VAR_1, int VAR_2)
{
 bool VAR_3;

 if (!VAR_1 || VAR_1->status == VAR_0)
  return -1;

 VAR_3 = (VAR_2 ? 1 : 0);


 if (VAR_3 == VAR_1->nonblocking)
  return 0;
 if (FUNC_0(VAR_1))
  return -1;

 VAR_1->nonblocking = VAR_3;

 return 0;
}
