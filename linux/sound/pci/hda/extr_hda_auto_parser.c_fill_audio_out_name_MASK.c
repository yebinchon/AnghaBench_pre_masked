
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct auto_pin_cfg {int hp_outs; int hp_pins; int speaker_outs; int speaker_pins; int line_outs; int line_out_pins; } ;
typedef int hda_nid_t ;


 int VAR_0 ;
 char* FUNC_0 (struct hda_codec*,int ) ;
 char* FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ) ;
 unsigned int FUNC_3 (struct hda_codec*,int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (char*,int,char*,char const*,char const*,char const*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_1, hda_nid_t VAR_2,
          const struct auto_pin_cfg *VAR_3,
          const char *VAR_4, char *VAR_5, int VAR_6,
          int *VAR_7)
{
 unsigned int VAR_8 = FUNC_3(VAR_1, VAR_2);
 int VAR_9 = FUNC_4(VAR_8);
 const char *VAR_10, *VAR_11 = "";


 if (!FUNC_6(VAR_4, "Line Out") && VAR_9 == VAR_0)
  VAR_4 = "Speaker";
 VAR_10 = FUNC_0(VAR_1, VAR_2);

 if (VAR_3) {

  VAR_11 = FUNC_1(VAR_2, VAR_3->line_out_pins, VAR_3->line_outs,
           VAR_7);
  if (!VAR_11)
   VAR_11 = FUNC_1(VAR_2, VAR_3->speaker_pins, VAR_3->speaker_outs,
            VAR_7);
  if (!VAR_11) {

   int VAR_12 = FUNC_2(VAR_1, VAR_2, VAR_3->hp_pins,
           VAR_3->hp_outs);
   if (VAR_12 >= 0 && VAR_7)
    *VAR_7 = VAR_12;
   VAR_11 = "";
  }
 }
 FUNC_5(VAR_5, VAR_6, "%s%s%s", VAR_10, VAR_4, VAR_11);
 return 1;
}
