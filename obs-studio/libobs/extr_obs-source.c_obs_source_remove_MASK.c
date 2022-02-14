
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int removed; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*,char*,char*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

void FUNC_2(obs_source_t *VAR_0)
{
 if (!FUNC_1(VAR_0, "obs_source_remove"))
  return;

 if (!VAR_0->removed) {
  VAR_0->removed = 1;
  FUNC_0(VAR_0, "source_remove", "remove");
 }
}
