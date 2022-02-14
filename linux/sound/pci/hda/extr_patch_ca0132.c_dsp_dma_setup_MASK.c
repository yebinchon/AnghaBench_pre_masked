
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_3 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_4 (struct hda_codec*,char*,...) ;
 unsigned int FUNC_5 (unsigned int,int*,int*) ;

__attribute__((used)) static int FUNC_6(struct hda_codec *VAR_9,
   unsigned int VAR_10,
   unsigned int VAR_11,
   unsigned int VAR_12)
{
 int VAR_13 = 0;
 bool VAR_14, VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21 = 0;
 unsigned int VAR_22 = 0;
 unsigned int VAR_23 = 0;
 const unsigned int VAR_24 = 1 << (VAR_3 -
      VAR_4 + 1);

 FUNC_4(VAR_9, "-- dsp_dma_setup() -- Begin ---------\n");

 if (VAR_11 > VAR_24) {
  FUNC_4(VAR_9, "count too big\n");
  return -VAR_6;
 }

 VAR_16 = FUNC_5(VAR_10, &VAR_14, &VAR_15);
 if (VAR_16 == VAR_8) {
  FUNC_4(VAR_9, "invalid chip addr\n");
  return -VAR_7;
 }

 FUNC_4(VAR_9, "   dsp_dma_setup()    start reg pgm\n");

 VAR_17 = VAR_16 << VAR_1;
 VAR_18 = 0;

 if (!VAR_14) {
  VAR_17 <<= 1;
  if (VAR_15)
   VAR_17 |= (1 << VAR_1);

  VAR_18 = (1 << VAR_0);
 }

 VAR_21 = VAR_17 + VAR_18;
 VAR_13 = FUNC_3(VAR_9, FUNC_0(VAR_12),
    VAR_21);
 if (VAR_13 < 0) {
  FUNC_4(VAR_9, "write DMACFG Reg fail\n");
  return VAR_13;
 }
 FUNC_4(VAR_9, "   dsp_dma_setup()    Write DMACFG\n");

 VAR_22 = (VAR_11 - 1) << (VAR_2 +
       (VAR_14 ? 0 : 1));

 VAR_13 = FUNC_3(VAR_9, FUNC_1(VAR_12),
    VAR_22);
 if (VAR_13 < 0) {
  FUNC_4(VAR_9, "write DSPADROFS Reg fail\n");
  return VAR_13;
 }
 FUNC_4(VAR_9, "   dsp_dma_setup()    Write DSPADROFS\n");

 VAR_19 = (VAR_11 - 1) << VAR_4;

 VAR_20 = (VAR_11 - 1) << VAR_5;

 VAR_23 = VAR_19 | VAR_20;

 VAR_13 = FUNC_3(VAR_9,
    FUNC_2(VAR_12), VAR_23);
 if (VAR_13 < 0) {
  FUNC_4(VAR_9, "write XFRCNT Reg fail\n");
  return VAR_13;
 }
 FUNC_4(VAR_9, "   dsp_dma_setup()    Write XFRCNT\n");

 FUNC_4(VAR_9,
     "ChipA=0x%x, cnt=0x%x, DMACFG=0x%x, "
     "ADROFS=0x%x, XFRCNT=0x%x\n",
     VAR_10, VAR_11, VAR_21, VAR_22, VAR_23);

 FUNC_4(VAR_9, "-- dsp_dma_setup() -- Complete ---------\n");

 return 0;
}
