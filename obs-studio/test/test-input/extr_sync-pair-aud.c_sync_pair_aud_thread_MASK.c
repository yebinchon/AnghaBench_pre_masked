
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct video_output_info {int fps_num; int fps_den; } ;
struct sync_pair_aud {int source; int event; } ;
struct obs_source_audio {int frames; int samples_per_sec; int timestamp; int format; int speakers; int ** data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 double FUNC_1 (double) ;
 int FUNC_2 (float*) ;
 float* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct obs_source_audio*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 double VAR_4 ;
 int FUNC_10 (int ) ;
 struct video_output_info* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int,int,int,int) ;

__attribute__((used)) static void *FUNC_13(void *VAR_5)
{
 struct sync_pair_aud *VAR_6 = VAR_5;
 uint32_t VAR_7 = FUNC_0(FUNC_4());
 uint32_t VAR_8 = VAR_7 / 100;
 uint64_t VAR_9 = FUNC_6();
 double VAR_10 = 0.0;
 float *VAR_11 = FUNC_3(VAR_8 * sizeof(float));

 uint64_t VAR_12 = FUNC_10(FUNC_5());
 const struct video_output_info *VAR_13 =
  FUNC_11(FUNC_5());
 uint64_t VAR_14 = VAR_13->fps_num;
 uint64_t VAR_15 = VAR_13->fps_den;

 while (FUNC_8(VAR_6->event) == VAR_1) {
  if (!FUNC_9(VAR_9 += 10000000))
   VAR_9 = FUNC_6();

  for (uint64_t VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
   uint64_t VAR_17 =
    VAR_9 + VAR_16 * 1000000000ULL / VAR_7;

   if (FUNC_12(VAR_17, VAR_12, VAR_14, VAR_15)) {
    VAR_10 += VAR_4 * VAR_2;
    if (VAR_10 > VAR_2)
     VAR_10 -= VAR_2;

    VAR_11[VAR_16] = (float)(FUNC_1(VAR_10) * 0.5);
   } else {
    VAR_11[VAR_16] = 0.0f;
   }
  }

  struct obs_source_audio VAR_18;
  VAR_18.data[0] = (uint8_t *)VAR_11;
  VAR_18.frames = VAR_8;
  VAR_18.speakers = VAR_3;
  VAR_18.samples_per_sec = VAR_7;
  VAR_18.timestamp = VAR_9;
  VAR_18.format = VAR_0;
  FUNC_7(VAR_6->source, &VAR_18);
 }

 FUNC_2(VAR_11);

 return ((void*)0);
}
