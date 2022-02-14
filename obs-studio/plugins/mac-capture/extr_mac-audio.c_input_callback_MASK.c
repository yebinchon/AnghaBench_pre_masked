
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct obs_source_audio {size_t frames; int timestamp; int samples_per_sec; int format; int speakers; int * data; } ;
struct coreaudio_data {int source; int sample_rate; int format; int speakers; TYPE_5__* buf_list; int unit; } ;
typedef size_t UInt32 ;
struct TYPE_8__ {size_t mNumberBuffers; TYPE_1__* mBuffers; } ;
struct TYPE_7__ {int mHostTime; } ;
struct TYPE_6__ {int mData; } ;
typedef int OSStatus ;
typedef int AudioUnitRenderActionFlags ;
typedef TYPE_2__ AudioTimeStamp ;
typedef int AudioBufferList ;


 int FUNC_0 (int ,int *,TYPE_2__ const*,size_t,size_t,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct coreaudio_data*,char*,char*) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct obs_source_audio*) ;

__attribute__((used)) static OSStatus FUNC_4(void *VAR_1,
          AudioUnitRenderActionFlags *VAR_2,
          const AudioTimeStamp *VAR_3, UInt32 VAR_4,
          UInt32 VAR_5, AudioBufferList *VAR_6)
{
 struct coreaudio_data *VAR_7 = VAR_1;
 OSStatus VAR_8;
 struct obs_source_audio VAR_9;

 VAR_8 = FUNC_0(VAR_7->unit, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_7->buf_list);
 if (!FUNC_2(VAR_8, VAR_7, "input_callback", "audio retrieval"))
  return VAR_0;

 for (UInt32 VAR_10 = 0; VAR_10 < VAR_7->buf_list->mNumberBuffers; VAR_10++)
  VAR_9.data[VAR_10] = VAR_7->buf_list->mBuffers[VAR_10].mData;

 VAR_9.frames = VAR_5;
 VAR_9.speakers = VAR_7->speakers;
 VAR_9.format = VAR_7->format;
 VAR_9.samples_per_sec = VAR_7->sample_rate;
 VAR_9.timestamp = VAR_3->mHostTime;

 FUNC_3(VAR_7->source, &VAR_9);

 FUNC_1(VAR_6);
 return VAR_0;
}
