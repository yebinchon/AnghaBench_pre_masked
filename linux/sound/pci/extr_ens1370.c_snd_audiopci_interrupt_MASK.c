
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ensoniq {unsigned int sctrl; scalar_t__ playback1_substream; scalar_t__ capture_substream; scalar_t__ playback2_substream; int reg_lock; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct ensoniq*,int ) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (struct ensoniq*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct ensoniq *VAR_14 = VAR_13;
 unsigned int VAR_15, VAR_16;

 if (VAR_14 == ((void*)0))
  return VAR_9;

 VAR_15 = FUNC_1(FUNC_0(VAR_14, VAR_11));
 if (!(VAR_15 & VAR_3))
  return VAR_9;

 FUNC_5(&VAR_14->reg_lock);
 VAR_16 = VAR_14->sctrl;
 if (VAR_15 & VAR_1)
  VAR_16 &= ~VAR_4;
 if (VAR_15 & VAR_2)
  VAR_16 &= ~VAR_5;
 if (VAR_15 & VAR_0)
  VAR_16 &= ~VAR_6;
 FUNC_2(VAR_16, FUNC_0(VAR_14, VAR_10));
 FUNC_2(VAR_14->sctrl, FUNC_0(VAR_14, VAR_10));
 FUNC_6(&VAR_14->reg_lock);

 if (VAR_15 & VAR_7)
  FUNC_3(VAR_14);
 if ((VAR_15 & VAR_2) && VAR_14->playback2_substream)
  FUNC_4(VAR_14->playback2_substream);
 if ((VAR_15 & VAR_0) && VAR_14->capture_substream)
  FUNC_4(VAR_14->capture_substream);
 if ((VAR_15 & VAR_1) && VAR_14->playback1_substream)
  FUNC_4(VAR_14->playback1_substream);
 return VAR_8;
}
