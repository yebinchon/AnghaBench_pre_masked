
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_pcm_hw_rule {int ** private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_oxfw_stream_formation {int rate; int pcm; } ;
struct snd_interval {int integer; int max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_5 (struct snd_interval const*,int ) ;
 int FUNC_6 (int *,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_4,
   struct snd_pcm_hw_rule *VAR_5)
{
 u8 **VAR_6 = VAR_5->private;
 struct snd_interval *VAR_7 =
  FUNC_0(VAR_4, VAR_1);
 const struct snd_interval *VAR_8 =
  FUNC_1(VAR_4, VAR_0);
 struct snd_interval VAR_9 = {
  .min = VAR_3, .max = 0, .integer = 1
 };
 struct snd_oxfw_stream_formation VAR_10;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_6[VAR_11] == ((void*)0))
   continue;

  VAR_12 = FUNC_6(VAR_6[VAR_11], &VAR_10);
  if (VAR_12 < 0)
   continue;
  if (!FUNC_5(VAR_8, VAR_10.pcm))
   continue;

  VAR_9.min = FUNC_3(VAR_9.min, VAR_10.rate);
  VAR_9.max = FUNC_2(VAR_9.max, VAR_10.rate);

 }
 return FUNC_4(VAR_7, &VAR_9);
}
