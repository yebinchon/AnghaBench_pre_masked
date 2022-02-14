
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {scalar_t__ dsp_state; scalar_t__ cur_mic_type; int * effects_switch; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int) ;
 int FUNC_2 (struct hda_codec*,int,int,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct hda_codec *VAR_12, int VAR_13)
{
 struct ca0132_spec *VAR_14 = VAR_12->spec;
 unsigned int VAR_15;

 if (VAR_14->dsp_state != VAR_3)
  return 0;


 if (!VAR_14->effects_switch[VAR_1 - VAR_4] ||
     (VAR_13 == 0)) {
  FUNC_1(VAR_12, VAR_0, 0);
  FUNC_0(VAR_12, VAR_8, VAR_11);
  FUNC_0(VAR_12, VAR_9, VAR_11);
  if (VAR_14->cur_mic_type == VAR_2)
   VAR_15 = VAR_6;
  else
   VAR_15 = VAR_5;
  FUNC_2(VAR_12, 0x80, 0x00, VAR_15);
  VAR_15 = VAR_7;
  FUNC_2(VAR_12, 0x80, 0x05, VAR_15);
 } else {
  FUNC_0(VAR_12, VAR_8, VAR_10);
  FUNC_0(VAR_12, VAR_9, VAR_10);
  if (VAR_14->cur_mic_type == VAR_2)
   VAR_15 = VAR_6;
  else
   VAR_15 = VAR_5;
  FUNC_2(VAR_12, 0x80, 0x00, VAR_15);
  VAR_15 = VAR_5;
  FUNC_2(VAR_12, 0x80, 0x05, VAR_15);
  FUNC_3(20);
  FUNC_1(VAR_12, VAR_0, VAR_13);
 }

 return 1;
}
