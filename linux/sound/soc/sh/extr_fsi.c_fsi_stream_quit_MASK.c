
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct fsi_stream {int uerr_num; int oerr_num; scalar_t__ bus_option; scalar_t__ sample_width; scalar_t__ period_pos; scalar_t__ period_samples; scalar_t__ buff_sample_pos; scalar_t__ buff_sample_capa; int * substream; } ;
struct fsi_priv {int dummy; } ;
struct fsi_master {int lock; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct snd_soc_dai* FUNC_1 (int *) ;
 struct fsi_master* FUNC_2 (struct fsi_priv*) ;
 int FUNC_3 (struct fsi_stream*,int ,struct fsi_priv*,struct fsi_stream*) ;
 int VAR_0 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct fsi_priv *VAR_1, struct fsi_stream *VAR_2)
{
 struct snd_soc_dai *VAR_3 = FUNC_1(VAR_2->substream);
 struct fsi_master *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5;

 FUNC_4(&VAR_4->lock, VAR_5);

 if (VAR_2->oerr_num > 0)
  FUNC_0(VAR_3->dev, "over_run = %d\n", VAR_2->oerr_num);

 if (VAR_2->uerr_num > 0)
  FUNC_0(VAR_3->dev, "under_run = %d\n", VAR_2->uerr_num);

 FUNC_3(VAR_2, VAR_0, VAR_1, VAR_2);
 VAR_2->substream = ((void*)0);
 VAR_2->buff_sample_capa = 0;
 VAR_2->buff_sample_pos = 0;
 VAR_2->period_samples = 0;
 VAR_2->period_pos = 0;
 VAR_2->sample_width = 0;
 VAR_2->bus_option = 0;
 VAR_2->oerr_num = 0;
 VAR_2->uerr_num = 0;
 FUNC_5(&VAR_4->lock, VAR_5);
}
