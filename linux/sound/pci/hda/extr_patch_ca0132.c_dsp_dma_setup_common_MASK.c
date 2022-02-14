
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_1 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_2 (struct hda_codec*,int ,unsigned int*) ;
 int FUNC_3 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_4 (struct hda_codec*,char*,...) ;
 unsigned int FUNC_5 (unsigned int,int*,int*) ;
 scalar_t__ FUNC_6 (struct hda_codec*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_14,
    unsigned int VAR_15,
    unsigned int VAR_16,
    unsigned int VAR_17,
    bool VAR_18)
{
 int VAR_19 = 0;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 bool VAR_23, VAR_24;

 FUNC_4(VAR_14, "-- dsp_dma_setup_common() -- Begin ---------\n");

 if (VAR_16 >= VAR_7) {
  FUNC_4(VAR_14, "dma chan num invalid\n");
  return -VAR_11;
 }

 if (FUNC_6(VAR_14, VAR_16)) {
  FUNC_4(VAR_14, "dma already active\n");
  return -VAR_10;
 }

 VAR_21 = FUNC_5(VAR_15, &VAR_23, &VAR_24);

 if (VAR_21 == VAR_13) {
  FUNC_4(VAR_14, "invalid chip addr\n");
  return -VAR_12;
 }

 VAR_20 = VAR_3;
 VAR_22 = 0;

 FUNC_4(VAR_14, "   dsp_dma_setup_common()    start reg pgm\n");

 if (VAR_18) {
  VAR_19 = FUNC_2(VAR_14, VAR_5,
         &VAR_20);

  if (VAR_19 < 0) {
   FUNC_4(VAR_14, "read CHNLPROP Reg fail\n");
   return VAR_19;
  }
  FUNC_4(VAR_14, "dsp_dma_setup_common() Read CHNLPROP\n");
 }

 if (!VAR_23)
  VAR_20 &= ~(1 << (VAR_6 + VAR_16));
 else
  VAR_20 |= (1 << (VAR_6 + VAR_16));

 VAR_20 &= ~(1 << (VAR_4 + VAR_16));

 VAR_19 = FUNC_3(VAR_14, VAR_5, VAR_20);
 if (VAR_19 < 0) {
  FUNC_4(VAR_14, "write CHNLPROP Reg fail\n");
  return VAR_19;
 }
 FUNC_4(VAR_14, "   dsp_dma_setup_common()    Write CHNLPROP\n");

 if (VAR_18) {
  VAR_19 = FUNC_2(VAR_14, VAR_2,
         &VAR_22);

  if (VAR_19 < 0) {
   FUNC_4(VAR_14, "read ACTIVE Reg fail\n");
   return VAR_19;
  }
  FUNC_4(VAR_14, "dsp_dma_setup_common() Read ACTIVE\n");
 }

 VAR_22 &= (~(1 << (VAR_0 + VAR_16))) &
  VAR_1;

 VAR_19 = FUNC_3(VAR_14, VAR_2, VAR_22);
 if (VAR_19 < 0) {
  FUNC_4(VAR_14, "write ACTIVE Reg fail\n");
  return VAR_19;
 }

 FUNC_4(VAR_14, "   dsp_dma_setup_common()    Write ACTIVE\n");

 VAR_19 = FUNC_3(VAR_14, FUNC_0(VAR_16),
         VAR_17);
 if (VAR_19 < 0) {
  FUNC_4(VAR_14, "write AUDCHSEL Reg fail\n");
  return VAR_19;
 }
 FUNC_4(VAR_14, "   dsp_dma_setup_common()    Write AUDCHSEL\n");

 VAR_19 = FUNC_3(VAR_14, FUNC_1(VAR_16),
   VAR_8 | VAR_9);
 if (VAR_19 < 0) {
  FUNC_4(VAR_14, "write IRQCNT Reg fail\n");
  return VAR_19;
 }
 FUNC_4(VAR_14, "   dsp_dma_setup_common()    Write IRQCNT\n");

 FUNC_4(VAR_14,
     "ChipA=0x%x,DspA=0x%x,dmaCh=%u, "
     "CHSEL=0x%x,CHPROP=0x%x,Active=0x%x\n",
     VAR_15, VAR_21, VAR_16,
     VAR_17, VAR_20, VAR_22);

 FUNC_4(VAR_14, "-- dsp_dma_setup_common() -- Complete ------\n");

 return 0;
}
