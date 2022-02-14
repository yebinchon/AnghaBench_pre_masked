
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int signals; } ;
struct obs_output {TYPE_1__ context; } ;
struct calldata {int member_0; } ;


 int FUNC_0 (struct calldata*) ;
 int FUNC_1 (struct calldata*,char*,struct obs_output*) ;
 int FUNC_2 (int ,char const*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_3(struct obs_output *VAR_0,
        const char *VAR_1)
{
 struct calldata VAR_2 = {0};
 FUNC_1(&VAR_2, "output", VAR_0);
 FUNC_2(VAR_0->context.signals, VAR_1, &VAR_2);
 FUNC_0(&VAR_2);
}
