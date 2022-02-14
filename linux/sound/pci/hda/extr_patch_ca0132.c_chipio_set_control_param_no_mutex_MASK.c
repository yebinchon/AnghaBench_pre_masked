
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
typedef enum control_param_id { ____Placeholder_control_param_id } control_param_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hda_codec *VAR_5,
  enum control_param_id VAR_6, int VAR_7)
{
 int VAR_8;

 if ((VAR_6 < 32) && (VAR_7 < 8)) {
  VAR_8 = (VAR_7 << 5) | (VAR_6);
  FUNC_1(VAR_5, VAR_4, 0,
        VAR_2, VAR_8);
 } else {
  if (FUNC_0(VAR_5, VAR_3, 0) == 0) {
   FUNC_1(VAR_5, VAR_4, 0,
         VAR_0,
         VAR_6);
   FUNC_1(VAR_5, VAR_4, 0,
         VAR_1,
         VAR_7);
  }
 }
}
