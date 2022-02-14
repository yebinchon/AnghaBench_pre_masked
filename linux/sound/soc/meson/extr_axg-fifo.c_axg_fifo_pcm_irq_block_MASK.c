
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct axg_fifo {int map; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct axg_fifo*,unsigned int) ;
 struct axg_fifo* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int ,char*,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct snd_pcm_substream *VAR_5 = VAR_4;
 struct axg_fifo *VAR_6 = FUNC_3(VAR_5);
 unsigned int VAR_7;

 FUNC_6(VAR_6->map, VAR_2, &VAR_7);

 VAR_7 = FUNC_1(VAR_7) & VAR_1;
 if (VAR_7 & VAR_0)
  FUNC_7(VAR_5);
 else
  FUNC_5(FUNC_4(VAR_5), "unexpected irq - STS 0x%02x\n",
   VAR_7);


 FUNC_2(VAR_6, VAR_7);

 return FUNC_0(VAR_7);
}
