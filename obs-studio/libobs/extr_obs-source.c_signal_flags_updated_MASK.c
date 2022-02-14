
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
struct TYPE_6__ {TYPE_1__ context; int flags; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int ) ;
 int FUNC_2 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_3 (int ,char*,struct calldata*) ;

__attribute__((used)) static inline void FUNC_4(obs_source_t *VAR_0)
{
 struct calldata VAR_1;
 uint8_t VAR_2[128];

 FUNC_0(&VAR_1, VAR_2, sizeof(VAR_2));
 FUNC_2(&VAR_1, "source", VAR_0);
 FUNC_1(&VAR_1, "flags", VAR_0->flags);

 FUNC_3(VAR_0->context.signals, "update_flags", &VAR_1);
}
