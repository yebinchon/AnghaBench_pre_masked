
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {scalar_t__ fifo_mode; int work; int lock; int t_stamp1; } ;
struct snd_soc_component {int dummy; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct tlv320dac33_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3;
 struct tlv320dac33_priv *VAR_5 = FUNC_3(VAR_4);
 unsigned long VAR_6;

 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_5->t_stamp1 = FUNC_1(FUNC_0());
 FUNC_5(&VAR_5->lock, VAR_6);


 if (VAR_5->fifo_mode != VAR_0)
  FUNC_2(&VAR_5->work);

 return VAR_1;
}
