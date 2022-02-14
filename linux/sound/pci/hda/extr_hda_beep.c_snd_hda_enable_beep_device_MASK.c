
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct hda_beep* beep; } ;
struct hda_beep {int enabled; } ;


 int FUNC_0 (struct hda_beep*) ;

int FUNC_1(struct hda_codec *VAR_0, int VAR_1)
{
 struct hda_beep *VAR_2 = VAR_0->beep;
 if (!VAR_2)
  return 0;
 VAR_1 = !!VAR_1;
 if (VAR_2->enabled != VAR_1) {
  VAR_2->enabled = VAR_1;
  if (!VAR_1)
   FUNC_0(VAR_2);
  return 1;
 }
 return 0;
}
