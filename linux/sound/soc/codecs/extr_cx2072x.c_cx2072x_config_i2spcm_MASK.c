
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int rx_pause_start_pos; int rx_pause_cycles; int tx_pause_start_pos; int tx_pause_cycles; } ;
union cx2072x_reg_i2spcm_ctrl_reg6 {int ulval; TYPE_6__ r; } ;
struct TYPE_8__ {int i2s_pcm_clk_div_chan_en; scalar_t__ i2s_pcm_clk_div; } ;
union cx2072x_reg_i2spcm_ctrl_reg5 {int ulval; TYPE_2__ r; } ;
union cx2072x_reg_i2spcm_ctrl_reg4 {int ulval; } ;
struct TYPE_11__ {int rx_master; int rx_endian_sel; int rx_dstart_dly; int rx_slot_2; scalar_t__ rx_slot_1; } ;
union cx2072x_reg_i2spcm_ctrl_reg3 {int ulval; TYPE_5__ r; } ;
struct TYPE_10__ {int tx_master; int tx_endian_sel; int tx_dstart_dly; int tx_slot_2; scalar_t__ tx_slot_1; } ;
union cx2072x_reg_i2spcm_ctrl_reg2 {int ulval; TYPE_4__ r; } ;
struct TYPE_9__ {int rx_data_one_line; int tx_data_one_line; int rx_ws_pol; int rx_ws_wid; int rx_frm_len; int rx_sa_size; int tx_ws_pol; int tx_ws_wid; int tx_frm_len; int tx_sa_size; } ;
union cx2072x_reg_i2spcm_ctrl_reg1 {int ulval; TYPE_3__ r; } ;
struct TYPE_7__ {int i2s_bclk_invert; } ;
union cx2072x_reg_digital_bios_test2 {int ulval; TYPE_1__ r; } ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct cx2072x_priv {int frame_size; int sample_size; unsigned int dai_fmt; int sample_rate; int regmap; scalar_t__ en_aec_ref; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;


 unsigned int const VAR_10 ;



 unsigned int const VAR_11 ;

