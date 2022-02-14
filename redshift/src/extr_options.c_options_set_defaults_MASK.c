
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ temperature; void** gamma; void* brightness; } ;
struct TYPE_6__ {scalar_t__ temperature; void** gamma; void* brightness; } ;
struct TYPE_8__ {TYPE_2__ night; TYPE_1__ day; } ;
struct TYPE_9__ {int use_fade; TYPE_3__ scheme; } ;
typedef TYPE_4__ options_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;

void
FUNC_1(options_t *VAR_4)
{
 if (VAR_4->scheme.day.temperature < 0) {
  VAR_4->scheme.day.temperature = VAR_1;
 }
 if (VAR_4->scheme.night.temperature < 0) {
  VAR_4->scheme.night.temperature = VAR_3;
 }

 if (FUNC_0(VAR_4->scheme.day.brightness)) {
  VAR_4->scheme.day.brightness = VAR_0;
 }
 if (FUNC_0(VAR_4->scheme.night.brightness)) {
  VAR_4->scheme.night.brightness = VAR_0;
 }

 if (FUNC_0(VAR_4->scheme.day.gamma[0])) {
  VAR_4->scheme.day.gamma[0] = VAR_2;
  VAR_4->scheme.day.gamma[1] = VAR_2;
  VAR_4->scheme.day.gamma[2] = VAR_2;
 }
 if (FUNC_0(VAR_4->scheme.night.gamma[0])) {
  VAR_4->scheme.night.gamma[0] = VAR_2;
  VAR_4->scheme.night.gamma[1] = VAR_2;
  VAR_4->scheme.night.gamma[2] = VAR_2;
 }

 if (VAR_4->use_fade < 0) VAR_4->use_fade = 1;
}
