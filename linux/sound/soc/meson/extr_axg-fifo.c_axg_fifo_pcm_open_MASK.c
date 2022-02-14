
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct device {int dummy; } ;
struct axg_fifo {int pclk; int arb; int map; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct axg_fifo*,int) ;
 int FUNC_3 (struct axg_fifo*,int ) ;
 struct axg_fifo* FUNC_4 (struct snd_pcm_substream*) ;
 struct device* FUNC_5 (struct snd_pcm_substream*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ,struct snd_pcm_substream*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_10)
{
 struct axg_fifo *VAR_11 = FUNC_4(VAR_10);
 struct device *VAR_12 = FUNC_5(VAR_10);
 int VAR_13;

 FUNC_13(VAR_10, &VAR_8);





 VAR_13 = FUNC_12(VAR_10->runtime, 0,
      VAR_5,
      VAR_0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_12(VAR_10->runtime, 0,
      VAR_6,
      VAR_0);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_10(VAR_11->irq, VAR_9, 0,
     FUNC_8(VAR_12), VAR_10);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_7(VAR_11->pclk);
 if (VAR_13)
  return VAR_13;


 FUNC_9(VAR_11->map, VAR_3,
      VAR_1,
      FUNC_1(VAR_7));


 FUNC_2(VAR_11, 0);


 FUNC_9(VAR_11->map, VAR_2,
      FUNC_0(VAR_4), 0);


 FUNC_3(VAR_11, VAR_4);


 VAR_13 = FUNC_11(VAR_11->arb);
 if (VAR_13)
  FUNC_6(VAR_11->pclk);

 return VAR_13;
}
