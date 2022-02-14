
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int t ;
struct vsc7385 {int lock; int spi; } ;
struct spi_transfer {int len; scalar_t__* rx_buf; scalar_t__* tx_buf; } ;
struct spi_message {int dummy; } ;
typedef int cmd ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_transfer**,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_4 (struct spi_message*) ;
 int FUNC_5 (int ,struct spi_message*) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct vsc7385 *VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5,
   u32 *VAR_6)
{
 u8 VAR_7[4];
 u8 VAR_8[4];
 struct spi_transfer VAR_9[2];
 struct spi_message VAR_10;
 int VAR_11;

 if (!FUNC_6(VAR_3, VAR_4))
  return -VAR_0;

 FUNC_4(&VAR_10);

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));

 VAR_9[0].tx_buf = VAR_7;
 VAR_9[0].len = sizeof(VAR_7);
 FUNC_3(&VAR_9[0], &VAR_10);

 VAR_9[1].rx_buf = VAR_8;
 VAR_9[1].len = sizeof(VAR_8);
 FUNC_3(&VAR_9[1], &VAR_10);

 VAR_7[0] = FUNC_7(VAR_1, VAR_3, VAR_4);
 VAR_7[1] = VAR_5;
 VAR_7[2] = 0;
 VAR_7[3] = 0;

 FUNC_1(&VAR_2->lock);
 VAR_11 = FUNC_5(VAR_2->spi, &VAR_10);
 FUNC_2(&VAR_2->lock);

 if (VAR_11)
  return VAR_11;

 *VAR_6 = (((u32) VAR_8[0]) << 24) | (((u32) VAR_8[1]) << 16) |
   (((u32) VAR_8[2]) << 8) | ((u32) VAR_8[3]);

 return 0;
}
