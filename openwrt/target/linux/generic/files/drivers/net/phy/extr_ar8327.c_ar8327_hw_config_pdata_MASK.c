
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ar8xxx_priv {int chip_rev; int get_port_link; struct ar8327_data* chip_data; } ;
struct ar8327_platform_data {int num_leds; int * leds; TYPE_1__* sgmii_cfg; struct ar8327_led_cfg* led_cfg; TYPE_2__* pad6_cfg; TYPE_2__* pad5_cfg; TYPE_2__* pad0_cfg; int port6_cfg; int port0_cfg; int get_port_link; } ;
struct ar8327_led_cfg {int led_ctrl0; int led_ctrl1; int led_ctrl2; int led_ctrl3; scalar_t__ open_drain; } ;
struct ar8327_data {int leds; void* port6_status; void* port0_status; } ;
struct TYPE_4__ {int mac06_exchange_dis; } ;
struct TYPE_3__ {int sgmii_ctrl; scalar_t__ serdes_aen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct ar8xxx_priv*,int *) ;
 int FUNC_3 (struct ar8xxx_priv*,int ) ;
 int FUNC_4 (struct ar8xxx_priv*,int ,int) ;
 scalar_t__ FUNC_5 (struct ar8xxx_priv*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int
FUNC_7(struct ar8xxx_priv *VAR_19,
         struct ar8327_platform_data *VAR_20)
{
 struct ar8327_led_cfg *VAR_21;
 struct ar8327_data *VAR_22 = VAR_19->chip_data;
 u32 VAR_23, VAR_24;
 u32 VAR_25;

 if (!VAR_20)
  return -VAR_16;

 VAR_19->get_port_link = VAR_20->get_port_link;

 VAR_22->port0_status = FUNC_1(&VAR_20->port0_cfg);
 VAR_22->port6_status = FUNC_1(&VAR_20->port6_cfg);

 VAR_25 = FUNC_0(VAR_20->pad0_cfg);
 if (FUNC_5(VAR_19) && !VAR_20->pad0_cfg->mac06_exchange_dis)
     VAR_25 |= VAR_15;
 FUNC_4(VAR_19, VAR_7, VAR_25);

 VAR_25 = FUNC_0(VAR_20->pad5_cfg);
 FUNC_4(VAR_19, VAR_8, VAR_25);
 VAR_25 = FUNC_0(VAR_20->pad6_cfg);
 FUNC_4(VAR_19, VAR_9, VAR_25);

 VAR_23 = FUNC_3(VAR_19, VAR_10);
 VAR_24 = VAR_23;

 VAR_21 = VAR_20->led_cfg;
 if (VAR_21) {
  if (VAR_21->open_drain)
   VAR_24 |= VAR_0;
  else
   VAR_24 &= ~VAR_0;

  FUNC_4(VAR_19, VAR_3, VAR_21->led_ctrl0);
  FUNC_4(VAR_19, VAR_4, VAR_21->led_ctrl1);
  FUNC_4(VAR_19, VAR_5, VAR_21->led_ctrl2);
  FUNC_4(VAR_19, VAR_6, VAR_21->led_ctrl3);

  if (VAR_24 != VAR_23)
   VAR_24 |= VAR_1;
 }

 if (VAR_20->sgmii_cfg) {
  VAR_25 = VAR_20->sgmii_cfg->sgmii_ctrl;
  if (VAR_19->chip_rev == 1)
   VAR_25 |= VAR_12 |
        VAR_13 |
        VAR_14;
  else
   VAR_25 &= ~(VAR_12 |
          VAR_13 |
          VAR_14);

  FUNC_4(VAR_19, VAR_11, VAR_25);

  if (VAR_20->sgmii_cfg->serdes_aen)
   VAR_24 &= ~VAR_2;
  else
   VAR_24 |= VAR_2;
 }

 FUNC_4(VAR_19, VAR_10, VAR_24);

 if (VAR_20->leds && VAR_20->num_leds) {
  int VAR_26;

  VAR_22->leds = FUNC_6(VAR_20->num_leds * sizeof(void *),
         VAR_18);
  if (!VAR_22->leds)
   return -VAR_17;

  for (VAR_26 = 0; VAR_26 < VAR_20->num_leds; VAR_26++)
   FUNC_2(VAR_19, &VAR_20->leds[VAR_26]);
 }

 return 0;
}
