
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int put; int get; int info; } ;
struct hda_codec {int dummy; } ;
struct TYPE_2__ {int name; } ;


 struct snd_kcontrol_new FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct snd_kcontrol_new*,struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_6)
{
 struct snd_kcontrol_new VAR_7 =
  FUNC_0(VAR_2.name,
        VAR_1, 1, 0, VAR_0);
 VAR_7.info = VAR_4;
 VAR_7.get = VAR_3;
 VAR_7.put = VAR_5;
 return FUNC_2(VAR_6, VAR_1, FUNC_1(&VAR_7, VAR_6));
}
