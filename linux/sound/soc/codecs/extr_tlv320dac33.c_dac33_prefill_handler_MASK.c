
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int fifo_mode; int lock; void* mode7_us_to_lthr; void* t_stamp1; int alarm_threshold; int burst_rate; void* t_stamp2; int nsample; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 () ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (unsigned int,unsigned int) ;

__attribute__((used)) static inline void FUNC_10(struct tlv320dac33_priv *VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_6->component;
 unsigned int VAR_8;
 unsigned long VAR_9;

 switch (VAR_6->fifo_mode) {
 case 129:
  FUNC_3(VAR_7, VAR_4,
   FUNC_0(VAR_6->nsample));


  FUNC_7(&VAR_6->lock, VAR_9);
  VAR_6->t_stamp2 = FUNC_6(FUNC_5());
  VAR_6->t_stamp1 = VAR_6->t_stamp2;
  FUNC_8(&VAR_6->lock, VAR_9);

  FUNC_3(VAR_7, VAR_5,
    FUNC_0(VAR_6->alarm_threshold));

  VAR_8 = FUNC_1(VAR_6->burst_rate,
         VAR_6->alarm_threshold) + 1000;
  FUNC_9(VAR_8, VAR_8 + 500);
  FUNC_2(VAR_7, VAR_0, VAR_1);
  break;
 case 128:

  FUNC_7(&VAR_6->lock, VAR_9);
  VAR_6->t_stamp1 = FUNC_6(FUNC_5());

  VAR_6->t_stamp1 -= VAR_6->mode7_us_to_lthr;
  FUNC_8(&VAR_6->lock, VAR_9);

  FUNC_3(VAR_7, VAR_5,
    FUNC_0(VAR_2));


  FUNC_2(VAR_7, VAR_0, VAR_3);
  break;
 default:
  FUNC_4(VAR_7->dev, "Unhandled FIFO mode: %d\n",
       VAR_6->fifo_mode);
  break;
 }
}
