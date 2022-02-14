
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct sinewave_data {int source; int event; } ;
struct obs_source_audio {int frames; int samples_per_sec; int timestamp; int format; int speakers; scalar_t__** data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int ,struct obs_source_audio*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 double VAR_4 ;

__attribute__((used)) static void *FUNC_5(void *VAR_5)
{
 struct sinewave_data *VAR_6 = VAR_5;
 uint64_t VAR_7 = FUNC_3();
 uint64_t VAR_8 = 0;
 double VAR_9 = 0.0;
 uint8_t VAR_10[480];

 while (FUNC_2(VAR_6->event) == VAR_1) {
  if (!FUNC_4(VAR_7 += 10000000))
   VAR_7 = FUNC_3();

  for (size_t VAR_11 = 0; VAR_11 < 480; VAR_11++) {
   VAR_9 += VAR_4 * VAR_2;
   if (VAR_9 > VAR_2)
    VAR_9 -= VAR_2;

   double VAR_12 = FUNC_0(VAR_9) * 0.5;
   VAR_10[VAR_11] = (uint8_t)((VAR_12 + 1.0) * 0.5 * 255.0);
  }

  struct obs_source_audio VAR_13;
  VAR_13.data[0] = VAR_10;
  VAR_13.frames = 480;
  VAR_13.speakers = VAR_3;
  VAR_13.samples_per_sec = 48000;
  VAR_13.timestamp = VAR_8;
  VAR_13.format = VAR_0;
  FUNC_1(VAR_6->source, &VAR_13);

  VAR_8 += 10000000;
 }

 return ((void*)0);
}
