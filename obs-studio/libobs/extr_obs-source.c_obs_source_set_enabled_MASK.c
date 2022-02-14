
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_6__ {int signals; } ;
struct TYPE_7__ {int enabled; TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int) ;
 int FUNC_2 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (int ,char*,struct calldata*) ;

void FUNC_5(obs_source_t *VAR_0, bool VAR_1)
{
 struct calldata VAR_2;
 uint8_t VAR_3[128];

 if (!FUNC_3(VAR_0, "obs_source_set_enabled"))
  return;

 VAR_0->enabled = VAR_1;

 FUNC_0(&VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_2(&VAR_2, "source", VAR_0);
 FUNC_1(&VAR_2, "enabled", VAR_1);

 FUNC_4(VAR_0->context.signals, "enable", &VAR_2);
}
