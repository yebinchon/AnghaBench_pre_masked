
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ obs_key_t ;
struct TYPE_5__ {TYPE_1__* platform_context; } ;
struct TYPE_6__ {TYPE_2__ hotkeys; } ;
struct TYPE_4__ {scalar_t__* base_keysyms; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

int FUNC_0(obs_key_t VAR_3)
{
 if (VAR_3 == VAR_0)
  return VAR_1;

 return (int)VAR_2->hotkeys.platform_context->base_keysyms[(int)VAR_3];
}
