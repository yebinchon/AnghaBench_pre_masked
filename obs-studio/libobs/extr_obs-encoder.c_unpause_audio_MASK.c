
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pause_data {int ts_end; int ts_start; } ;
struct audio_data {int timestamp; scalar_t__ frames; scalar_t__* data; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,int) ;

__attribute__((used)) static void FUNC_1(struct pause_data *VAR_1, struct audio_data *VAR_2,
     size_t VAR_3)
{
 uint64_t VAR_4 = VAR_1->ts_end - VAR_2->timestamp;
 VAR_4 = FUNC_0(VAR_3, VAR_4);

 for (size_t VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (!VAR_2->data[VAR_5])
   break;
  VAR_2->data[VAR_5] += VAR_4 * sizeof(float);
 }

 VAR_2->timestamp = VAR_1->ts_start;
 VAR_2->frames = VAR_2->frames - (uint32_t)VAR_4;
 VAR_1->ts_start = 0;
 VAR_1->ts_end = 0;
}
