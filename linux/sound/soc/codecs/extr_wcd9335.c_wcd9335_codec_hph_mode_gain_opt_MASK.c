
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wcd9335_codec {int hph_l_gain; int hph_r_gain; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wcd9335_codec* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_3,
         u8 VAR_4)
{
 struct wcd9335_codec *VAR_5 = FUNC_0(VAR_3->dev);
 u8 VAR_6, VAR_7;
 u8 VAR_8, VAR_9;
 u8 VAR_10;
 bool VAR_11, VAR_12;

 VAR_10 = FUNC_1(VAR_3, VAR_0);
 VAR_11 = VAR_10 >> 7;
 VAR_12 = (VAR_10 & 0x40) >> 6;

 VAR_6 = FUNC_1(VAR_3, VAR_1);
 VAR_7 = FUNC_1(VAR_3, VAR_2);

 VAR_8 = (VAR_6 & 0xC0) | 0x20 | VAR_4;
 VAR_9 = (VAR_7 & 0xC0) | 0x20 | VAR_4;







 if ((VAR_8 != VAR_6) && !VAR_11) {
  FUNC_2(VAR_3, VAR_1, VAR_8);
  VAR_5->hph_l_gain = VAR_6 & 0x1F;
 }

 if ((VAR_9 != VAR_7) && !VAR_12) {
  FUNC_2(VAR_3, VAR_2, VAR_9);
  VAR_5->hph_r_gain = VAR_7 & 0x1F;
 }
}
