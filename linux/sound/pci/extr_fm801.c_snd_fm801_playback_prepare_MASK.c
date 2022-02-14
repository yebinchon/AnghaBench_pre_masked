
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; scalar_t__ dma_addr; int rate; int format; } ;
struct fm801 {int ply_size; int ply_count; int ply_ctrl; int reg_lock; scalar_t__ ply_buffer; scalar_t__ ply_pos; scalar_t__ ply_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct fm801*,int ,scalar_t__) ;
 int FUNC_1 (struct fm801*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct fm801* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_12)
{
 struct fm801 *VAR_13 = FUNC_6(VAR_12);
 struct snd_pcm_runtime *VAR_14 = VAR_12->runtime;

 VAR_13->ply_size = FUNC_4(VAR_12);
 VAR_13->ply_count = FUNC_5(VAR_12);
 FUNC_7(&VAR_13->reg_lock);
 VAR_13->ply_ctrl &= ~(VAR_6 | VAR_0 |
        VAR_7 | VAR_4 |
        VAR_3);
 if (FUNC_3(VAR_14->format) == 16)
  VAR_13->ply_ctrl |= VAR_0;
 if (VAR_14->channels > 1) {
  VAR_13->ply_ctrl |= VAR_7;
  if (VAR_14->channels == 4)
   VAR_13->ply_ctrl |= VAR_1;
  else if (VAR_14->channels == 6)
   VAR_13->ply_ctrl |= VAR_2;
 }
 VAR_13->ply_ctrl |= FUNC_2(VAR_14->rate) << VAR_5;
 VAR_13->ply_buf = 0;
 FUNC_1(VAR_13, VAR_11, VAR_13->ply_ctrl);
 FUNC_1(VAR_13, VAR_10, VAR_13->ply_count - 1);
 VAR_13->ply_buffer = VAR_14->dma_addr;
 VAR_13->ply_pos = 0;
 FUNC_0(VAR_13, VAR_8, VAR_13->ply_buffer);
 FUNC_0(VAR_13, VAR_9,
       VAR_13->ply_buffer + (VAR_13->ply_count % VAR_13->ply_size));
 FUNC_8(&VAR_13->reg_lock);
 return 0;
}
