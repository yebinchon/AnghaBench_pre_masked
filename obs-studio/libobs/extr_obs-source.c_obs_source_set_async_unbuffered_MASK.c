
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int async_unbuffered; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_source_t *VAR_0, bool VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_source_set_async_unbuffered"))
  return;

 VAR_0->async_unbuffered = VAR_1;
}
