
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * desc; } ;
typedef TYPE_1__ obs_property_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;

void FUNC_2(obs_property_t *VAR_0, const char *VAR_1)
{
 if (VAR_0) {
  FUNC_0(VAR_0->desc);
  VAR_0->desc = VAR_1 && *VAR_1 ? FUNC_1(VAR_1)
            : ((void*)0);
 }
}
