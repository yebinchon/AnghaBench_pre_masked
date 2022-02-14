
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_saif {scalar_t__ base; int dev; int fifo_overrun; int fifo_underrun; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ,char*,unsigned int,...) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct mxs_saif *VAR_9 = VAR_8;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_9->base + VAR_6);
 if (!(VAR_10 & (VAR_1 |
   VAR_0)))
  return VAR_3;

 if (VAR_10 & VAR_1) {
  FUNC_2(VAR_9->dev, "underrun!!! %d\n", ++VAR_9->fifo_underrun);
  FUNC_1(VAR_1,
    VAR_9->base + VAR_6 + VAR_4);
 }

 if (VAR_10 & VAR_0) {
  FUNC_2(VAR_9->dev, "overrun!!! %d\n", ++VAR_9->fifo_overrun);
  FUNC_1(VAR_0,
    VAR_9->base + VAR_6 + VAR_4);
 }

 FUNC_2(VAR_9->dev, "SAIF_CTRL %x SAIF_STAT %x\n",
        FUNC_0(VAR_9->base + VAR_5),
        FUNC_0(VAR_9->base + VAR_6));

 return VAR_2;
}
