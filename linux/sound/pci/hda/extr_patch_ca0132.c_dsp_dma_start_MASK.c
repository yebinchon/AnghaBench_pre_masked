
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hda_codec*,int ,unsigned int*) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned int) ;
 int FUNC_2 (struct hda_codec*,char*) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_4,
    unsigned int VAR_5, bool VAR_6)
{
 unsigned int VAR_7 = 0;
 int VAR_8 = 0;

 FUNC_2(VAR_4, "-- dsp_dma_start() -- Begin ---------\n");

 if (VAR_6) {
  VAR_8 = FUNC_0(VAR_4,
         VAR_3, &VAR_7);

  if (VAR_8 < 0) {
   FUNC_2(VAR_4, "read CHNLSTART reg fail\n");
   return VAR_8;
  }
  FUNC_2(VAR_4, "-- dsp_dma_start()    Read CHNLSTART\n");

  VAR_7 &= ~(VAR_2 |
    VAR_0);
 }

 VAR_8 = FUNC_1(VAR_4, VAR_3,
   VAR_7 | (1 << (VAR_5 + VAR_1)));
 if (VAR_8 < 0) {
  FUNC_2(VAR_4, "write CHNLSTART reg fail\n");
  return VAR_8;
 }
 FUNC_2(VAR_4, "-- dsp_dma_start() -- Complete ---------\n");

 return VAR_8;
}
