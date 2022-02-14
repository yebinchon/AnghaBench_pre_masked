
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;
struct dsp_image_seg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*) ;
 int FUNC_4 (struct hda_codec*,struct dsp_image_seg const*,unsigned int,unsigned int,unsigned short,int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_2,
   const struct dsp_image_seg *VAR_3,
   bool VAR_4,
   unsigned int VAR_5,
   bool VAR_6,
   int VAR_7)
{
 int VAR_8 = 0;
 unsigned int VAR_9;
 unsigned short VAR_10;

 FUNC_0(VAR_2, "---- dspload_image begin ------\n");
 if (VAR_7 == 0) {
  if (!VAR_4)
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;
 }

 VAR_9 = 48000;
 VAR_10 = (unsigned short)VAR_7;

 while (VAR_10 > 16) {
  VAR_9 *= 2;
  VAR_10 /= 2;
 }

 do {
  FUNC_0(VAR_2, "Ready to program DMA\n");
  if (!VAR_4)
   VAR_8 = FUNC_1(VAR_2);

  if (VAR_8 < 0)
   break;

  FUNC_0(VAR_2, "dsp_reset() complete\n");
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_9, VAR_10,
          VAR_4);

  if (VAR_8 < 0)
   break;

  FUNC_0(VAR_2, "dspxfr_image() complete\n");
  if (VAR_6 && !VAR_4) {
   FUNC_3(VAR_2);
   VAR_8 = FUNC_2(VAR_2);
  }

  FUNC_0(VAR_2, "LOAD FINISHED\n");
 } while (0);

 return VAR_8;
}
