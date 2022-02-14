
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct obs_context_data {int type; } ;
struct TYPE_9__ {char const* id; } ;
struct TYPE_13__ {TYPE_1__ info; } ;
typedef TYPE_5__ obs_source_t ;
struct TYPE_12__ {char const* id; } ;
struct TYPE_14__ {TYPE_4__ info; } ;
typedef TYPE_6__ obs_service_t ;
struct TYPE_10__ {char const* id; } ;
struct TYPE_15__ {TYPE_2__ info; } ;
typedef TYPE_7__ obs_output_t ;
struct TYPE_11__ {char const* id; } ;
struct TYPE_16__ {TYPE_3__ info; } ;
typedef TYPE_8__ obs_encoder_t ;







const char *FUNC_0(void *VAR_0)
{
 struct obs_context_data *VAR_1 = VAR_0;
 if (!VAR_1)
  return ((void*)0);

 switch (VAR_1->type) {
 case 128:
  return ((obs_source_t *)VAR_0)->info.id;
 case 130:
  return ((obs_output_t *)VAR_0)->info.id;
 case 131:
  return ((obs_encoder_t *)VAR_0)->info.id;
 case 129:
  return ((obs_service_t *)VAR_0)->info.id;
 default:;
 }

 return ((void*)0);
}
