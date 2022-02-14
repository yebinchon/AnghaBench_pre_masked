
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct nci_spi {unsigned int xfer_udelay; int req_completion; struct nci_dev* ndev; struct spi_device* spi; scalar_t__ xfer_speed_hz; int acknowledge_mode; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 struct nci_spi* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;

struct nci_spi *FUNC_2(struct spi_device *VAR_1,
         u8 VAR_2, unsigned int VAR_3,
         struct nci_dev *VAR_4)
{
 struct nci_spi *VAR_5;

 VAR_5 = FUNC_0(&VAR_1->dev, sizeof(struct nci_spi), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->acknowledge_mode = VAR_2;
 VAR_5->xfer_udelay = VAR_3;

 VAR_5->xfer_speed_hz = 0;
 VAR_5->spi = VAR_1;
 VAR_5->ndev = VAR_4;
 FUNC_1(&VAR_5->req_completion);

 return VAR_5;
}
