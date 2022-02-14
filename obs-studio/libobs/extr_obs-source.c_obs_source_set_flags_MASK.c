
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ flags; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(obs_source_t *VAR_0, uint32_t VAR_1)
{
 if (!FUNC_0(VAR_0, "obs_source_set_flags"))
  return;

 if (VAR_1 != VAR_0->flags) {
  VAR_0->flags = VAR_1;
  FUNC_1(VAR_0);
 }
}
