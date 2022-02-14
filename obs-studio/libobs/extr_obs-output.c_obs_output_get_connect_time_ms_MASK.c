
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {int (* get_connect_time_ms ) (int ) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_output_t ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ) ;

int FUNC_2(obs_output_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_output_get_connect_time_ms"))
  return -1;

 if (VAR_0->info.get_connect_time_ms)
  return VAR_0->info.get_connect_time_ms(VAR_0->context.data);
 return -1;
}
