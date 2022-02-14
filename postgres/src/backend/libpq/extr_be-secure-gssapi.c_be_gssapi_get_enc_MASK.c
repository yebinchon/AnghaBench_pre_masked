
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* gss; } ;
struct TYPE_4__ {int enc; } ;
typedef TYPE_2__ Port ;



bool
FUNC_0(Port *VAR_0)
{
 if (!VAR_0 || !VAR_0->gss)
  return 0;

 return VAR_0->gss->enc;
}
