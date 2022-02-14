
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct obs_encoder {scalar_t__ first_raw_ts; TYPE_1__* audio_input_buffer; } ;
struct circlebuf {int dummy; } ;
struct audio_data {int * data; int member_0; } ;
struct TYPE_2__ {size_t size; int data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (struct obs_encoder*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (struct obs_encoder*,struct audio_data*,size_t,size_t) ;

__attribute__((used)) static void FUNC_4(struct obs_encoder *VAR_1, uint64_t VAR_2)
{
 size_t VAR_3 = VAR_1->audio_input_buffer[0].size;
 struct audio_data VAR_4 = {0};
 size_t VAR_5 = 0;

 for (size_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4.data[VAR_6] = VAR_1->audio_input_buffer[VAR_6].data;
  FUNC_2(&VAR_1->audio_input_buffer[VAR_6], 0,
         sizeof(struct circlebuf));
 }

 if (VAR_1->first_raw_ts < VAR_2)
  VAR_5 = FUNC_1(VAR_1, VAR_2,
            VAR_1->first_raw_ts);

 FUNC_3(VAR_1, &VAR_4, VAR_3, VAR_5);

 for (size_t VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(VAR_4.data[VAR_7]);
}
