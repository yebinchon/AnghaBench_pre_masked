
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ssl; } ;
typedef TYPE_1__ PGconn ;


 scalar_t__ FUNC_0 (char const*,char*) ;

void *
FUNC_1(PGconn *VAR_0, const char *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 if (FUNC_0(VAR_1, "OpenSSL") == 0)
  return VAR_0->ssl;
 return ((void*)0);
}
