
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int (* set_capture_format ) (struct snd_wss*,struct snd_pcm_hw_params*,unsigned char) ;} ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct snd_wss* FUNC_5 (struct snd_pcm_substream*) ;
 unsigned char FUNC_6 (struct snd_wss*,int ,int ) ;
 unsigned char FUNC_7 (int ) ;
 int FUNC_8 (struct snd_wss*,struct snd_pcm_hw_params*,unsigned char) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 struct snd_wss *VAR_2 = FUNC_5(VAR_0);
 unsigned char VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_4(VAR_0, FUNC_0(VAR_1))) < 0)
  return VAR_4;
 VAR_3 = FUNC_6(VAR_2, FUNC_2(VAR_1),
      FUNC_1(VAR_1)) |
      FUNC_7(FUNC_3(VAR_1));
 VAR_2->set_capture_format(VAR_2, VAR_1, VAR_3);
 return 0;
}
