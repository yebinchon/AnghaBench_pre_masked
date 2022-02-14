
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int signals; int private; } ;
struct obs_source {TYPE_1__ context; } ;
struct calldata {int dummy; } ;
typedef int stack ;
struct TYPE_4__ {int signals; } ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,struct obs_source*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int ,char const*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_3(struct obs_source *VAR_1,
           const char *VAR_2,
           const char *VAR_3)
{
 struct calldata VAR_4;
 uint8_t VAR_5[128];

 FUNC_0(&VAR_4, VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_4, "source", VAR_1);
 if (VAR_2 && !VAR_1->context.private)
  FUNC_2(VAR_0->signals, VAR_2, &VAR_4);
 if (VAR_3)
  FUNC_2(VAR_1->context.signals, VAR_3,
          &VAR_4);
}
