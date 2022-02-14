
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {unsigned char in_interrupt; scalar_t__ substream; scalar_t__ fragsize; scalar_t__ hwptr_done; scalar_t__ running; } ;
struct via82xx {unsigned int intr_mask; unsigned int num_devs; int reg_lock; struct viadev* devs; TYPE_1__* rmidi; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct viadev*,int ) ;
 int FUNC_1 (struct via82xx*,int ) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_7, void *VAR_8)
{
 struct via82xx *VAR_9 = VAR_8;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_3(FUNC_1(VAR_9, VAR_3));
 if (! (VAR_10 & VAR_9->intr_mask)) {
  if (VAR_9->rmidi)

   return FUNC_5(VAR_7, VAR_9->rmidi->private_data);
  return VAR_1;
 }


 FUNC_7(&VAR_9->reg_lock);
 for (VAR_11 = 0; VAR_11 < VAR_9->num_devs; VAR_11++) {
  struct viadev *VAR_12 = &VAR_9->devs[VAR_11];
  unsigned char VAR_13 = FUNC_2(FUNC_0(VAR_12, VAR_2));
  if (! (VAR_13 & (VAR_4|VAR_5|VAR_6)))
   continue;
  if (VAR_12->substream && VAR_12->running) {





   if (VAR_13 & VAR_4)
    VAR_12->hwptr_done = 0;
   else
    VAR_12->hwptr_done += VAR_12->fragsize;
   VAR_12->in_interrupt = VAR_13;
   FUNC_8(&VAR_9->reg_lock);
   FUNC_6(VAR_12->substream);
   FUNC_7(&VAR_9->reg_lock);
   VAR_12->in_interrupt = 0;
  }
  FUNC_4(VAR_13, FUNC_0(VAR_12, VAR_2));
 }
 FUNC_8(&VAR_9->reg_lock);
 return VAR_0;
}
