
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct omap_mcbsp {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int FUNC_1 (struct omap_mcbsp*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_15, void *VAR_16)
{
 struct omap_mcbsp *VAR_17 = VAR_16;
 u16 VAR_18;

 VAR_18 = FUNC_0(VAR_17, VAR_0);
 FUNC_2(VAR_17->dev, "IRQ callback : 0x%x\n", VAR_18);

 if (VAR_18 & VAR_6)
  FUNC_3(VAR_17->dev, "RX Frame Sync Error!\n");
 if (VAR_18 & VAR_3)
  FUNC_2(VAR_17->dev, "RX Frame Sync\n");
 if (VAR_18 & VAR_2)
  FUNC_2(VAR_17->dev, "RX End Of Frame\n");
 if (VAR_18 & VAR_5)
  FUNC_2(VAR_17->dev, "RX Buffer Threshold Reached\n");
 if (VAR_18 & VAR_7)
  FUNC_3(VAR_17->dev, "RX Buffer Underflow!\n");
 if (VAR_18 & VAR_4)
  FUNC_3(VAR_17->dev, "RX Buffer Overflow!\n");

 if (VAR_18 & VAR_13)
  FUNC_3(VAR_17->dev, "TX Frame Sync Error!\n");
 if (VAR_18 & VAR_10)
  FUNC_2(VAR_17->dev, "TX Frame Sync\n");
 if (VAR_18 & VAR_9)
  FUNC_2(VAR_17->dev, "TX End Of Frame\n");
 if (VAR_18 & VAR_12)
  FUNC_2(VAR_17->dev, "TX Buffer threshold Reached\n");
 if (VAR_18 & VAR_14)
  FUNC_3(VAR_17->dev, "TX Buffer Underflow!\n");
 if (VAR_18 & VAR_11)
  FUNC_3(VAR_17->dev, "TX Buffer Overflow!\n");
 if (VAR_18 & VAR_8)
  FUNC_2(VAR_17->dev, "TX Buffer empty at end of frame\n");

 FUNC_1(VAR_17, VAR_0, VAR_18);

 return VAR_1;
}
