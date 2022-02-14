
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct encoder_packet {void* sys_dts_usec; void* dts_usec; } ;
struct encoder_callback {int dummy; } ;
struct TYPE_10__ {size_t num; struct encoder_callback* array; } ;
struct TYPE_9__ {int ts_offset; int mutex; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_11__ {int first_received; void* offset_usec; int start_ts; int callbacks_mutex; TYPE_3__ callbacks; TYPE_2__ pause; TYPE_1__ context; } ;
typedef TYPE_4__ obs_encoder_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 void* FUNC_2 (struct encoder_packet*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,struct encoder_callback*,struct encoder_packet*) ;

void FUNC_6(obs_encoder_t *VAR_1, bool VAR_2,
        bool VAR_3, struct encoder_packet *VAR_4)
{
 if (!VAR_2) {
  FUNC_0(VAR_0, "Error encoding with encoder '%s'",
       VAR_1->context.name);
  FUNC_1(VAR_1);
  return;
 }

 if (VAR_3) {
  if (!VAR_1->first_received) {
   VAR_1->offset_usec = FUNC_2(VAR_4);
   VAR_1->first_received = 1;
  }



  VAR_4->dts_usec = VAR_1->start_ts / 1000 +
    FUNC_2(VAR_4) - VAR_1->offset_usec;
  VAR_4->sys_dts_usec = VAR_4->dts_usec;

  FUNC_3(&VAR_1->pause.mutex);
  VAR_4->sys_dts_usec += VAR_1->pause.ts_offset / 1000;
  FUNC_4(&VAR_1->pause.mutex);

  FUNC_3(&VAR_1->callbacks_mutex);

  for (size_t VAR_5 = VAR_1->callbacks.num; VAR_5 > 0; VAR_5--) {
   struct encoder_callback *VAR_6;
   VAR_6 = VAR_1->callbacks.array + (VAR_5 - 1);
   FUNC_5(VAR_1, VAR_6, VAR_4);
  }

  FUNC_4(&VAR_1->callbacks_mutex);
 }
}
