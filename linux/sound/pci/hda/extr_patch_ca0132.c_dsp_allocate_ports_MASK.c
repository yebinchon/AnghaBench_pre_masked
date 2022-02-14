
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,unsigned int,unsigned int,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_1,
   unsigned int VAR_2,
   unsigned int VAR_3, unsigned int *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1, "     dsp_allocate_ports() -- begin\n");

 if ((VAR_3 != 1) && (VAR_3 != 2) && (VAR_3 != 4)) {
  FUNC_0(VAR_1, "bad rate multiple\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_2,
        VAR_3, 0, VAR_4);

 FUNC_0(VAR_1, "     dsp_allocate_ports() -- complete\n");

 return VAR_5;
}
