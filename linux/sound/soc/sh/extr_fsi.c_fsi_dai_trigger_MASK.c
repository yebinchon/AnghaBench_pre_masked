
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct fsi_stream {int dummy; } ;
struct fsi_priv {int dummy; } ;




 struct fsi_priv* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct fsi_priv*,int ) ;
 int FUNC_2 (struct fsi_priv*,struct fsi_stream*,int ) ;
 struct fsi_stream* FUNC_3 (struct fsi_priv*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct fsi_priv*,struct fsi_stream*,struct snd_pcm_substream*) ;
 int FUNC_5 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_6 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_7 (struct fsi_priv*,struct fsi_stream*) ;
 int FUNC_8 (struct fsi_stream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_0, int VAR_1,
      struct snd_soc_dai *VAR_2)
{
 struct fsi_priv *VAR_3 = FUNC_0(VAR_0);
 struct fsi_stream *VAR_4 = FUNC_3(VAR_3, VAR_0);
 int VAR_5 = 0;

 switch (VAR_1) {
 case 129:
  FUNC_4(VAR_3, VAR_4, VAR_0);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_2->dev);
  if (!VAR_5)
   VAR_5 = FUNC_6(VAR_3, VAR_4);
  if (!VAR_5)
   VAR_5 = FUNC_8(VAR_4);
  break;
 case 128:
  if (!VAR_5)
   VAR_5 = FUNC_1(VAR_3, VAR_2->dev);
  FUNC_7(VAR_3, VAR_4);
  FUNC_5(VAR_3, VAR_4);
  break;
 }

 return VAR_5;
}
