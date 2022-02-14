
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct hda_beep {int playing; int (* power_hook ) (struct hda_beep*,int) ;int nid; struct hda_codec* codec; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_beep*,int) ;
 int FUNC_4 (struct hda_beep*,int) ;

__attribute__((used)) static void FUNC_5(struct hda_beep *VAR_1, int VAR_2)
{
 struct hda_codec *VAR_3 = VAR_1->codec;

 if (VAR_2 && !VAR_1->playing) {
  FUNC_2(VAR_3);
  if (VAR_1->power_hook)
   VAR_1->power_hook(VAR_1, 1);
  VAR_1->playing = 1;
 }
 FUNC_0(VAR_3, VAR_1->nid, 0,
       VAR_0, VAR_2);
 if (!VAR_2 && VAR_1->playing) {
  VAR_1->playing = 0;
  if (VAR_1->power_hook)
   VAR_1->power_hook(VAR_1, 0);
  FUNC_1(VAR_3);
 }
}
