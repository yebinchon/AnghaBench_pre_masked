
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int default_flags; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;

void FUNC_1(obs_source_t *VAR_0, uint32_t VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_source_set_default_flags"))
  return;

 VAR_0->default_flags = VAR_1;
}
