
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ssl_in_use; } ;
typedef TYPE_1__ PGconn ;



int
FUNC_0(PGconn *VAR_0)
{
 if (!VAR_0)
  return 0;
 return VAR_0->ssl_in_use;
}
