
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int private; } ;
struct TYPE_9__ {TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;

void FUNC_2(obs_source_t *VAR_0, obs_source_t *VAR_1)
{
 if (!FUNC_1(VAR_0, "obs_source_copy_filters"))
  return;
 if (!FUNC_1(VAR_1, "obs_source_copy_filters"))
  return;

 FUNC_0(VAR_0, VAR_1, VAR_0->context.private);
}
