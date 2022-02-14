
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (char const*) ;
 int FUNC_1 (TYPE_1__*) ;

PGconn *
FUNC_2(const char *VAR_1)
{
 PGconn *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 && VAR_2->status != VAR_0)
  (void) FUNC_1(VAR_2);

 return VAR_2;
}
