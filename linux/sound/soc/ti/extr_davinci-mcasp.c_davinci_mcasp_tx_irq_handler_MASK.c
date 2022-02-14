
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct davinci_mcasp {int* irq_request; int dev; struct snd_pcm_substream** substreams; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct davinci_mcasp*,int ) ;
 int FUNC_3 (struct davinci_mcasp*,int ,int) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct davinci_mcasp *VAR_6 = (struct davinci_mcasp *)VAR_5;
 struct snd_pcm_substream *VAR_7;
 u32 VAR_8 = VAR_6->irq_request[VAR_1];
 u32 VAR_9 = 0;
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_6, VAR_0);
 if (VAR_10 & VAR_3 & VAR_8) {
  FUNC_1(VAR_6->dev, "Transmit buffer underflow\n");
  VAR_9 |= VAR_3;

  VAR_7 = VAR_6->substreams[VAR_1];
  if (VAR_7)
   FUNC_4(VAR_7);
 }

 if (!VAR_9)
  FUNC_1(VAR_6->dev, "unhandled tx event. txstat: 0x%08x\n",
    VAR_10);

 if (VAR_10 & VAR_2)
  VAR_9 |= VAR_2;


 FUNC_3(VAR_6, VAR_0, VAR_9);

 return FUNC_0(VAR_9);
}
