
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct skl_module_fmt {int channels; int s_freq; int bit_depth; int valid_bit_depth; int ch_cfg; int interleaving_style; int sample_type; int ch_map; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
  struct skl_module_fmt *VAR_2,
  u32 VAR_3, u32 VAR_4)
{
 switch (VAR_3) {
 case 134:
  VAR_2->channels = VAR_4;
  break;

 case 131:
  VAR_2->s_freq = VAR_4;
  break;

 case 135:
  VAR_2->bit_depth = VAR_4;
  break;

 case 129:
  VAR_2->valid_bit_depth = VAR_4;
  break;

 case 133:
  VAR_2->ch_cfg = VAR_4;
  break;

 case 130:
  VAR_2->interleaving_style = VAR_4;
  break;

 case 128:
  VAR_2->sample_type = VAR_4;
  break;

 case 132:
  VAR_2->ch_map = VAR_4;
  break;

 default:
  FUNC_0(VAR_1, "Invalid token %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
