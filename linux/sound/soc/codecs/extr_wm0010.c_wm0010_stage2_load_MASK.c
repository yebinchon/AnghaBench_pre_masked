
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int t ;
struct wm0010_priv {int sysclk; } ;
struct spi_transfer {int* rx_buf; int* tx_buf; int len; int bits_per_word; int speed_hz; } ;
struct spi_message {int dummy; } ;
struct spi_device {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct firmware {int size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (int*,int *,int) ;
 int FUNC_5 (struct spi_transfer*,int ,int) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char*,int ) ;
 struct wm0010_priv* FUNC_8 (struct snd_soc_component*) ;
 int FUNC_9 (struct spi_transfer*,struct spi_message*) ;
 int FUNC_10 (struct spi_message*) ;
 int FUNC_11 (struct spi_device*,struct spi_message*) ;
 struct spi_device* FUNC_12 (int ) ;
 int FUNC_13 (struct wm0010_priv*) ;

__attribute__((used)) static int FUNC_14(struct snd_soc_component *VAR_4)
{
 struct spi_device *VAR_5 = FUNC_12(VAR_4->dev);
 struct wm0010_priv *VAR_6 = FUNC_8(VAR_4);
 const struct firmware *VAR_7;
 struct spi_message VAR_8;
 struct spi_transfer VAR_9;
 u32 *VAR_10;
 u8 *VAR_11;
 int VAR_12;
 int VAR_13 = 0;

 VAR_13 = FUNC_7(&VAR_7, "wm0010_stage2.bin", VAR_4->dev);
 if (VAR_13 != 0) {
  FUNC_1(VAR_4->dev, "Failed to request stage2 loader: %d\n",
   VAR_13);
  return VAR_13;
 }

 FUNC_0(VAR_4->dev, "Downloading %zu byte stage 2 loader\n", VAR_7->size);


 VAR_10 = FUNC_3(VAR_7->size, VAR_3 | VAR_2);
 if (!VAR_10) {
  VAR_13 = -VAR_1;
  goto abort2;
 }

 VAR_11 = FUNC_3(VAR_7->size, VAR_3 | VAR_2);
 if (!VAR_11) {
  VAR_13 = -VAR_1;
  goto abort1;
 }

 FUNC_4(VAR_10, &VAR_7->data[0], VAR_7->size);

 FUNC_10(&VAR_8);
 FUNC_5(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.rx_buf = VAR_11;
 VAR_9.tx_buf = VAR_10;
 VAR_9.len = VAR_7->size;
 VAR_9.bits_per_word = 8;
 VAR_9.speed_hz = VAR_6->sysclk / 10;
 FUNC_9(&VAR_9, &VAR_8);

 FUNC_0(VAR_4->dev, "Starting initial download at %dHz\n",
  VAR_9.speed_hz);

 VAR_13 = FUNC_11(VAR_5, &VAR_8);
 if (VAR_13 != 0) {
  FUNC_1(VAR_4->dev, "Initial download failed: %d\n", VAR_13);
  goto abort;
 }


 for (VAR_12 = 0; VAR_12 < VAR_7->size; VAR_12++) {
  if (VAR_11[VAR_12] != 0x55) {
   FUNC_1(VAR_4->dev, "Boot ROM error: %x in %d\n",
    VAR_11[VAR_12], VAR_12);
   FUNC_13(VAR_6);
   VAR_13 = -VAR_0;
   goto abort;
  }
 }
abort:
 FUNC_2(VAR_11);
abort1:
 FUNC_2(VAR_10);
abort2:
 FUNC_6(VAR_7);

 return VAR_13;
}
