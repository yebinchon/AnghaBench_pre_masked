
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int put; int get; int info; } ;
struct hda_codec {int dummy; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_5)
{
 struct snd_kcontrol_new VAR_6 =
  FUNC_0("FX: Smart Volume Setting",
        VAR_1, 1, 0, VAR_0);
 VAR_6.info = VAR_3;
 VAR_6.get = VAR_2;
 VAR_6.put = VAR_4;
 return FUNC_2(VAR_5, VAR_1,
    FUNC_1(&VAR_6, VAR_5));

}
