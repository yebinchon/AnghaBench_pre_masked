
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct calldata {int member_0; } ;
struct TYPE_3__ {float user_volume; } ;
struct TYPE_4__ {TYPE_1__ audio; int signals; } ;


 scalar_t__ FUNC_0 (struct calldata*,char*) ;
 int FUNC_1 (struct calldata*) ;
 int FUNC_2 (struct calldata*,char*,float) ;
 TYPE_2__* VAR_0 ;
 int FUNC_3 (int ,char*,struct calldata*) ;

void FUNC_4(float VAR_1)
{
 struct calldata VAR_2 = {0};

 if (!VAR_0)
  return;

 FUNC_2(&VAR_2, "volume", VAR_1);
 FUNC_3(VAR_0->signals, "master_volume", &VAR_2);
 VAR_1 = (float)FUNC_0(&VAR_2, "volume");
 FUNC_1(&VAR_2);

 VAR_0->audio.user_volume = VAR_1;
}
