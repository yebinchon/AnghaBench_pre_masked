
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct dw_i2s_dev {unsigned int (* tx_fn ) (struct dw_i2s_dev*,int ,unsigned int,int*) ;unsigned int (* rx_fn ) (struct dw_i2s_dev*,int ,unsigned int,int*) ;int rx_ptr; int tx_ptr; int rx_substream; int tx_substream; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 struct snd_pcm_substream* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_6 (struct snd_pcm_substream*) ;
 unsigned int FUNC_7 (struct dw_i2s_dev*,int ,unsigned int,int*) ;
 unsigned int FUNC_8 (struct dw_i2s_dev*,int ,unsigned int,int*) ;

__attribute__((used)) static void FUNC_9(struct dw_i2s_dev *VAR_0, bool VAR_1)
{
 struct snd_pcm_substream *VAR_2;
 bool VAR_3, VAR_4;

 FUNC_3();
 if (VAR_1)
  VAR_2 = FUNC_2(VAR_0->tx_substream);
 else
  VAR_2 = FUNC_2(VAR_0->rx_substream);
 VAR_3 = VAR_2 && FUNC_6(VAR_2);
 if (VAR_3) {
  unsigned int VAR_5;
  unsigned int VAR_6;

  if (VAR_1) {
   VAR_5 = FUNC_0(VAR_0->tx_ptr);
   VAR_6 = VAR_0->tx_fn(VAR_0, VAR_2->runtime, VAR_5,
     &VAR_4);
   FUNC_1(&VAR_0->tx_ptr, VAR_5, VAR_6);
  } else {
   VAR_5 = FUNC_0(VAR_0->rx_ptr);
   VAR_6 = VAR_0->rx_fn(VAR_0, VAR_2->runtime, VAR_5,
     &VAR_4);
   FUNC_1(&VAR_0->rx_ptr, VAR_5, VAR_6);
  }

  if (VAR_4)
   FUNC_5(VAR_2);
 }
 FUNC_4();
}
