
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_pcm_hw_rule {unsigned int* private; int var; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int min; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int* FUNC_1 (unsigned int const*) ;
 unsigned int FUNC_2 (unsigned int const*) ;
 int VAR_1 ;
 struct snd_interval* FUNC_3 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_4 (struct snd_pcm_hw_params*,int ) ;
 unsigned int FUNC_5 (unsigned int const*) ;
 int FUNC_6 (struct snd_interval*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_2,
      struct snd_pcm_hw_rule *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_3(VAR_2, VAR_3->var);
 const struct snd_interval *VAR_5;
 unsigned int VAR_6 = 7, VAR_7;
 const u8 *VAR_8, *VAR_9 = VAR_3->private;

 VAR_8 = FUNC_1(VAR_9);
 if (VAR_8) {
  VAR_5 = FUNC_4(VAR_2, VAR_0);

  for (VAR_7 = FUNC_2(VAR_9); VAR_7 > 0; VAR_7--, VAR_8 += 3) {
   unsigned VAR_10 = FUNC_5(VAR_8);





   if (VAR_5->min <= VAR_10)
    VAR_6 |= VAR_8[1];
  }
 }

 return FUNC_6(VAR_4, FUNC_0(VAR_1), VAR_1,
     VAR_6);
}
