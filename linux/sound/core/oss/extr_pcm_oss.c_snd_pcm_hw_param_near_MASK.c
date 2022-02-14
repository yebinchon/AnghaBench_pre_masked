
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
typedef int snd_pcm_hw_param_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,unsigned int,int,int,int) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct snd_pcm_hw_params* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,int*) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,int*) ;
 int FUNC_5 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,int,int*) ;
 int FUNC_6 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,int,int*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
     struct snd_pcm_hw_params *VAR_4,
     snd_pcm_hw_param_t VAR_5, unsigned int VAR_6,
     int *VAR_7)
{
 struct snd_pcm_hw_params *VAR_8 = ((void*)0);
 int VAR_9;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16 = VAR_7 ? *VAR_7 : 0;

 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 VAR_12 = VAR_13 = VAR_6;
 VAR_14 = VAR_15 = VAR_16;
 if (VAR_15 > 0)
  VAR_15 = 0;
 else if (VAR_15 == 0)
  VAR_15 = -1;
 else {
  VAR_15 = 1;
  VAR_13--;
 }
 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 *VAR_8 = *VAR_4;
 VAR_10 = VAR_12;
 VAR_12 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_12, &VAR_14);
 if (VAR_12 >= 0) {
  struct snd_pcm_hw_params *VAR_17;
  if (VAR_13 < 0)
   goto _end;
  if ((unsigned int)VAR_12 == VAR_10 && VAR_14 == VAR_16)
   goto _end;
  VAR_17 = FUNC_2(sizeof(*VAR_17), VAR_1);
  if (VAR_17 == ((void*)0)) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }
  *VAR_17 = *VAR_8;
  VAR_13 = FUNC_5(VAR_3, VAR_17, VAR_5, VAR_13, &VAR_15);
  if (VAR_13 < 0) {
   FUNC_1(VAR_17);
   goto _end;
  }
  if (FUNC_0(VAR_13, VAR_15, VAR_6, VAR_16, VAR_12, VAR_14)) {
   *VAR_4 = *VAR_17;
   VAR_11 = 1;
  }
  FUNC_1(VAR_17);
 } else {
  *VAR_4 = *VAR_8;
  VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_13, &VAR_15);
  if (VAR_13 < 0) {
   FUNC_1(VAR_8);
   return VAR_13;
  }
  VAR_11 = 1;
 }
 _end:
  FUNC_1(VAR_8);
 if (VAR_11)
  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_7);
 else
  VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_7);
 return VAR_9;
}
