
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int* vnode_lswitch; scalar_t__ cur_out_type; int * out_pins; int unsol_tag_hp; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,int,int,unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_4 (struct hda_codec*,int ) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct hda_codec *VAR_12)
{
 struct ca0132_spec *VAR_13 = VAR_12->spec;
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 FUNC_0(VAR_12, "ca0132_select_out\n");

 FUNC_6(VAR_12);

 VAR_16 = VAR_13->vnode_lswitch[VAR_9 - VAR_11];

 if (VAR_16)
  VAR_15 = FUNC_4(VAR_12, VAR_13->unsol_tag_hp);
 else
  VAR_15 =
   VAR_13->vnode_lswitch[VAR_10 - VAR_11];

 if (VAR_15)
  VAR_13->cur_out_type = VAR_4;
 else
  VAR_13->cur_out_type = VAR_7;

 if (VAR_13->cur_out_type == VAR_7) {
  FUNC_0(VAR_12, "ca0132_select_out speaker\n");

  VAR_17 = VAR_2;
  VAR_18 = FUNC_1(VAR_12, 0x80, 0x04, VAR_17);
  if (VAR_18 < 0)
   goto exit;

  VAR_17 = VAR_2;
  VAR_18 = FUNC_1(VAR_12, 0x8f, 0x00, VAR_17);
  if (VAR_18 < 0)
   goto exit;


  FUNC_3(VAR_12, VAR_13->out_pins[1], 0,
        VAR_8, 0x02);
  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_1, 0x00);
  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_8, 0x00);
  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_1, 0x02);


  VAR_14 = FUNC_2(VAR_12, VAR_13->out_pins[1], 0,
     VAR_0, 0);
  FUNC_7(VAR_12, VAR_13->out_pins[1],
        VAR_14 & ~VAR_5);

  VAR_14 = FUNC_2(VAR_12, VAR_13->out_pins[0], 0,
    VAR_0, 0);
  FUNC_7(VAR_12, VAR_13->out_pins[0],
        VAR_14 | VAR_6);
 } else {
  FUNC_0(VAR_12, "ca0132_select_out hp\n");

  VAR_17 = VAR_3;
  VAR_18 = FUNC_1(VAR_12, 0x80, 0x04, VAR_17);
  if (VAR_18 < 0)
   goto exit;

  VAR_17 = VAR_3;
  VAR_18 = FUNC_1(VAR_12, 0x8f, 0x00, VAR_17);
  if (VAR_18 < 0)
   goto exit;


  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_8, 0x00);
  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_1, 0x00);
  FUNC_3(VAR_12, VAR_13->out_pins[1], 0,
        VAR_8, 0x02);
  FUNC_3(VAR_12, VAR_13->out_pins[0], 0,
        VAR_1, 0x02);


  VAR_14 = FUNC_2(VAR_12, VAR_13->out_pins[0], 0,
     VAR_0, 0);
  FUNC_7(VAR_12, VAR_13->out_pins[0],
        VAR_14 & ~VAR_5);

  VAR_14 = FUNC_2(VAR_12, VAR_13->out_pins[1], 0,
     VAR_0, 0);
  FUNC_7(VAR_12, VAR_13->out_pins[1],
        VAR_14 | VAR_5);
 }

exit:
 FUNC_5(VAR_12);

 return VAR_18 < 0 ? VAR_18 : 0;
}
