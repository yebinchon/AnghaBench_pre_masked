
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ca0106_details {int spi_dac; } ;
struct snd_ca0106 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;






 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_ca0106 *VAR_0,
      struct snd_ca0106_details *VAR_1,
      int VAR_2)
{
 switch (VAR_2) {
 case 130:
  return (VAR_1->spi_dac & 0xf000) >> (4 * 3);
 case 129:
  return (VAR_1->spi_dac & 0x0f00) >> (4 * 2);
 case 131:
  return (VAR_1->spi_dac & 0x00f0) >> (4 * 1);
 case 128:
  return (VAR_1->spi_dac & 0x000f) >> (4 * 0);
 default:
  FUNC_0(VAR_0->card->dev, "ca0106: unknown channel_id %d\n",
      VAR_2);
 }
 return 0;
}
