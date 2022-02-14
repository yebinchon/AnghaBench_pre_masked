
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {struct snd_motu_packet_format* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_motu_packet_format {unsigned int* fixed_part_pcm_chunks; unsigned int* differed_part_pcm_chunks; } ;
struct snd_interval {int integer; int max; int min; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_6 (struct snd_interval const*,unsigned int) ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_4,
        struct snd_pcm_hw_rule *VAR_5)
{
 struct snd_motu_packet_format *VAR_6 = VAR_5->private;

 const struct snd_interval *VAR_7 =
  FUNC_2(VAR_4, VAR_1);
 struct snd_interval *VAR_8 =
  FUNC_1(VAR_4, VAR_0);
 struct snd_interval VAR_9 = {
  .min = VAR_2, .max = 0, .integer = 1
 };
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_3); ++VAR_10) {
  VAR_12 = VAR_3[VAR_10];
  VAR_13 = VAR_10 / 2;

  if (!FUNC_6(VAR_7, VAR_12))
   continue;

  VAR_11 = VAR_6->fixed_part_pcm_chunks[VAR_13] +
          VAR_6->differed_part_pcm_chunks[VAR_13];
  VAR_9.min = FUNC_4(VAR_9.min, VAR_11);
  VAR_9.max = FUNC_3(VAR_9.max, VAR_11);
 }

 return FUNC_5(VAR_8, &VAR_9);
}
