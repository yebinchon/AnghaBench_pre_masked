
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* gss; } ;
struct TYPE_4__ {char const* princ; int auth; } ;
typedef TYPE_2__ Port ;



const char *
FUNC_0(Port *VAR_0)
{
 if (!VAR_0 || !VAR_0->gss->auth)
  return ((void*)0);

 return VAR_0->gss->princ;
}
