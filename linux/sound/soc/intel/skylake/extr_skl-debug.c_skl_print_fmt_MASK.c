
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_module_fmt {int channels; int s_freq; int bit_depth; int valid_bit_depth; int ch_cfg; int interleaving_style; int sample_type; int ch_map; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,char*,int,int,int,int,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct skl_module_fmt *VAR_1, char *VAR_2,
     ssize_t VAR_3, bool VAR_4)
{
 return FUNC_0(VAR_2 + VAR_3, VAR_0 - VAR_3,
   "%s\n\tCh %d\n\tFreq %d\n\tBit depth %d\n\t"
   "Valid bit depth %d\n\tCh config %#x\n\tInterleaving %d\n\t"
   "Sample Type %d\n\tCh Map %#x\n",
   VAR_4 ? "Input Format:" : "Output Format:",
   VAR_1->channels, VAR_1->s_freq, VAR_1->bit_depth,
   VAR_1->valid_bit_depth, VAR_1->ch_cfg,
   VAR_1->interleaving_style, VAR_1->sample_type,
   VAR_1->ch_map);
}
