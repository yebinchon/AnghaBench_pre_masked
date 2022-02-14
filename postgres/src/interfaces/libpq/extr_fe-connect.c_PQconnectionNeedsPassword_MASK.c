
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ password_needed; } ;
typedef TYPE_1__ PGconn ;


 char* FUNC_0 (TYPE_1__ const*) ;

int
FUNC_1(const PGconn *VAR_0)
{
 char *VAR_1;

 if (!VAR_0)
  return 0;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_0->password_needed &&
  (VAR_1 == ((void*)0) || VAR_1[0] == '\0'))
  return 1;
 else
  return 0;
}
