
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_5__ {int signals; } ;
struct TYPE_6__ {int active_delay_ns; TYPE_1__ context; } ;
typedef TYPE_2__ obs_output_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int) ;
 int FUNC_2 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_3 (int ,char const*,struct calldata*) ;

void FUNC_4(obs_output_t *VAR_0, const char *VAR_1)
{
 struct calldata VAR_2;
 uint8_t VAR_3[128];

 FUNC_0(&VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_2(&VAR_2, "output", VAR_0);
 FUNC_1(&VAR_2, "sec", VAR_0->active_delay_ns / 1000000000);
 FUNC_3(VAR_0->context.signals, VAR_1, &VAR_2);
}
