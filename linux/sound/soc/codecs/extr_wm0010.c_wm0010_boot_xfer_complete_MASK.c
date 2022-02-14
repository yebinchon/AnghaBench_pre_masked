
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wm0010_priv {int pll_running; scalar_t__ boot_failed; int state; } ;
struct TYPE_4__ {int len; int * rx_buf; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct wm0010_boot_xfer {scalar_t__ done; TYPE_2__ t; TYPE_1__ m; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 struct wm0010_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct wm0010_priv*) ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct wm0010_boot_xfer *VAR_2 = VAR_1;
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct wm0010_priv *VAR_4 = FUNC_4(VAR_3);
 u32 *VAR_5 = VAR_2->t.rx_buf;
 int VAR_6;

 if (VAR_2->m.status != 0) {
  FUNC_3(VAR_3->dev, "SPI transfer failed: %d\n",
   VAR_2->m.status);
  FUNC_5(VAR_4);
  if (VAR_2->done)
   FUNC_1(VAR_2->done);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2->t.len / 4; VAR_6++) {
  FUNC_2(VAR_3->dev, "%d: %04x\n", VAR_6, VAR_5[VAR_6]);

  switch (FUNC_0(VAR_5[VAR_6])) {
  case 0xe0e0e0e0:
   FUNC_3(VAR_3->dev,
    "%d: ROM error reported in stage 2\n", VAR_6);
   FUNC_5(VAR_4);
   break;

  case 0x55555555:
   if (VAR_4->state < VAR_0)
    break;
   FUNC_3(VAR_3->dev,
    "%d: ROM bootloader running in stage 2\n", VAR_6);
   FUNC_5(VAR_4);
   break;

  case 0x0fed0000:
   FUNC_2(VAR_3->dev, "Stage2 loader running\n");
   break;

  case 0x0fed0007:
   FUNC_2(VAR_3->dev, "CODE_HDR packet received\n");
   break;

  case 0x0fed0008:
   FUNC_2(VAR_3->dev, "CODE_DATA packet received\n");
   break;

  case 0x0fed0009:
   FUNC_2(VAR_3->dev, "Download complete\n");
   break;

  case 0x0fed000c:
   FUNC_2(VAR_3->dev, "Application start\n");
   break;

  case 0x0fed000e:
   FUNC_2(VAR_3->dev, "PLL packet received\n");
   VAR_4->pll_running = 1;
   break;

  case 0x0fed0025:
   FUNC_3(VAR_3->dev, "Device reports image too long\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed002c:
   FUNC_3(VAR_3->dev, "Device reports bad SPI packet\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0031:
   FUNC_3(VAR_3->dev, "Device reports SPI read overflow\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0032:
   FUNC_3(VAR_3->dev, "Device reports SPI underclock\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0033:
   FUNC_3(VAR_3->dev, "Device reports bad header packet\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0034:
   FUNC_3(VAR_3->dev, "Device reports invalid packet type\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0035:
   FUNC_3(VAR_3->dev, "Device reports data before header error\n");
   FUNC_5(VAR_4);
   break;

  case 0x0fed0038:
   FUNC_3(VAR_3->dev, "Device reports invalid PLL packet\n");
   break;

  case 0x0fed003a:
   FUNC_3(VAR_3->dev, "Device reports packet alignment error\n");
   FUNC_5(VAR_4);
   break;

  default:
   FUNC_3(VAR_3->dev, "Unrecognised return 0x%x\n",
       FUNC_0(VAR_5[VAR_6]));
   FUNC_5(VAR_4);
   break;
  }

  if (VAR_4->boot_failed)
   break;
 }

 if (VAR_2->done)
  FUNC_1(VAR_2->done);
}
