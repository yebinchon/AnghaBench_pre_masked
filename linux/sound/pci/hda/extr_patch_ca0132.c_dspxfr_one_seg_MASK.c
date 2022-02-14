
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct hda_codec {int dummy; } ;
struct dsp_image_seg {unsigned int* data; unsigned int chip_addr; unsigned int count; } ;
struct dma_engine {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct hda_codec*,unsigned int,unsigned int const*,unsigned int) ;
 int FUNC_4 (struct hda_codec*,char*,...) ;
 unsigned char* FUNC_5 (struct dma_engine*) ;
 scalar_t__ FUNC_6 (struct dma_engine*) ;
 int FUNC_7 (struct dma_engine*,unsigned short*) ;
 int FUNC_8 (struct dma_engine*) ;
 int FUNC_9 (struct dma_engine*,int ) ;
 int FUNC_10 (struct dma_engine*,unsigned int const*,unsigned int) ;
 int FUNC_11 (struct hda_codec*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_12 (struct hda_codec*,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_13 (struct hda_codec*,unsigned int,int) ;
 int FUNC_14 (struct hda_codec*,unsigned int,int) ;
 int FUNC_15 (struct hda_codec*,unsigned int) ;
 int FUNC_16 (struct hda_codec*,struct dsp_image_seg const*) ;
 int FUNC_17 (unsigned short) ;
 int FUNC_18 (unsigned short) ;
 struct dsp_image_seg* FUNC_19 (struct dsp_image_seg const*) ;
 scalar_t__ FUNC_20 (struct dsp_image_seg const*) ;
 scalar_t__ FUNC_21 (struct dsp_image_seg const*) ;
 unsigned long VAR_4 ;
 unsigned int FUNC_22 (unsigned int,unsigned int) ;
 unsigned long FUNC_23 (int) ;
 int FUNC_24 (int) ;
 scalar_t__ FUNC_25 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_26(struct hda_codec *VAR_5,
   const struct dsp_image_seg *VAR_6,
   unsigned int VAR_7,
   struct dma_engine *VAR_8,
   unsigned int VAR_9,
   unsigned int VAR_10,
   bool VAR_11)
{
 int VAR_12 = 0;
 bool VAR_13 = 0;
 const unsigned int *VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;
 unsigned char *VAR_18;
 unsigned short VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 unsigned int VAR_24;
 const u32 *VAR_25;
 u32 VAR_26;
 unsigned int VAR_27;
 const struct dsp_image_seg *VAR_28 = ((void*)0);
 unsigned long VAR_29;
 bool VAR_30;

 if (VAR_6 == ((void*)0))
  return -VAR_2;
 if (FUNC_20(VAR_6)) {
  VAR_28 = VAR_6;
  VAR_6 = FUNC_19(VAR_6);
 }

 if (VAR_28 && (!VAR_6 || FUNC_21(VAR_6))) {
  FUNC_4(VAR_5, "hci_write\n");
  return FUNC_16(VAR_5, VAR_28);
 }

 if (VAR_6 == ((void*)0) || VAR_8 == ((void*)0) || VAR_10 == 0) {
  FUNC_4(VAR_5, "Invalid Params\n");
  return -VAR_2;
 }

 VAR_14 = VAR_6->data;
 VAR_15 = VAR_6->chip_addr,
 VAR_16 = VAR_6->count;

 if (!VAR_16)
  return VAR_28 ? FUNC_16(VAR_5, VAR_28) : 0;
 if (VAR_7)
  VAR_15 = (VAR_15 & (0xFFFF0000 << 2)) + (VAR_7 << 2);

 if (!FUNC_0(VAR_15, VAR_16) &&
     !FUNC_1(VAR_15, VAR_16) &&
     !FUNC_2(VAR_15, VAR_16)) {
  FUNC_4(VAR_5, "Invalid chip_addx Params\n");
  return -VAR_2;
 }

 VAR_17 = (unsigned int)FUNC_6(VAR_8) /
     sizeof(u32);

 VAR_18 = FUNC_5(VAR_8);

 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_5, "dma_engine buffer NULL\n");
  return -VAR_2;
 }

 FUNC_7(VAR_8, &VAR_19);
 VAR_20 = ((FUNC_18(VAR_19) >> 0) & 3) + 1;
 VAR_21 = ((FUNC_18(VAR_19) >> 3) & 3) + 1;
 VAR_22 = FUNC_17(VAR_19) + 1;

 VAR_23 = ((VAR_20 == 0) ? 0 :
   (VAR_22 * VAR_21 / VAR_20));

 if (VAR_23 == 0) {
  FUNC_4(VAR_5, "frmsz zero\n");
  return -VAR_2;
 }

 VAR_17 = FUNC_22(VAR_17,
    (unsigned int)(FUNC_0(VAR_15, 1) ?
    65536 : 32768));
 VAR_17 -= VAR_17 % VAR_23;
 FUNC_4(VAR_5,
     "chpadr=0x%08x frmsz=%u nchan=%u "
     "rate_mul=%u div=%u bufsz=%u\n",
     VAR_15, VAR_23, VAR_22,
     VAR_21, VAR_20, VAR_17);

 if (VAR_17 < VAR_23) {
  FUNC_4(VAR_5, "dspxfr_one_seg:failed\n");
  return -VAR_2;
 }

 VAR_24 = VAR_16 % VAR_23;
 VAR_25 = VAR_14;
 VAR_26 = VAR_15;

 VAR_14 += VAR_24;
 VAR_15 += VAR_24*sizeof(u32);
 VAR_16 -= VAR_24;

 while (VAR_16 != 0) {
  VAR_27 = FUNC_22(VAR_17, VAR_16);
  FUNC_4(VAR_5, "dspxfr (seg loop)cnt=%u rs=%u remainder=%u\n",
       VAR_16, VAR_27, VAR_24);
  FUNC_10(VAR_8, VAR_14, VAR_27*sizeof(u32));
  if (!VAR_13) {
   VAR_12 = FUNC_14(VAR_5, VAR_9, VAR_11);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_12 = FUNC_12(VAR_5, VAR_15,
      VAR_9, VAR_10, VAR_11);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_13 = 1;
  }

  VAR_12 = FUNC_11(VAR_5, VAR_15,
      VAR_27, VAR_9);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_12 = FUNC_13(VAR_5, VAR_9, VAR_11);
  if (VAR_12 < 0)
   return VAR_12;
  if (!FUNC_15(VAR_5, VAR_9)) {
   FUNC_4(VAR_5, "dspxfr:DMA did not start\n");
   return -VAR_3;
  }
  VAR_12 = FUNC_9(VAR_8, VAR_0);
  if (VAR_12 < 0)
   return VAR_12;
  if (VAR_24 != 0) {
   VAR_12 = FUNC_3(VAR_5,
      VAR_26,
      VAR_25,
      VAR_24);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_24 = 0;
  }
  if (VAR_28) {
   VAR_12 = FUNC_16(VAR_5, VAR_28);
   if (VAR_12 < 0)
    return VAR_12;
   VAR_28 = ((void*)0);
  }

  VAR_29 = VAR_4 + FUNC_23(2000);
  do {
   VAR_30 = FUNC_15(VAR_5, VAR_9);
   if (!VAR_30)
    break;
   FUNC_24(20);
  } while (FUNC_25(VAR_4, VAR_29));
  if (VAR_30)
   break;

  FUNC_4(VAR_5, "+++++ DMA complete\n");
  FUNC_9(VAR_8, VAR_1);
  VAR_12 = FUNC_8(VAR_8);

  if (VAR_12 < 0)
   return VAR_12;

  VAR_14 += VAR_27;
  VAR_15 += VAR_27*sizeof(u32);
  VAR_16 -= VAR_27;
 }

 if (VAR_24 != 0) {
  VAR_12 = FUNC_3(VAR_5, VAR_26,
     VAR_25, VAR_24);
 }

 return VAR_12;
}
