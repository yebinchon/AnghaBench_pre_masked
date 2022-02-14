
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2, int VAR_3,
          struct snd_soc_dai *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  if (!FUNC_0()) {
   VAR_5 = FUNC_1();
   if (VAR_5)
    goto exit_err;
  }

  if (VAR_2->stream == VAR_1)
   FUNC_2(1);
  else
   FUNC_3(1);

  break;
 case 129:
 case 128:
 case 133:
  if (VAR_2->stream == VAR_1)
   FUNC_2(0);
  else
   FUNC_3(0);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

exit_err:
 return VAR_5;
}
