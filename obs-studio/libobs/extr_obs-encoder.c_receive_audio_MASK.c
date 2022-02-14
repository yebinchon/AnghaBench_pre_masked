
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct obs_encoder {int first_received; scalar_t__ framesize_bytes; TYPE_1__* audio_input_buffer; int samplerate; int pause; int first_raw_ts; } ;
struct audio_data {int timestamp; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int *,struct audio_data*,int ) ;
 int FUNC_2 (struct obs_encoder*,struct audio_data*) ;
 int FUNC_3 (struct obs_encoder*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (struct obs_encoder*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, size_t VAR_2, struct audio_data *VAR_3)
{
 FUNC_5(VAR_0);

 struct obs_encoder *VAR_4 = VAR_1;
 struct audio_data VAR_5 = *VAR_3;

 if (!VAR_4->first_received) {
  VAR_4->first_raw_ts = VAR_5.timestamp;
  VAR_4->first_received = 1;
  FUNC_3(VAR_4);
 }

 if (FUNC_1(&VAR_4->pause, &VAR_5, VAR_4->samplerate))
  goto end;

 if (!FUNC_2(VAR_4, &VAR_5))
  goto end;

 while (VAR_4->audio_input_buffer[0].size >=
        VAR_4->framesize_bytes) {
  if (!FUNC_6(VAR_4)) {
   break;
  }
 }

 FUNC_0(VAR_2);

end:
 FUNC_4(VAR_0);
}