 unsigned int const VAR_12 ;



 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,...) ;
 unsigned int FUNC_2 (scalar_t__,unsigned int) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cx2072x_priv *VAR_13)
{
 struct device *VAR_14 = VAR_13->dev;
 unsigned int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20;
 int VAR_21 = VAR_13->frame_size;
 int VAR_22 = VAR_13->sample_size;
 int VAR_23;
 int VAR_24 = 0;
 int VAR_25;
 int VAR_26 = 1;
 u64 VAR_27;
 unsigned int VAR_28;
 union cx2072x_reg_i2spcm_ctrl_reg1 VAR_29;
 union cx2072x_reg_i2spcm_ctrl_reg2 VAR_30;
 union cx2072x_reg_i2spcm_ctrl_reg3 VAR_31;
 union cx2072x_reg_i2spcm_ctrl_reg4 VAR_32;
 union cx2072x_reg_i2spcm_ctrl_reg5 VAR_33;
 union cx2072x_reg_i2spcm_ctrl_reg6 VAR_34;
 union cx2072x_reg_digital_bios_test2 VAR_35;
 const unsigned int VAR_36 = VAR_13->dai_fmt;

 if (VAR_21 <= 0) {
  FUNC_1(VAR_14, "Incorrect frame len %d\n", VAR_21);
  return -VAR_8;
 }

 if (VAR_22 <= 0) {
  FUNC_1(VAR_14, "Incorrect sample size %d\n", VAR_22);
  return -VAR_8;
 }

 FUNC_0(VAR_14, "config_i2spcm set_dai_fmt- %08x\n", VAR_36);

 VAR_35 = 0xac;


 switch (VAR_36 & VAR_12) {
 case 136:
  VAR_30 = 1;
  VAR_31 = 1;
  FUNC_0(VAR_14, "Sets Master mode\n");
  break;

 case 135:
  VAR_30 = 0;
  VAR_31 = 0;
  FUNC_0(VAR_14, "Sets Slave mode\n");
  break;

 default:
  FUNC_1(VAR_14, "Unsupported DAI master mode\n");
  return -VAR_8;
 }


 switch (VAR_36 & VAR_10) {
 case 134:
  VAR_16 = 1;
  VAR_17 = 1;
  VAR_20 = VAR_21 / 2;
  break;

 case 128:
  VAR_16 = 1;
  VAR_20 = VAR_21 / 2;
  break;

 case 131:
  VAR_16 = 1;
  VAR_20 = VAR_21 / 2;
  break;

 default:
  FUNC_1(VAR_14, "Unsupported DAI format\n");
  return -VAR_8;
 }


 switch (VAR_36 & VAR_11) {
 case 129:
  VAR_18 = VAR_16;
  VAR_19 = VAR_16;
  break;

 case 133:
  VAR_18 = !VAR_16;
  VAR_19 = !VAR_16;
  break;

 case 132:
  VAR_18 = VAR_16;
  VAR_19 = !VAR_16;
  break;

 case 130:
  VAR_18 = !VAR_16;
  VAR_19 = VAR_16;
  break;

 default:
  FUNC_1(VAR_14, "Unsupported DAI clock inversion\n");
  return -VAR_8;
 }

 VAR_29 = 1;
 VAR_29 = 1;

 if (VAR_16) {
  VAR_23 = (VAR_21 / 2) / VAR_0;
  VAR_24 = (VAR_21 / 2) % VAR_0;
  VAR_25 = VAR_23 * VAR_0;
 }

 VAR_29 = VAR_18;
 VAR_29 = VAR_20 - 1;

 VAR_29 = VAR_21 / VAR_0 - 1;
 VAR_29 = (VAR_22 / VAR_0) - 1;

 VAR_29 = VAR_29;
 VAR_29 = VAR_20 - 1;
 VAR_29 = VAR_29;
 VAR_29 = VAR_29;

 VAR_30 = !VAR_26;
 VAR_30 = VAR_17;
 if (VAR_13->en_aec_ref)
  VAR_30 = 0;

 VAR_31 = !VAR_26;
 VAR_31 = VAR_17;

 VAR_32 = 0;

 if (VAR_16) {
  VAR_30 = 0;
  VAR_30 = VAR_23;
  VAR_31 = 0;
  if (VAR_13->en_aec_ref)
   VAR_31 = 0;
  else
   VAR_31 = VAR_23;
  VAR_34 = VAR_25;
  VAR_34 = VAR_24;
  VAR_34 = VAR_25;
  VAR_34 = VAR_24;
 } else {
  FUNC_1(VAR_14, "TDM mode is not implemented yet\n");
  return -VAR_8;
 }
 VAR_35 = VAR_19;

 VAR_29 = 1;
 VAR_29 = 1;


 VAR_15 = VAR_13->sample_rate * VAR_21;
 VAR_33 = 0;


 FUNC_4(VAR_13->regmap, VAR_6, 0);

 if (VAR_30) {

  VAR_27 = VAR_9;
  VAR_28 = FUNC_2(VAR_27, VAR_15);
  if (VAR_28) {
   FUNC_1(VAR_14, "Unsupported BCLK %dHz\n", VAR_15);
   return -VAR_8;
  }
  FUNC_0(VAR_14, "enables BCLK %dHz output\n", VAR_15);
  VAR_33 = (u32)VAR_27 - 1;
  VAR_33 = 1;
 }

 FUNC_4(VAR_13->regmap, VAR_2, VAR_29);
 FUNC_3(VAR_13->regmap, VAR_3, 0xffffffc0,
      VAR_30);
 FUNC_3(VAR_13->regmap, VAR_4, 0xffffffc0,
      VAR_31);
 FUNC_4(VAR_13->regmap, VAR_5, VAR_32);
 FUNC_4(VAR_13->regmap, VAR_7, VAR_34);
 FUNC_4(VAR_13->regmap, VAR_6, VAR_33);

 FUNC_4(VAR_13->regmap, VAR_1,
       VAR_35);

 return 0;
}
