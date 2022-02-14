
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_bt87x {unsigned int interrupt_mask; int reg_control; int current_line; int lines; int substream; TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct snd_bt87x*,unsigned int) ;
 unsigned int FUNC_3 (struct snd_bt87x*,int ) ;
 int FUNC_4 (struct snd_bt87x*,int ,unsigned int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_13, void *VAR_14)
{
 struct snd_bt87x *VAR_15 = VAR_14;
 unsigned int VAR_16, VAR_17;

 VAR_16 = FUNC_3(VAR_15, VAR_12);
 VAR_17 = VAR_16 & VAR_15->interrupt_mask;
 if (!VAR_17)
  return VAR_11;
 FUNC_4(VAR_15, VAR_12, VAR_17);

 if (VAR_17 & VAR_1) {
  if (VAR_17 & (VAR_2 | VAR_3))
   FUNC_1(VAR_15->card->dev,
     "FIFO overrun, status %#08x\n", VAR_16);
  if (VAR_17 & VAR_4)
   FUNC_0(VAR_15->card->dev,
    "internal RISC error, status %#08x\n", VAR_16);
  if (VAR_17 & (VAR_6 | VAR_7 | VAR_5))
   FUNC_2(VAR_15, VAR_17);
 }
 if ((VAR_17 & VAR_8) && (VAR_15->reg_control & VAR_0)) {
  int VAR_18, VAR_19;


  VAR_15->current_line = (VAR_15->current_line + 1) % VAR_15->lines;

  VAR_18 = VAR_15->current_line * 16 / VAR_15->lines;
  VAR_19 = VAR_16 >> VAR_9;
  if (VAR_18 != VAR_19)
   VAR_15->current_line = (VAR_19 * VAR_15->lines + 15) / 16;

  FUNC_5(VAR_15->substream);
 }
 return VAR_10;
}
