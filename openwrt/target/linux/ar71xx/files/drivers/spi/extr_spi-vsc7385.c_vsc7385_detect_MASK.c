
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vsc7385 {TYPE_1__* pdata; struct spi_device* spi; } ;
struct spi_device {int dev; } ;
struct TYPE_2__ {int (* reset ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct vsc7385*,int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct vsc7385 *VAR_8)
{
 struct spi_device *VAR_9 = VAR_8->spi;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_8, VAR_1, 0,
    VAR_7, &VAR_10);
 if (VAR_13) {
  FUNC_1(&VAR_9->dev, "unable to read mailbox, err=%d\n", VAR_13);
  return VAR_13;
 }

 if (VAR_10 == 0xffffffff) {
  FUNC_0(&VAR_9->dev, "assert chip reset\n");
  if (VAR_8->pdata->reset)
   VAR_8->pdata->reset();

 }

 VAR_13 = FUNC_4(VAR_8, VAR_1, 0,
    VAR_2, &VAR_10);
 if (VAR_13) {
  FUNC_1(&VAR_9->dev, "unable to read chip id, err=%d\n", VAR_13);
  return VAR_13;
 }

 VAR_11 = (VAR_10 >> VAR_4) & VAR_3;
 switch (VAR_11) {
 case 129:
 case 128:
  break;
 default:
  FUNC_1(&VAR_9->dev, "unsupported chip, id=%04x\n", VAR_11);
  return -VAR_0;
 }

 VAR_12 = (VAR_10 >> VAR_6) &
       VAR_5;
 FUNC_2(&VAR_9->dev, "VSC%04X (rev. %d) switch found\n", VAR_11, VAR_12);

 return 0;
}
