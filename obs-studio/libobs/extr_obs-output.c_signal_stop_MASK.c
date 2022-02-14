
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signals; } ;
struct obs_output {TYPE_1__ context; int stop_code; int last_error_message; } ;
struct calldata {int dummy; } ;


 int FUNC_0 (struct calldata*) ;
 int FUNC_1 (struct calldata*) ;
 int FUNC_2 (struct calldata*,char*,int ) ;
 int FUNC_3 (struct calldata*,char*,struct obs_output*) ;
 int FUNC_4 (struct calldata*,char*,int ) ;
 int FUNC_5 (int ,char*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_6(struct obs_output *VAR_0)
{
 struct calldata VAR_1;

 FUNC_1(&VAR_1);
 FUNC_4(&VAR_1, "last_error", VAR_0->last_error_message);
 FUNC_2(&VAR_1, "code", VAR_0->stop_code);
 FUNC_3(&VAR_1, "output", VAR_0);

 FUNC_5(VAR_0->context.signals, "stop", &VAR_1);

 FUNC_0(&VAR_1);
}
