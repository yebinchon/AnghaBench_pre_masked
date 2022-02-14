
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct snd_pcm_hw_rule {unsigned int* private; int var; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; int integer; } ;


 unsigned int FUNC_0 (scalar_t__*) ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 unsigned int* FUNC_2 (unsigned int const*) ;
 unsigned int FUNC_3 (unsigned int const*) ;
 scalar_t__* VAR_1 ;
 struct snd_interval* FUNC_4 (struct snd_pcm_hw_params*,int ) ;
 struct snd_interval* FUNC_5 (struct snd_pcm_hw_params*,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (unsigned int const*) ;
 int FUNC_8 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_hw_params *VAR_2,
         struct snd_pcm_hw_rule *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_4(VAR_2, VAR_3->var);
 const struct snd_interval *VAR_5;
 struct snd_interval VAR_6 = { .min = 1, .max = 2, .integer = 1, };
 unsigned int VAR_7;
 const u8 *VAR_8, *VAR_9 = VAR_3->private;

 VAR_8 = FUNC_2(VAR_9);
 if (VAR_8) {
  unsigned int VAR_10 = 0;


  VAR_5 = FUNC_5(VAR_2, VAR_0);
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
   if (VAR_5->min <= VAR_1[VAR_7] && VAR_5->max >= VAR_1[VAR_7])
    VAR_10 |= FUNC_1(VAR_7);

  for (VAR_7 = FUNC_3(VAR_9); VAR_7 > 0; VAR_7--, VAR_8 += 3)
   if (VAR_10 & VAR_8[1])
    VAR_6.max = FUNC_6(VAR_6.max, FUNC_7(VAR_8));
 }

 return FUNC_8(VAR_4, &VAR_6);
}
