
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int buffer_size; } ;
struct fsi_stream {int oerr_num; int uerr_num; scalar_t__ bus_option; int sample_width; scalar_t__ period_pos; void* period_samples; scalar_t__ buff_sample_pos; void* buff_sample_capa; struct snd_pcm_substream* substream; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int lock; } ;


 void* FUNC_0 (struct fsi_priv*,int ) ;
 struct fsi_master* FUNC_1 (struct fsi_priv*) ;
 int FUNC_2 (struct fsi_stream*,int ,struct fsi_priv*,struct fsi_stream*) ;
 int VAR_0 ;
 int FUNC_3 (struct snd_pcm_runtime*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct fsi_priv *VAR_1,
       struct fsi_stream *VAR_2,
       struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 struct fsi_master *VAR_5 = FUNC_1(VAR_1);
 unsigned long VAR_6;

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_2->substream = VAR_3;
 VAR_2->buff_sample_capa = FUNC_0(VAR_1, VAR_4->buffer_size);
 VAR_2->buff_sample_pos = 0;
 VAR_2->period_samples = FUNC_0(VAR_1, VAR_4->period_size);
 VAR_2->period_pos = 0;
 VAR_2->sample_width = FUNC_3(VAR_4, 1);
 VAR_2->bus_option = 0;
 VAR_2->oerr_num = -1;
 VAR_2->uerr_num = -1;
 FUNC_2(VAR_2, VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_5->lock, VAR_6);
}
