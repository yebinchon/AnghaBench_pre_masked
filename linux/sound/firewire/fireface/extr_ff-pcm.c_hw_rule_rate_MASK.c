
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {unsigned int* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int integer; int max; int min; } ;
typedef enum snd_ff_stream_mode { ____Placeholder_snd_ff_stream_mode } snd_ff_stream_mode ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int,int*) ;
 int FUNC_6 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_7 (struct snd_interval const*,unsigned int const) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_hw_params *VAR_4,
   struct snd_pcm_hw_rule *VAR_5)
{
 const unsigned int *VAR_6 = VAR_5->private;
 struct snd_interval *VAR_7 =
  FUNC_1(VAR_4, VAR_1);
 const struct snd_interval *VAR_8 =
  FUNC_2(VAR_4, VAR_0);
 struct snd_interval VAR_9 = {
  .min = VAR_2, .max = 0, .integer = 1
 };
 unsigned int VAR_10;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); VAR_10++) {
  enum snd_ff_stream_mode VAR_11;
  int VAR_12;

  VAR_12 = FUNC_5(VAR_10, &VAR_11);
  if (VAR_12 < 0)
   continue;

  if (!FUNC_7(VAR_8, VAR_6[VAR_11]))
   continue;

  VAR_9.min = FUNC_4(VAR_9.min, VAR_3[VAR_10]);
  VAR_9.max = FUNC_3(VAR_9.max, VAR_3[VAR_10]);
 }

 return FUNC_6(VAR_7, &VAR_9);
}
