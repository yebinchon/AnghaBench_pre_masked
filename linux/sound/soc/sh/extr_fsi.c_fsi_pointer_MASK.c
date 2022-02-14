
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct fsi_stream {int buff_sample_pos; } ;
struct fsi_priv {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 struct fsi_priv* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct fsi_priv*,int ) ;
 struct fsi_stream* FUNC_2 (struct fsi_priv*,struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct fsi_priv *VAR_1 = FUNC_0(VAR_0);
 struct fsi_stream *VAR_2 = FUNC_2(VAR_1, VAR_0);

 return FUNC_1(VAR_1, VAR_2->buff_sample_pos);
}
