
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct rsnd_dai {int clk_master; int bit_clk_inv; int sys_delay; int data_alignment; int frm_clk_inv; } ;


 int VAR_0 ;




 unsigned int VAR_1 ;



 unsigned int VAR_2 ;

 unsigned int VAR_3 ;



 struct rsnd_dai* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 struct rsnd_dai *VAR_6 = FUNC_0(VAR_4);


 switch (VAR_5 & VAR_3) {
 case 138:
  VAR_6->clk_master = 0;
  break;
 case 137:
  VAR_6->clk_master = 1;
  break;
 default:
  return -VAR_0;
 }


 VAR_6->bit_clk_inv = 0;
 switch (VAR_5 & VAR_1) {
 case 134:
  VAR_6->sys_delay = 0;
  VAR_6->data_alignment = 0;
  VAR_6->frm_clk_inv = 0;
  break;
 case 131:
 case 135:
  VAR_6->sys_delay = 1;
  VAR_6->data_alignment = 0;
  VAR_6->frm_clk_inv = 1;
  break;
 case 128:
  VAR_6->sys_delay = 1;
  VAR_6->data_alignment = 1;
  VAR_6->frm_clk_inv = 1;
  break;
 case 136:
  VAR_6->sys_delay = 0;
  VAR_6->data_alignment = 0;
  VAR_6->frm_clk_inv = 1;
  break;
 }


 switch (VAR_5 & VAR_2) {
 case 130:
  VAR_6->frm_clk_inv = !VAR_6->frm_clk_inv;
  break;
 case 132:
  VAR_6->bit_clk_inv = !VAR_6->bit_clk_inv;
  break;
 case 133:
  VAR_6->bit_clk_inv = !VAR_6->bit_clk_inv;
  VAR_6->frm_clk_inv = !VAR_6->frm_clk_inv;
  break;
 case 129:
 default:
  break;
 }

 return 0;
}
