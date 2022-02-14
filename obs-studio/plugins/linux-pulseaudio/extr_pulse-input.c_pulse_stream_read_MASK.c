
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct obs_source_audio {size_t frames; scalar_t__ timestamp; int samples_per_sec; int ** data; int format; int speakers; } ;
typedef int pa_stream ;
struct TYPE_2__ {size_t bytes_per_frame; scalar_t__ first_ts; int stream; int frames; int packets; int source; int format; int samples_per_sec; int speakers; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (size_t,int ) ;
 int FUNC_4 (int ,struct obs_source_audio*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void const**,size_t*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(pa_stream *VAR_3, size_t VAR_4, void *VAR_5)
{
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 FUNC_0(VAR_5);

 const void *VAR_6;
 size_t VAR_7;

 if (!VAR_2->stream)
  goto exit;

 FUNC_6(VAR_2->stream, &VAR_6, &VAR_7);


 if (!VAR_7)
  goto exit;

 if (!VAR_6) {
  FUNC_2(VAR_0, "Got audio hole of %u bytes",
       (unsigned int)VAR_7);
  FUNC_5(VAR_2->stream);
  goto exit;
 }

 struct obs_source_audio VAR_8;
 VAR_8.speakers = VAR_2->speakers;
 VAR_8.samples_per_sec = VAR_2->samples_per_sec;
 VAR_8.format = FUNC_8(VAR_2->format);
 VAR_8.data[0] = (uint8_t *)VAR_6;
 VAR_8.frames = VAR_7 / VAR_2->bytes_per_frame;
 VAR_8.timestamp = FUNC_3(VAR_8.frames, VAR_8.samples_per_sec);

 if (!VAR_2->first_ts)
  VAR_2->first_ts = VAR_8.timestamp + VAR_1;

 if (VAR_8.timestamp > VAR_2->first_ts)
  FUNC_4(VAR_2->source, &VAR_8);

 VAR_2->packets++;
 VAR_2->frames += VAR_8.frames;

 FUNC_5(VAR_2->stream);
exit:
 FUNC_7(0);
}
