
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpname ;
struct snd_kcontrol_new {void* put; } ;
struct hda_gen_spec {int dummy; } ;
struct hda_codec {struct hda_gen_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_kcontrol_new* FUNC_0 (struct hda_gen_spec*,int,char*,int,int ) ;
 int FUNC_1 (unsigned int,int) ;
 void* VAR_4 ;
 int FUNC_2 (char*,int,char*,char const*,...) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_5, const char *VAR_6,
         int VAR_7, bool VAR_8, unsigned int VAR_9,
         bool VAR_10)
{
 struct hda_gen_spec *VAR_11 = VAR_5->spec;
 char VAR_12[VAR_3];
 int VAR_13 = VAR_8 ? VAR_1 : VAR_2;
 const char *VAR_14 = VAR_8 ? "Switch" : "Volume";
 unsigned int VAR_15 = VAR_10 ? 1 : 3;
 struct snd_kcontrol_new *VAR_16;

 if (!VAR_9)
  return 0;

 if (VAR_6)
  FUNC_2(VAR_12, sizeof(VAR_12),
    "%s Capture %s", VAR_6, VAR_14);
 else
  FUNC_2(VAR_12, sizeof(VAR_12),
    "Capture %s", VAR_14);
 VAR_16 = FUNC_0(VAR_11, VAR_13, VAR_12, VAR_7,
      FUNC_1(VAR_9, VAR_15));
 if (!VAR_16)
  return -VAR_0;
 if (VAR_8)
  VAR_16->put = VAR_4;
 if (!VAR_10)
  return 0;


 if (VAR_6)
  FUNC_2(VAR_12, sizeof(VAR_12),
    "Inverted %s Capture %s", VAR_6, VAR_14);
 else
  FUNC_2(VAR_12, sizeof(VAR_12),
    "Inverted Capture %s", VAR_14);
 VAR_16 = FUNC_0(VAR_11, VAR_13, VAR_12, VAR_7,
      FUNC_1(VAR_9, 2));
 if (!VAR_16)
  return -VAR_0;
 if (VAR_8)
  VAR_16->put = VAR_4;
 return 0;
}
