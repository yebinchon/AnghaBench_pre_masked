
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int* vnode_lswitch; scalar_t__ cur_mic_type; int cur_mic_boost; int * effects_switch; int unsol_tag_amic1; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (struct hda_codec*,size_t,int ) ;
 int FUNC_1 (struct hda_codec*,int ) ;
 int FUNC_2 (struct hda_codec*,int) ;
 int FUNC_3 (struct hda_codec*,int ,int ) ;
 int FUNC_4 (struct hda_codec*,char*) ;
 int FUNC_5 (struct hda_codec*,int ) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_10)
{
 struct ca0132_spec *VAR_11 = VAR_10->spec;
 int VAR_12;
 int VAR_13;

 FUNC_4(VAR_10, "ca0132_select_mic\n");

 FUNC_7(VAR_10);

 VAR_13 = VAR_11->vnode_lswitch[VAR_6 - VAR_8];

 if (VAR_13)
  VAR_12 = FUNC_5(VAR_10, VAR_11->unsol_tag_amic1);
 else
  VAR_12 =
   VAR_11->vnode_lswitch[VAR_7 - VAR_8];

 if (VAR_12)
  VAR_11->cur_mic_type = VAR_2;
 else
  VAR_11->cur_mic_type = VAR_0;

 if (VAR_11->cur_mic_type == VAR_0) {

  FUNC_3(VAR_10, VAR_3, VAR_4);
  FUNC_2(VAR_10, 1);
  FUNC_1(VAR_10, 0);

  FUNC_0(VAR_10, VAR_9,
       VAR_11->effects_switch
       [VAR_9 - VAR_1]);
 } else {

  FUNC_3(VAR_10, VAR_3, VAR_5);
  FUNC_2(VAR_10, 0);
  FUNC_1(VAR_10, VAR_11->cur_mic_boost);

  FUNC_0(VAR_10, VAR_9, 0);
 }

 FUNC_6(VAR_10);

 return 0;
}
