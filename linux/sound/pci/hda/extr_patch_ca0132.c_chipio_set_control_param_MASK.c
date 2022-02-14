
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct ca0132_spec {int chipio_mutex; } ;
typedef enum control_param_id { ____Placeholder_control_param_id } control_param_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hda_codec*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hda_codec*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hda_codec *VAR_5,
  enum control_param_id VAR_6, int VAR_7)
{
 struct ca0132_spec *VAR_8 = VAR_5->spec;
 int VAR_9;

 if ((VAR_6 < 32) && (VAR_7 < 8)) {
  VAR_9 = (VAR_7 << 5) | (VAR_6);
  FUNC_3(VAR_5, VAR_4, 0,
        VAR_2, VAR_9);
 } else {
  FUNC_1(&VAR_8->chipio_mutex);
  if (FUNC_0(VAR_5, VAR_3, 0) == 0) {
   FUNC_3(VAR_5, VAR_4, 0,
         VAR_0,
         VAR_6);
   FUNC_3(VAR_5, VAR_4, 0,
         VAR_1,
         VAR_7);
  }
  FUNC_2(&VAR_8->chipio_mutex);
 }
}
