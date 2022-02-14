
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcpdm {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct omap_mcpdm*,int ) ;
 int FUNC_2 (struct omap_mcpdm*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_8, void *VAR_9)
{
 struct omap_mcpdm *VAR_10 = VAR_9;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_4);


 FUNC_2(VAR_10, VAR_4, VAR_11);

 if (VAR_11 & VAR_3)
  FUNC_0(VAR_10->dev, "DN (playback) FIFO Full\n");

 if (VAR_11 & VAR_2)
  FUNC_0(VAR_10->dev, "DN (playback) FIFO Empty\n");

 if (VAR_11 & VAR_1)
  FUNC_0(VAR_10->dev, "DN (playback) write request\n");

 if (VAR_11 & VAR_7)
  FUNC_0(VAR_10->dev, "UP (capture) FIFO Full\n");

 if (VAR_11 & VAR_6)
  FUNC_0(VAR_10->dev, "UP (capture) FIFO Empty\n");

 if (VAR_11 & VAR_5)
  FUNC_0(VAR_10->dev, "UP (capture) write request\n");

 return VAR_0;
}
