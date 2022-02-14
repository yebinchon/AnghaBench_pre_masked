
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_entry {struct snd_ak4531* private_data; } ;
struct snd_info_buffer {int dummy; } ;
struct snd_ak4531 {int* regs; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct snd_info_entry *VAR_2,
     struct snd_info_buffer *VAR_3)
{
 struct snd_ak4531 *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_3, "Asahi Kasei AK4531\n\n");
 FUNC_0(VAR_3, "Recording source   : %s\n"
      "MIC gain           : %s\n",
      VAR_4->regs[VAR_0] & 1 ? "external" : "mixer",
      VAR_4->regs[VAR_1] & 1 ? "+30dB" : "+0dB");
}
