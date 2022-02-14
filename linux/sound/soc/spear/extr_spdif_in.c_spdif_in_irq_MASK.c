
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_in_dev {scalar_t__ io_base; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct spdif_in_dev *VAR_9 = (struct spdif_in_dev *)VAR_8;

 u32 VAR_10 = FUNC_1(VAR_9->io_base + VAR_2);

 if (!VAR_10)
  return VAR_1;

 if (VAR_10 & VAR_5)
  FUNC_0(VAR_9->dev, "spdif in: fifo write error");
 if (VAR_10 & VAR_3)
  FUNC_0(VAR_9->dev, "spdif in: empty fifo read error");
 if (VAR_10 & VAR_4)
  FUNC_0(VAR_9->dev, "spdif in: fifo full error");
 if (VAR_10 & VAR_6)
  FUNC_0(VAR_9->dev, "spdif in: out of range error");

 FUNC_2(0, VAR_9->io_base + VAR_2);

 return VAR_0;
}
