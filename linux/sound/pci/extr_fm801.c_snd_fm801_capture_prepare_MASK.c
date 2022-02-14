
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; scalar_t__ dma_addr; int rate; int format; } ;
struct fm801 {int cap_size; int cap_count; int cap_ctrl; int reg_lock; scalar_t__ cap_buffer; scalar_t__ cap_pos; scalar_t__ cap_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct fm801*,int ,scalar_t__) ;
 int FUNC_1 (struct fm801*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct fm801* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_9)
{
 struct fm801 *VAR_10 = FUNC_6(VAR_9);
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;

 VAR_10->cap_size = FUNC_4(VAR_9);
 VAR_10->cap_count = FUNC_5(VAR_9);
 FUNC_7(&VAR_10->reg_lock);
 VAR_10->cap_ctrl &= ~(VAR_7 | VAR_4 |
        VAR_8 | VAR_5);
 if (FUNC_3(VAR_11->format) == 16)
  VAR_10->cap_ctrl |= VAR_4;
 if (VAR_11->channels > 1)
  VAR_10->cap_ctrl |= VAR_8;
 VAR_10->cap_ctrl |= FUNC_2(VAR_11->rate) << VAR_6;
 VAR_10->cap_buf = 0;
 FUNC_1(VAR_10, VAR_3, VAR_10->cap_ctrl);
 FUNC_1(VAR_10, VAR_2, VAR_10->cap_count - 1);
 VAR_10->cap_buffer = VAR_11->dma_addr;
 VAR_10->cap_pos = 0;
 FUNC_0(VAR_10, VAR_0, VAR_10->cap_buffer);
 FUNC_0(VAR_10, VAR_1,
       VAR_10->cap_buffer + (VAR_10->cap_count % VAR_10->cap_size));
 FUNC_8(&VAR_10->reg_lock);
 return 0;
}
