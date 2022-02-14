
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct oxygen {unsigned int interrupt_mask; unsigned int pcm_running; int ac97_waitqueue; TYPE_1__* midi; int gpio_work; int reg_lock; int spdif_input_bits_work; scalar_t__* streams; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int FUNC_0 (struct oxygen*,int ) ;
 unsigned int FUNC_1 (struct oxygen*,int ) ;
 int FUNC_2 (struct oxygen*) ;
 int FUNC_3 (struct oxygen*,int ,unsigned int) ;
 int FUNC_4 (struct oxygen*,int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_19, void *VAR_20)
{
 struct oxygen *VAR_21 = VAR_20;
 unsigned int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_22 = FUNC_0(VAR_21, VAR_9);
 if (!VAR_22)
  return VAR_1;

 FUNC_8(&VAR_21->reg_lock);

 VAR_23 = VAR_22 & (VAR_2 |
     VAR_4 |
     VAR_5 |
     VAR_7 |
     VAR_6 |
     VAR_3 |
     VAR_13 |
     VAR_11 |
     VAR_10);
 if (VAR_23) {
  if (VAR_23 & VAR_13)
   VAR_21->interrupt_mask &= ~VAR_13;
  FUNC_3(VAR_21, VAR_8,
          VAR_21->interrupt_mask & ~VAR_23);
  FUNC_3(VAR_21, VAR_8,
          VAR_21->interrupt_mask);
 }

 VAR_24 = VAR_22 & VAR_21->pcm_running;

 FUNC_9(&VAR_21->reg_lock);

 for (VAR_25 = 0; VAR_25 < VAR_18; ++VAR_25)
  if ((VAR_24 & (1 << VAR_25)) && VAR_21->streams[VAR_25])
   FUNC_7(VAR_21->streams[VAR_25]);

 if (VAR_22 & VAR_13) {
  FUNC_8(&VAR_21->reg_lock);
  VAR_25 = FUNC_1(VAR_21, VAR_14);
  if (VAR_25 & (VAR_17 | VAR_15 |
    VAR_16)) {

   FUNC_4(VAR_21, VAR_14, VAR_25);
   FUNC_5(&VAR_21->spdif_input_bits_work);
  }
  FUNC_9(&VAR_21->reg_lock);
 }

 if (VAR_22 & VAR_11)
  FUNC_5(&VAR_21->gpio_work);

 if (VAR_22 & VAR_12) {
  if (VAR_21->midi)
   FUNC_6(0, VAR_21->midi->private_data);
  else
   FUNC_2(VAR_21);
 }

 if (VAR_22 & VAR_10)
  FUNC_10(&VAR_21->ac97_waitqueue);

 return VAR_0;
}
