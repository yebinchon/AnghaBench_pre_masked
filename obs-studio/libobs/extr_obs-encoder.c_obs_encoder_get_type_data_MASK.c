
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* type_data; } ;
struct TYPE_6__ {TYPE_1__ orig_info; } ;
typedef TYPE_2__ obs_encoder_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*) ;

void *FUNC_1(obs_encoder_t *VAR_0)
{
 return FUNC_0(VAR_0, "obs_encoder_get_type_data")
         ? VAR_0->orig_info.type_data
         : ((void*)0);
}
