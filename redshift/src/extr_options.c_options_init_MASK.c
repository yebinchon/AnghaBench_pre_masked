
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int temperature; void* brightness; void** gamma; } ;
struct TYPE_10__ {int temperature; void* brightness; void** gamma; } ;
struct TYPE_9__ {int start; int end; } ;
struct TYPE_8__ {int start; int end; } ;
struct TYPE_12__ {TYPE_4__ night; TYPE_3__ day; TYPE_2__ dusk; TYPE_1__ dawn; scalar_t__ use_time; int low; int high; } ;
struct TYPE_13__ {int temp_set; int use_fade; int preserve_gamma; scalar_t__ verbose; int mode; int * provider_args; int * provider; int * method_args; int * method; TYPE_5__ scheme; int * config_filepath; } ;
typedef TYPE_6__ options_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_0(options_t *VAR_4)
{
 VAR_4->config_filepath = ((void*)0);


 VAR_4->scheme.high = VAR_2;
 VAR_4->scheme.low = VAR_3;



 VAR_4->scheme.use_time = 0;
 VAR_4->scheme.dawn.start = -1;
 VAR_4->scheme.dawn.end = -1;
 VAR_4->scheme.dusk.start = -1;
 VAR_4->scheme.dusk.end = -1;

 VAR_4->scheme.day.temperature = -1;
 VAR_4->scheme.day.gamma[0] = VAR_0;
 VAR_4->scheme.day.brightness = VAR_0;

 VAR_4->scheme.night.temperature = -1;
 VAR_4->scheme.night.gamma[0] = VAR_0;
 VAR_4->scheme.night.brightness = VAR_0;


 VAR_4->temp_set = -1;

 VAR_4->method = ((void*)0);
 VAR_4->method_args = ((void*)0);

 VAR_4->provider = ((void*)0);
 VAR_4->provider_args = ((void*)0);

 VAR_4->use_fade = -1;
 VAR_4->preserve_gamma = 1;
 VAR_4->mode = VAR_1;
 VAR_4->verbose = 0;
}
