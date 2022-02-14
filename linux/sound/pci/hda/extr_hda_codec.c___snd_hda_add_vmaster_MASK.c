
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct slave_init_arg {int step; struct hda_codec* codec; } ;
struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hda_codec*,char const* const*,char const*,int ,struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,int ) ;
 int FUNC_3 (struct snd_kcontrol*,int ,struct slave_init_arg*) ;
 struct snd_kcontrol* FUNC_4 (char*,unsigned int*) ;
 int FUNC_5 (struct hda_codec*,int ,struct snd_kcontrol*) ;

int FUNC_6(struct hda_codec *VAR_5, char *VAR_6,
   unsigned int *VAR_7, const char * const *VAR_8,
     const char *VAR_9, bool VAR_10,
     struct snd_kcontrol **VAR_11)
{
 struct snd_kcontrol *VAR_12;
 int VAR_13;

 if (VAR_11)
  *VAR_11 = ((void*)0);

 VAR_13 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_2, ((void*)0));
 if (VAR_13 != 1) {
  FUNC_0(VAR_5, "No slave found for %s\n", VAR_6);
  return 0;
 }
 VAR_12 = FUNC_4(VAR_6, VAR_7);
 if (!VAR_12)
  return -VAR_0;
 VAR_13 = FUNC_5(VAR_5, 0, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_8, VAR_9, VAR_1, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;


 FUNC_2(VAR_12, 0);
 if (VAR_10) {
  struct slave_init_arg VAR_14 = {
   .codec = VAR_5,
   .step = 0,
  };
  FUNC_3(VAR_12,
          VAR_7 ? VAR_3 : VAR_4,
          &VAR_14);
 }

 if (VAR_11)
  *VAR_11 = VAR_12;
 return 0;
}
