
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int fifo_mode; int nsample; int lock; int t_stamp2; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_7(struct tlv320dac33_priv *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 unsigned long VAR_3;

 switch (VAR_1->fifo_mode) {
 case 129:

  FUNC_5(&VAR_1->lock, VAR_3);
  VAR_1->t_stamp2 = FUNC_4(FUNC_3());
  FUNC_6(&VAR_1->lock, VAR_3);

  FUNC_1(VAR_2, VAR_0,
    FUNC_0(VAR_1->nsample));
  break;
 case 128:

  break;
 default:
  FUNC_2(VAR_2->dev, "Unhandled FIFO mode: %d\n",
       VAR_1->fifo_mode);
  break;
 }
}
