
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_plugin_format {scalar_t__ format; int channels; void* rate; } ;
struct snd_pcm_plugin {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef scalar_t__ snd_pcm_access_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 scalar_t__ FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 void* FUNC_2 (struct snd_pcm_hw_params*) ;
 void* FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (void*,void*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct snd_pcm_plugin*) ;
 int FUNC_10 (struct snd_pcm_substream*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin**) ;
 int FUNC_11 (struct snd_pcm_substream*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin**) ;
 int FUNC_12 (struct snd_pcm_substream*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin**) ;
 int FUNC_13 (struct snd_pcm_substream*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin**) ;
 int FUNC_14 (struct snd_pcm_substream*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin_format*,struct snd_pcm_plugin**) ;
 int FUNC_15 (struct snd_pcm_plugin*) ;

int FUNC_16(struct snd_pcm_substream *VAR_5,
    struct snd_pcm_hw_params *VAR_6,
    struct snd_pcm_hw_params *VAR_7)
{
 struct snd_pcm_plugin_format VAR_8;
 struct snd_pcm_plugin_format VAR_9;
 struct snd_pcm_plugin_format VAR_10;
 snd_pcm_access_t VAR_11, VAR_12;
 struct snd_pcm_plugin *VAR_13 = ((void*)0);
 int VAR_14;
 int VAR_15 = FUNC_8(VAR_5);
 int VAR_16 = (FUNC_1(VAR_7) == 1 ||
     FUNC_0(VAR_7) == VAR_1);

 switch (VAR_15) {
 case 128:
  VAR_9.format = FUNC_2(VAR_7);
  VAR_9.rate = FUNC_3(VAR_7);
  VAR_9.channels = FUNC_1(VAR_7);
  VAR_10.format = FUNC_2(VAR_6);
  VAR_10.rate = FUNC_3(VAR_6);
  VAR_10.channels = FUNC_1(VAR_6);
  VAR_11 = VAR_1;
  VAR_12 = (VAR_16 ? VAR_1 :
        VAR_2);
  break;
 case 129:
  VAR_9.format = FUNC_2(VAR_6);
  VAR_9.rate = FUNC_3(VAR_6);
  VAR_9.channels = FUNC_1(VAR_6);
  VAR_10.format = FUNC_2(VAR_7);
  VAR_10.rate = FUNC_3(VAR_7);
  VAR_10.channels = FUNC_1(VAR_7);
  VAR_11 = (VAR_16 ? VAR_1 :
        VAR_2);
  VAR_12 = VAR_1;
  break;
 default:
  FUNC_6();
  return -VAR_0;
 }
 VAR_8 = VAR_10;

 FUNC_4("srcformat: format=%i, rate=%i, channels=%i\n",
   VAR_10.format,
   VAR_10.rate,
   VAR_10.channels);
 FUNC_4("dstformat: format=%i, rate=%i, channels=%i\n",
   VAR_9.format,
   VAR_9.rate,
   VAR_9.channels);


 if (! FUNC_5(VAR_10.rate, VAR_9.rate) &&
     ! FUNC_7(VAR_10.format)) {
  if (VAR_10.format != VAR_3)
   return -VAR_0;
  VAR_8.format = VAR_4;
  VAR_14 = FUNC_12(VAR_5,
       &VAR_10, &VAR_8,
       &VAR_13);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
  VAR_10 = VAR_8;
  VAR_11 = VAR_12;
 }


 if (VAR_10.channels > VAR_9.channels) {
  VAR_8.channels = VAR_9.channels;
  VAR_14 = FUNC_14(VAR_5, &VAR_10, &VAR_8, &VAR_13);
  FUNC_4("channels reduction: src=%i, dst=%i returns %i\n", VAR_10.channels, VAR_8.channels, VAR_14);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
  VAR_10 = VAR_8;
  VAR_11 = VAR_12;
 }


 if (!FUNC_5(VAR_10.rate, VAR_9.rate)) {
  if (VAR_10.format != VAR_4) {

   VAR_8.format = VAR_4;
   VAR_14 = FUNC_11(VAR_5,
         &VAR_10, &VAR_8,
         &VAR_13);
   if (VAR_14 < 0)
    return VAR_14;
   VAR_14 = FUNC_9(VAR_13);
   if (VAR_14 < 0) {
    FUNC_15(VAR_13);
    return VAR_14;
   }
   VAR_10 = VAR_8;
   VAR_11 = VAR_12;
  }
  VAR_8.rate = VAR_9.rate;
         VAR_14 = FUNC_13(VAR_5,
             &VAR_10, &VAR_8,
      &VAR_13);
  FUNC_4("rate down resampling: src=%i, dst=%i returns %i\n", VAR_10.rate, VAR_8.rate, VAR_14);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
  VAR_10 = VAR_8;
  VAR_11 = VAR_12;
        }


 if (VAR_10.format != VAR_9.format) {
  VAR_8.format = VAR_9.format;
  if (VAR_10.format == VAR_3 ||
      VAR_8.format == VAR_3) {
   VAR_14 = FUNC_12(VAR_5,
        &VAR_10, &VAR_8,
        &VAR_13);
  }
  else if (FUNC_7(VAR_10.format) &&
    FUNC_7(VAR_8.format)) {
   VAR_14 = FUNC_11(VAR_5,
         &VAR_10, &VAR_8,
         &VAR_13);
  }
  else
   return -VAR_0;
  FUNC_4("format change: src=%i, dst=%i returns %i\n", VAR_10.format, VAR_8.format, VAR_14);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
  VAR_10 = VAR_8;
  VAR_11 = VAR_12;
 }


 if (VAR_10.channels < VAR_9.channels) {
  VAR_8.channels = VAR_9.channels;
  VAR_14 = FUNC_14(VAR_5, &VAR_10, &VAR_8, &VAR_13);
  FUNC_4("channels extension: src=%i, dst=%i returns %i\n", VAR_10.channels, VAR_8.channels, VAR_14);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
  VAR_10 = VAR_8;
  VAR_11 = VAR_12;
 }


 if (VAR_11 != VAR_12) {
  VAR_14 = FUNC_10(VAR_5,
      &VAR_10,
      &VAR_8,
      &VAR_13);
  FUNC_4("interleave change (copy: returns %i)\n", VAR_14);
  if (VAR_14 < 0)
   return VAR_14;
  VAR_14 = FUNC_9(VAR_13);
  if (VAR_14 < 0) {
   FUNC_15(VAR_13);
   return VAR_14;
  }
 }

 return 0;
}
