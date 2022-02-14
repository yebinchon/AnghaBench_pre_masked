
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct camelot_pcm {int txid; struct snd_pcm_substream* tx_ss; struct snd_pcm_substream* rx_ss; } ;
struct TYPE_2__ {size_t id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct camelot_pcm* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,struct camelot_pcm*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (struct snd_pcm_substream*,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct snd_soc_pcm_runtime *VAR_7 = VAR_6->private_data;
 struct camelot_pcm *VAR_8 = &VAR_2[VAR_7->cpu_dai->id];
 int VAR_9 = VAR_6->stream == VAR_1 ? 0:1;
 int VAR_10, VAR_11;

 FUNC_2(VAR_6, &VAR_3);


 VAR_11 = (VAR_9) ? VAR_8->txid + 2 : VAR_8->txid;
 if (VAR_9) {
  VAR_8->rx_ss = VAR_6;
  VAR_10 = FUNC_0(VAR_11, VAR_4, VAR_8);
  if (FUNC_3(VAR_10)) {
   FUNC_1("audio unit %d irqs already taken!\n",
        VAR_7->cpu_dai->id);
   return -VAR_0;
  }
  (void)FUNC_0(VAR_11 + 1,VAR_4, VAR_8);
 } else {
  VAR_8->tx_ss = VAR_6;
  VAR_10 = FUNC_0(VAR_11, VAR_5, VAR_8);
  if (FUNC_3(VAR_10)) {
   FUNC_1("audio unit %d irqs already taken!\n",
        VAR_7->cpu_dai->id);
   return -VAR_0;
  }
  (void)FUNC_0(VAR_11 + 1, VAR_5, VAR_8);
 }
 return 0;
}
