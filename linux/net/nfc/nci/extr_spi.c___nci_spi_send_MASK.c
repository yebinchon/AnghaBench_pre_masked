
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_transfer {int cs_change; int speed_hz; int delay_usecs; scalar_t__ len; struct spi_transfer* tx_buf; } ;
struct spi_message {int dummy; } ;
struct sk_buff {scalar_t__ len; struct spi_transfer* data; } ;
struct nci_spi {int spi; int xfer_speed_hz; int xfer_udelay; } ;


 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

__attribute__((used)) static int FUNC_4(struct nci_spi *VAR_0, struct sk_buff *VAR_1,
     int VAR_2)
{
 struct spi_message VAR_3;
 struct spi_transfer VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct spi_transfer));

 if (VAR_1) {
  VAR_4.tx_buf = VAR_1->data;
  VAR_4.len = VAR_1->len;
 } else {

  VAR_4.tx_buf = &VAR_4;
  VAR_4.len = 0;
 }
 VAR_4.cs_change = VAR_2;
 VAR_4.delay_usecs = VAR_0->xfer_udelay;
 VAR_4.speed_hz = VAR_0->xfer_speed_hz;

 FUNC_2(&VAR_3);
 FUNC_1(&VAR_4, &VAR_3);

 return FUNC_3(VAR_0->spi, &VAR_3);
}
