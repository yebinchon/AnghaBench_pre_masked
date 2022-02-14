
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8960_priv {scalar_t__ clk_id; int freq_in; int sysclk; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 struct wm8960_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_5 (struct snd_soc_component*,int,int*,int*,int*) ;
 int FUNC_6 (struct wm8960_priv*,int,int*,int*,int*) ;
 int FUNC_7 (struct snd_soc_component*,int,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_7)
{
 struct wm8960_priv *VAR_8 = FUNC_2(VAR_7);
 int VAR_9, VAR_10;
 u16 VAR_11 = FUNC_3(VAR_7, VAR_3);
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (!(VAR_11 & (1<<6))) {
  FUNC_0(VAR_7->dev,
   "Codec is slave mode, no need to configure clock\n");
  return 0;
 }

 if (VAR_8->clk_id != VAR_5 && !VAR_8->freq_in) {
  FUNC_1(VAR_7->dev, "No MCLK configured\n");
  return -VAR_0;
 }

 VAR_10 = VAR_8->freq_in;






 if (VAR_8->clk_id == VAR_4) {

  FUNC_7(VAR_7, 0, 0);
  VAR_9 = VAR_10;
 } else if (VAR_8->sysclk) {
  VAR_9 = VAR_8->sysclk;
 } else {
  FUNC_1(VAR_7->dev, "No SYSCLK configured\n");
  return -VAR_0;
 }

 if (VAR_8->clk_id != VAR_6) {
  VAR_15 = FUNC_6(VAR_8, VAR_9, &VAR_12, &VAR_13, &VAR_14);
  if (VAR_15 >= 0) {
   goto configure_clock;
  } else if (VAR_8->clk_id != VAR_4) {
   FUNC_1(VAR_7->dev, "failed to configure clock\n");
   return -VAR_0;
  }
 }

 VAR_9 = FUNC_5(VAR_7, VAR_10, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_9 < 0) {
  FUNC_1(VAR_7->dev, "failed to configure clock via PLL\n");
  return VAR_9;
 }
 FUNC_7(VAR_7, VAR_10, VAR_9);

configure_clock:

 FUNC_4(VAR_7, VAR_1, 3 << 1, VAR_12 << 1);


 FUNC_4(VAR_7, VAR_1, 0x7 << 3, VAR_13 << 3);
 FUNC_4(VAR_7, VAR_1, 0x7 << 6, VAR_13 << 6);


 FUNC_4(VAR_7, VAR_2, 0xf, VAR_14);

 return 0;
}
