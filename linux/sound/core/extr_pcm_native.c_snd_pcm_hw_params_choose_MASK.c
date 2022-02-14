
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct snd_interval {int dummy; } ;
 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int const) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int const) ;
 struct snd_mask* FUNC_3 (struct snd_pcm_hw_params*,int const) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int const,int *) ;
 int FUNC_5 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int const,int *) ;
 int FUNC_6 (struct snd_pcm_substream*,int const,int ,struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct snd_pcm_substream*,int const,int ,struct snd_mask*,struct snd_mask*) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_0,
        struct snd_pcm_hw_params *VAR_1)
{
 static const int VAR_2[] = {
  135,
  132,
  129,
  133,
  130,
  131,
  134,
  128,
  -1
 };
 const int *VAR_3;
 struct snd_mask VAR_4;
 struct snd_interval VAR_5;
 int VAR_6;

 for (VAR_3 = VAR_2; *VAR_3 != -1; VAR_3++) {

  if (FUNC_9()) {
   if (FUNC_1(*VAR_3))
    VAR_4 = *FUNC_3(VAR_1, *VAR_3);
  }
  if (FUNC_7()) {
   if (FUNC_0(*VAR_3))
    VAR_5 = *FUNC_2(VAR_1, *VAR_3);
  }
  if (*VAR_3 != 134)
   VAR_6 = FUNC_4(VAR_0, VAR_1, *VAR_3, ((void*)0));
  else
   VAR_6 = FUNC_5(VAR_0, VAR_1, *VAR_3, ((void*)0));
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_6 == 0)
   continue;


  if (FUNC_1(*VAR_3)) {
   FUNC_8(VAR_0, *VAR_3, 0, &VAR_4,
         FUNC_3(VAR_1, *VAR_3));
  }
  if (FUNC_0(*VAR_3)) {
   FUNC_6(VAR_0, *VAR_3, 0, &VAR_5,
      FUNC_2(VAR_1, *VAR_3));
  }
 }

 return 0;
}
