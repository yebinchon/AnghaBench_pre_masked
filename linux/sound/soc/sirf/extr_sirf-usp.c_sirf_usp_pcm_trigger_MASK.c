
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct sirf_usp {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct sirf_usp*) ;
 int FUNC_1 (struct sirf_usp*) ;
 int FUNC_2 (struct sirf_usp*) ;
 int FUNC_3 (struct sirf_usp*) ;
 struct sirf_usp* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1, int VAR_2,
    struct snd_soc_dai *VAR_3)
{
 struct sirf_usp *VAR_4 = FUNC_4(VAR_3);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  if (VAR_1->stream == VAR_0)
   FUNC_3(VAR_4);
  else
   FUNC_1(VAR_4);
  break;
 case 129:
 case 128:
 case 133:
  if (VAR_1->stream == VAR_0)
   FUNC_2(VAR_4);
  else
   FUNC_0(VAR_4);
  break;
 }

 return 0;
}
