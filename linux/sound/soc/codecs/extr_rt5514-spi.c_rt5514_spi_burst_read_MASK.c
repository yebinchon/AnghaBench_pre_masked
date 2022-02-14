
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x ;
typedef unsigned int u8 ;
struct spi_transfer {int len; unsigned int* tx_buf; unsigned int* rx_buf; } ;
struct spi_message {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct spi_transfer*,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_2 (struct spi_message*) ;
 int FUNC_3 (int ,struct spi_message*) ;

int FUNC_4(unsigned int VAR_3, u8 *VAR_4, size_t VAR_5)
{
 u8 VAR_6 = VAR_1;
 int VAR_7;
 u8 VAR_8[8];
 unsigned int VAR_9, VAR_10, VAR_11 = 0;

 struct spi_message VAR_12;
 struct spi_transfer VAR_13[3];

 while (VAR_11 < VAR_5) {
  if (VAR_11 + VAR_0 <= VAR_5)
   VAR_10 = VAR_0;
  else
   VAR_10 = VAR_5 % VAR_0;

  VAR_8[0] = VAR_6;
  VAR_8[1] = ((VAR_3 + VAR_11) & 0xff000000) >> 24;
  VAR_8[2] = ((VAR_3 + VAR_11) & 0x00ff0000) >> 16;
  VAR_8[3] = ((VAR_3 + VAR_11) & 0x0000ff00) >> 8;
  VAR_8[4] = ((VAR_3 + VAR_11) & 0x000000ff) >> 0;

  FUNC_2(&VAR_12);
  FUNC_0(VAR_13, 0, sizeof(VAR_13));

  VAR_13[0].len = 5;
  VAR_13[0].tx_buf = VAR_8;
  FUNC_1(&VAR_13[0], &VAR_12);

  VAR_13[1].len = 4;
  VAR_13[1].tx_buf = VAR_8;
  FUNC_1(&VAR_13[1], &VAR_12);

  VAR_13[2].len = VAR_10;
  VAR_13[2].rx_buf = VAR_4 + VAR_11;
  FUNC_1(&VAR_13[2], &VAR_12);

  VAR_7 = FUNC_3(VAR_2, &VAR_12);

  if (VAR_7)
   return 0;

  VAR_11 += VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9 += 8) {
  VAR_8[0] = VAR_4[VAR_9 + 0];
  VAR_8[1] = VAR_4[VAR_9 + 1];
  VAR_8[2] = VAR_4[VAR_9 + 2];
  VAR_8[3] = VAR_4[VAR_9 + 3];
  VAR_8[4] = VAR_4[VAR_9 + 4];
  VAR_8[5] = VAR_4[VAR_9 + 5];
  VAR_8[6] = VAR_4[VAR_9 + 6];
  VAR_8[7] = VAR_4[VAR_9 + 7];

  VAR_4[VAR_9 + 0] = VAR_8[7];
  VAR_4[VAR_9 + 1] = VAR_8[6];
  VAR_4[VAR_9 + 2] = VAR_8[5];
  VAR_4[VAR_9 + 3] = VAR_8[4];
  VAR_4[VAR_9 + 4] = VAR_8[3];
  VAR_4[VAR_9 + 5] = VAR_8[2];
  VAR_4[VAR_9 + 6] = VAR_8[1];
  VAR_4[VAR_9 + 7] = VAR_8[0];
 }

 return 1;
}
