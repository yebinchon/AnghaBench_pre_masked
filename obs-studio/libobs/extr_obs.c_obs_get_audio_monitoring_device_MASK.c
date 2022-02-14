
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* monitoring_device_name; char* monitoring_device_id; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(const char **VAR_1, const char **VAR_2)
{
 if (!VAR_0)
  return;

 if (VAR_1)
  *VAR_1 = VAR_0->audio.monitoring_device_name;
 if (VAR_2)
  *VAR_2 = VAR_0->audio.monitoring_device_id;
}
