
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int settings; int data; } ;
struct TYPE_7__ {int (* load ) (int ,int ) ;} ;
struct TYPE_9__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(obs_source_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_source_load"))
  return;
 if (VAR_0->info.load)
  VAR_0->info.load(VAR_0->context.data,
      VAR_0->context.settings);

 FUNC_1(VAR_0, "source_load", "load");
}
