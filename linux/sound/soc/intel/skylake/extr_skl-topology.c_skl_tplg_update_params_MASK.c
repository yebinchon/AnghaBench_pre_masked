
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_pipe_params {int s_fmt; int ch; int s_freq; } ;
struct skl_module_fmt {int valid_bit_depth; int bit_depth; int channels; int s_freq; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct skl_module_fmt*,int ) ;

__attribute__((used)) static void FUNC_2(struct skl_module_fmt *VAR_4,
   struct skl_pipe_params *VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_3)
  VAR_4->s_freq = VAR_5->s_freq;
 if (VAR_6 & VAR_0) {
  VAR_4->channels = VAR_5->ch;
  FUNC_1(VAR_4, VAR_4->channels);
 }
 if (VAR_6 & VAR_2) {
  VAR_4->valid_bit_depth = FUNC_0(VAR_5->s_fmt);





  switch (VAR_4->valid_bit_depth) {
  case 128:
   VAR_4->bit_depth = VAR_4->valid_bit_depth;
   break;

  default:
   VAR_4->bit_depth = VAR_1;
   break;
  }
 }

}
