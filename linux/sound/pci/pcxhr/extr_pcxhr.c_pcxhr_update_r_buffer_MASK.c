
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {TYPE_3__* card; int mgr; int chip_idx; } ;
struct snd_pcm_substream {scalar_t__ stream; int number; TYPE_2__* runtime; } ;
struct pcxhr_stream {TYPE_1__* pipe; struct snd_pcm_substream* substream; } ;
struct pcxhr_rmh {int* cmd; int cmd_len; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int dma_addr; int dma_bytes; } ;
struct TYPE_4__ {int first_audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char,int ,void*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pcxhr_rmh*,int ) ;
 int FUNC_3 (int ,struct pcxhr_rmh*) ;
 int FUNC_4 (struct pcxhr_rmh*,int,int ,int,int ) ;
 int FUNC_5 (int) ;
 struct snd_pcxhr* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct pcxhr_stream *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct pcxhr_rmh VAR_7;
 struct snd_pcm_substream *VAR_8 = VAR_3->substream;
 struct snd_pcxhr *VAR_9 = FUNC_6(VAR_8);

 VAR_5 = (VAR_8->stream == VAR_2);
 VAR_6 = VAR_5 ? 0 : VAR_8->number;

 FUNC_0(VAR_9->card->dev,
  "pcxhr_update_r_buffer(pcm%c%d) : addr(%p) bytes(%zx) subs(%d)\n",
  VAR_5 ? 'c' : 'p',
  VAR_9->chip_idx, (void *)(long)VAR_8->runtime->dma_addr,
  VAR_8->runtime->dma_bytes, VAR_8->number);

 FUNC_2(&VAR_7, VAR_0);
 FUNC_4(&VAR_7, VAR_5, VAR_3->pipe->first_audio,
      VAR_6, 0);


 FUNC_5(VAR_8->runtime->dma_bytes >= 0x200000);

 VAR_7.cmd[1] = VAR_8->runtime->dma_bytes * 8;

 VAR_7.cmd[2] = VAR_8->runtime->dma_addr >> 24;

 VAR_7.cmd[2] |= 1<<19;

 VAR_7.cmd[3] = VAR_8->runtime->dma_addr & VAR_1;
 VAR_7.cmd_len = 4;
 VAR_4 = FUNC_3(VAR_9->mgr, &VAR_7);
 if (VAR_4)
  FUNC_1(VAR_9->card->dev,
      "ERROR CMD_UPDATE_R_BUFFERS err=%x;\n", VAR_4);
 return VAR_4;
}
