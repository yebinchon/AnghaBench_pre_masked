
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int afg; } ;
struct hda_codec {TYPE_1__ core; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 unsigned int FUNC_1 (struct hda_codec*,int ) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_2)
{
 hda_nid_t VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_2->core.afg, &VAR_3);
 if (!VAR_3 || VAR_5 < 0) {
  FUNC_0(VAR_2, "HDMI: failed to get afg sub nodes\n");
  return -VAR_1;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++, VAR_3++) {
  unsigned int VAR_6;
  unsigned int VAR_7;

  VAR_6 = FUNC_1(VAR_2, VAR_3);
  VAR_7 = FUNC_2(VAR_6);

  if (!(VAR_6 & VAR_0))
   continue;

  switch (VAR_7) {
  case 129:
   FUNC_3(VAR_2, VAR_3);
   break;
  case 128:
   FUNC_4(VAR_2, VAR_3);
   break;
  }
 }

 return 0;
}
