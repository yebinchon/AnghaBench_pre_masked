
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int signals; } ;
struct obs_output {TYPE_1__ context; int reconnect_retry_cur_sec; } ;
struct calldata {int dummy; } ;
typedef int stack ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int ) ;
 int FUNC_2 (struct calldata*,char*,struct obs_output*) ;
 int FUNC_3 (int ,char*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_4(struct obs_output *VAR_0)
{
 struct calldata VAR_1;
 uint8_t VAR_2[128];

 FUNC_0(&VAR_1, VAR_2, sizeof(VAR_2));
 FUNC_1(&VAR_1, "timeout_sec",
    VAR_0->reconnect_retry_cur_sec);
 FUNC_2(&VAR_1, "output", VAR_0);
 FUNC_3(VAR_0->context.signals, "reconnect", &VAR_1);
}
