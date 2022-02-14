
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pfkey_supported; scalar_t__ available; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

int FUNC_1(void)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < FUNC_0(); VAR_1++)
  if (VAR_0[VAR_1].available && VAR_0[VAR_1].pfkey_supported)
   VAR_2++;
 return VAR_2;
}
