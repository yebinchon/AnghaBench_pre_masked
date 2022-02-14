
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* source; } ;
typedef TYPE_3__ obs_scene_t ;
typedef int calldata_t ;
struct TYPE_6__ {int signals; } ;
struct TYPE_7__ {TYPE_1__ context; } ;


 int FUNC_0 (int *,char*,TYPE_3__*) ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static void FUNC_2(obs_scene_t *VAR_0, const char *VAR_1,
     calldata_t *VAR_2)
{
 FUNC_0(VAR_2, "scene", VAR_0);
 FUNC_1(VAR_0->source->context.signals, VAR_1, VAR_2);
}
