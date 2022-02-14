
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm_hubs_data {int dcs_readback_mode; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int,char*) ;
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
 struct wm_hubs_data* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_10,
      u16 *VAR_11, u16 *VAR_12)
{
 struct wm_hubs_data *VAR_13 = FUNC_1(VAR_10);
 u16 VAR_14, VAR_15;
 int VAR_16 = 0;

 switch (VAR_13->dcs_readback_mode) {
 case 2:
  VAR_14 = VAR_8;
  break;
 case 1:
  VAR_14 = VAR_9;
  break;
 default:
  VAR_14 = VAR_5;
  break;
 }




 switch (VAR_13->dcs_readback_mode) {
 case 0:
  *VAR_11 = FUNC_2(VAR_10, VAR_6)
   & VAR_3;
  *VAR_12 = FUNC_2(VAR_10, VAR_7)
   & VAR_4;
  break;
 case 2:
 case 1:
  VAR_15 = FUNC_2(VAR_10, VAR_14);
  *VAR_12 = (VAR_15 & VAR_1)
   >> VAR_2;
  *VAR_11 = VAR_15 & VAR_0;
  break;
 default:
  FUNC_0(1, "Unknown DCS readback method\n");
  VAR_16 = -1;
 }
 return VAR_16;
}
