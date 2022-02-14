
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hardware {int channels_min; int channels_max; size_t buffer_bytes_max; scalar_t__ rate_min; scalar_t__ rate_max; size_t period_bytes_max; int periods_max; int period_bytes_min; } ;


 int FUNC_0 (char*) ;
 struct snd_pcm_hardware VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,unsigned int,char const*,struct snd_pcm_hardware*) ;
 int FUNC_2 (char*,unsigned int,char const*,struct snd_pcm_hardware*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ,char const*,int ,unsigned int*) ;
 void* FUNC_5 (char const*,int ,int ) ;

__attribute__((used)) static void FUNC_6(const char *VAR_7,
       struct snd_pcm_hardware *VAR_8,
       struct snd_pcm_hardware *VAR_9)
{
 char *VAR_10;
 int VAR_11;
 size_t VAR_12;
 unsigned int VAR_13;


 if (VAR_8)
  *VAR_9 = *VAR_8;
 else
  *VAR_9 = VAR_0;

 VAR_11 = FUNC_5(VAR_7, VAR_4, 0);
 if (VAR_11)
  VAR_9->channels_min = VAR_11;

 VAR_11 = FUNC_5(VAR_7, VAR_3, 0);
 if (VAR_11)
  VAR_9->channels_max = VAR_11;

 VAR_10 = FUNC_4(VAR_1, VAR_7, VAR_6, &VAR_13);
 if (!FUNC_0(VAR_10)) {
  FUNC_2(VAR_10, VAR_13, VAR_7, VAR_9);
  FUNC_3(VAR_10);
 }

 VAR_10 = FUNC_4(VAR_1, VAR_7, VAR_5, &VAR_13);
 if (!FUNC_0(VAR_10)) {
  FUNC_1(VAR_10, VAR_13, VAR_7, VAR_9);
  FUNC_3(VAR_10);
 }

 VAR_12 = FUNC_5(VAR_7, VAR_2, 0);
 if (VAR_12)
  VAR_9->buffer_bytes_max = VAR_12;


 if (VAR_9->channels_min > VAR_9->channels_max)
  VAR_9->channels_min = VAR_9->channels_max;

 if (VAR_9->rate_min > VAR_9->rate_max)
  VAR_9->rate_min = VAR_9->rate_max;

 VAR_9->period_bytes_max = VAR_9->buffer_bytes_max;

 VAR_9->periods_max = VAR_9->period_bytes_max /
  VAR_9->period_bytes_min;
}
