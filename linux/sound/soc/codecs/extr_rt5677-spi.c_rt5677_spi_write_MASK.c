
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int t ;
struct spi_transfer {int* tx_buf; int len; int speed_hz; } ;
struct spi_message {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,size_t) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (struct spi_transfer*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int*,int,int const*,size_t) ;
 int FUNC_5 (int,int,size_t,int*) ;
 int FUNC_6 (struct spi_message*,struct spi_transfer*,int) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_1__*,struct spi_message*) ;

int FUNC_8(u32 VAR_7, const void *VAR_8, size_t VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 0;
 struct spi_transfer VAR_12;
 struct spi_message VAR_13;

 u8 VAR_14[VAR_4 + VAR_2 + 1];
 u8 *VAR_15 = VAR_14 + VAR_4;
 u8 VAR_16;
 const u8 *VAR_17 = VAR_8;

 if (!VAR_5)
  return -VAR_1;

 if (VAR_7 & 3) {
  FUNC_0(&VAR_5->dev, "Bad write align 0x%x(%zu)\n", VAR_7, VAR_9);
  return -VAR_0;
 }

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.tx_buf = VAR_14;
 VAR_12.speed_hz = VAR_3;
 FUNC_6(&VAR_13, &VAR_12, 1);

 for (VAR_10 = 0; VAR_10 < VAR_9;) {
  VAR_16 = FUNC_5(0, (VAR_7 + VAR_10) & 7,
    VAR_9 - VAR_10, &VAR_12.len);


  VAR_14[0] = VAR_16;
  VAR_14[1] = ((VAR_7 + VAR_10) & 0xff000000) >> 24;
  VAR_14[2] = ((VAR_7 + VAR_10) & 0x00ff0000) >> 16;
  VAR_14[3] = ((VAR_7 + VAR_10) & 0x0000ff00) >> 8;
  VAR_14[4] = ((VAR_7 + VAR_10) & 0x000000ff) >> 0;


  FUNC_4(VAR_15, VAR_12.len, VAR_17 + VAR_10, VAR_9 - VAR_10);
  VAR_10 += VAR_12.len;
  VAR_12.len += VAR_4 + 1;

  FUNC_2(&VAR_6);
  VAR_11 |= FUNC_7(VAR_5, &VAR_13);
  FUNC_3(&VAR_6);
 }
 return VAR_11;
}
