
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 20;

 FUNC_0(VAR_2, "dsp_reset\n");
 do {
  VAR_3 = FUNC_1(VAR_2, VAR_1, 0);
  VAR_4--;
 } while (VAR_3 == -VAR_0 && VAR_4);

 if (!VAR_4) {
  FUNC_0(VAR_2, "dsp_reset timeout\n");
  return -VAR_0;
 }

 return 0;
}
