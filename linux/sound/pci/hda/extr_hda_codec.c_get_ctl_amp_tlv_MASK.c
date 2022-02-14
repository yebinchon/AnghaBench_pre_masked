
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_kcontrol {int dummy; } ;
struct hda_codec {int dummy; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*) ;
 unsigned int FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (struct hda_codec*,int ,int) ;
 struct hda_codec* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static void FUNC_6(struct snd_kcontrol *VAR_11, unsigned int *VAR_12)
{
 struct hda_codec *VAR_13 = FUNC_5(VAR_11);
 hda_nid_t VAR_14 = FUNC_2(VAR_11);
 int VAR_15 = FUNC_0(VAR_11);
 unsigned int VAR_16 = FUNC_3(VAR_11);
 bool VAR_17 = FUNC_1(VAR_11);
 u32 VAR_18, VAR_19, VAR_20;

 VAR_18 = FUNC_4(VAR_13, VAR_14, VAR_15);
 VAR_20 = (VAR_18 & VAR_3) >> VAR_4;
 VAR_20 = (VAR_20 + 1) * 25;
 VAR_19 = -((VAR_18 & VAR_1) >> VAR_2);
 VAR_19 += VAR_16;
 VAR_19 = ((int)VAR_19) * ((int)VAR_20);
 if (VAR_17 || (VAR_18 & VAR_0))
  VAR_20 |= VAR_10;
 VAR_12[VAR_8] = VAR_9;
 VAR_12[VAR_7] = 2 * sizeof(unsigned int);
 VAR_12[VAR_5] = VAR_19;
 VAR_12[VAR_6] = VAR_20;
}
