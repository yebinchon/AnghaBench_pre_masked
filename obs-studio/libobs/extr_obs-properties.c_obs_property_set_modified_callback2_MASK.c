
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* priv; int modified2; } ;
typedef TYPE_1__ obs_property_t ;
typedef int obs_property_modified2_t ;



void FUNC_0(obs_property_t *VAR_0,
      obs_property_modified2_t VAR_1,
      void *VAR_2)
{
 if (VAR_0) {
  VAR_0->modified2 = VAR_1;
  VAR_0->priv = VAR_2;
 }
}
