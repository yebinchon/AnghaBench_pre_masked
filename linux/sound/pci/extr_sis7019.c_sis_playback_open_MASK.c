
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct voice {struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; struct voice* private_data; } ;
struct sis7019 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct voice* FUNC_0 (struct sis7019*) ;
 int VAR_3 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct sis7019* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct sis7019 *VAR_5 = FUNC_3(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct voice *VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->substream = VAR_4;
 VAR_6->private_data = VAR_7;
 VAR_6->hw = VAR_3;
 FUNC_1(VAR_6, VAR_2,
      9, 0xfff9);
 FUNC_1(VAR_6, VAR_1,
      9, 0xfff9);
 FUNC_2(VAR_4);
 return 0;
}
