
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int dummy; } ;
typedef int hda_nid_t ;


 struct snd_kcontrol_new FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ca0132_spec*) ;
 char** VAR_4 ;
 int FUNC_2 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,int ,int ) ;
 int FUNC_4 (char*,char*,char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_5, hda_nid_t VAR_6,
    const char *VAR_7, int VAR_8)
{
 struct ca0132_spec *VAR_9 = VAR_5->spec;
 char VAR_10[VAR_3];
 int VAR_11 = VAR_8 ? VAR_0 : VAR_1;
 struct snd_kcontrol_new VAR_12 =
  FUNC_0(VAR_10, VAR_6, 1, VAR_11);



 if (FUNC_1(VAR_9) && (VAR_6 <= VAR_2))
  FUNC_4(VAR_10, "FX: %s %s Switch", VAR_7, VAR_4[VAR_8]);
 else
  FUNC_4(VAR_10, "%s %s Switch", VAR_7, VAR_4[VAR_8]);

 return FUNC_3(VAR_5, VAR_6, FUNC_2(&VAR_12, VAR_5));
}
