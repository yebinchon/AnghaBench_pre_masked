
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
struct TYPE_6__ {TYPE_1__ context; } ;
typedef TYPE_2__ obs_source_t ;


 int FUNC_0 (struct calldata*,int *,int) ;
 int FUNC_1 (struct calldata*,char*,int) ;
 int FUNC_2 (struct calldata*,char*,TYPE_2__*) ;
 int FUNC_3 (int ,char const*,struct calldata*) ;

__attribute__((used)) static void FUNC_4(obs_source_t *VAR_0,
       const char *VAR_1, bool VAR_2)
{
 struct calldata VAR_3;
 uint8_t VAR_4[128];

 FUNC_0(&VAR_3, VAR_4, sizeof(VAR_4));
 FUNC_2(&VAR_3, "source", VAR_0);
 FUNC_1(&VAR_3, "enabled", VAR_2);

 FUNC_3(VAR_0->context.signals, VAR_1, &VAR_3);
}
