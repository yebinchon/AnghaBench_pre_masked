
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ password_needed; } ;
typedef TYPE_1__ PGconn ;



int
FUNC_0(const PGconn *VAR_0)
{
 if (!VAR_0)
  return 0;
 if (VAR_0->password_needed)
  return 1;
 else
  return 0;
}
