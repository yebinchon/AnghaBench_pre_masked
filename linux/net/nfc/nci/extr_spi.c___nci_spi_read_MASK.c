
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
struct spi_transfer {unsigned char* tx_buf; int len; int cs_change; unsigned char* rx_buf; int speed_hz; int delay_usecs; } ;
struct spi_message {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nci_spi {unsigned char acknowledge_mode; int spi; int xfer_speed_hz; int xfer_udelay; int ndev; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 struct sk_buff* FUNC_2 (int ,unsigned short,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 unsigned char* FUNC_4 (struct sk_buff*,unsigned short) ;
 int FUNC_5 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_6 (struct spi_message*) ;
 int FUNC_7 (int ,struct spi_message*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct nci_spi *VAR_5)
{
 struct sk_buff *VAR_6;
 struct spi_message VAR_7;
 unsigned char VAR_8[2], VAR_9[2];
 struct spi_transfer VAR_10, VAR_11;
 unsigned short VAR_12 = 0;
 int VAR_13;

 FUNC_6(&VAR_7);

 FUNC_1(&VAR_10, 0, sizeof(struct spi_transfer));
 VAR_8[0] = VAR_3;
 VAR_8[1] = VAR_5->acknowledge_mode;
 VAR_10.tx_buf = VAR_8;
 VAR_10.len = 2;
 VAR_10.cs_change = 0;
 VAR_10.speed_hz = VAR_5->xfer_speed_hz;
 FUNC_5(&VAR_10, &VAR_7);

 FUNC_1(&VAR_11, 0, sizeof(struct spi_transfer));
 VAR_11.rx_buf = VAR_9;
 VAR_11.len = 2;
 VAR_11.cs_change = 1;
 VAR_11.speed_hz = VAR_5->xfer_speed_hz;
 FUNC_5(&VAR_11, &VAR_7);

 VAR_13 = FUNC_7(VAR_5->spi, &VAR_7);
 if (VAR_13)
  return ((void*)0);

 if (VAR_5->acknowledge_mode == VAR_1)
  VAR_12 = ((VAR_9[0] & VAR_4) << 8) +
    VAR_9[1] + VAR_2;
 else
  VAR_12 = (VAR_9[0] << 8) | VAR_9[1];

 VAR_6 = FUNC_2(VAR_5->ndev, VAR_12, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 FUNC_6(&VAR_7);

 FUNC_1(&VAR_11, 0, sizeof(struct spi_transfer));
 VAR_11.rx_buf = FUNC_4(VAR_6, VAR_12);
 VAR_11.len = VAR_12;
 VAR_11.cs_change = 0;
 VAR_11.delay_usecs = VAR_5->xfer_udelay;
 VAR_11.speed_hz = VAR_5->xfer_speed_hz;
 FUNC_5(&VAR_11, &VAR_7);

 VAR_13 = FUNC_7(VAR_5->spi, &VAR_7);
 if (VAR_13)
  goto receive_error;

 if (VAR_5->acknowledge_mode == VAR_1) {
  *(u8 *)FUNC_3(VAR_6, 1) = VAR_9[1];
  *(u8 *)FUNC_3(VAR_6, 1) = VAR_9[0];
 }

 return VAR_6;

receive_error:
 FUNC_0(VAR_6);

 return ((void*)0);
}
