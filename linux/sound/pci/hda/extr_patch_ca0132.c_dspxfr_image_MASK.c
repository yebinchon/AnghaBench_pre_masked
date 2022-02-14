
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {struct ca0132_spec* spec; } ;
struct dsp_image_seg {int dummy; } ;
struct dma_engine {unsigned short m_converter_format; int buf_size; struct dma_engine* dmab; scalar_t__ area; struct hda_codec* codec; } ;
struct ca0132_spec {int dsp_stream_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 int FUNC_1 (struct hda_codec*,int ,unsigned short,unsigned int*) ;
 int FUNC_2 (struct hda_codec*,int ,unsigned char,int ,unsigned int*) ;
 int FUNC_3 (struct hda_codec*,unsigned int,unsigned short,unsigned short*) ;
 unsigned char FUNC_4 (struct dma_engine*) ;
 int FUNC_5 (struct hda_codec*,unsigned short,unsigned int*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*,unsigned int*) ;
 int FUNC_8 (struct hda_codec*,unsigned int) ;
 int FUNC_9 (struct hda_codec*,struct dsp_image_seg const*,unsigned int,struct dma_engine*,unsigned int,unsigned int,int) ;
 struct dsp_image_seg* FUNC_10 (struct dsp_image_seg const*) ;
 scalar_t__ FUNC_11 (struct dsp_image_seg const*) ;
 int FUNC_12 (struct dsp_image_seg const*) ;
 int FUNC_13 (struct dsp_image_seg const*) ;
 int FUNC_14 (struct dma_engine*) ;
 void* FUNC_15 (int,int ) ;
 int FUNC_16 (struct hda_codec*,struct dma_engine*) ;
 int FUNC_17 (struct hda_codec*,unsigned short,int,struct dma_engine*) ;

__attribute__((used)) static int FUNC_18(struct hda_codec *VAR_7,
   const struct dsp_image_seg *VAR_8,
   unsigned int VAR_9,
   unsigned int VAR_10,
   unsigned short VAR_11,
   bool VAR_12)
{
 struct ca0132_spec *VAR_13 = VAR_7->spec;
 int VAR_14;
 unsigned short VAR_15 = 0;
 unsigned int VAR_16;
 unsigned char VAR_17 = 0;
 struct dma_engine *VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20;

 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_18 = FUNC_15(sizeof(*VAR_18), VAR_4);
 if (!VAR_18)
  return -VAR_3;

 VAR_18->dmab = FUNC_15(sizeof(*VAR_18->dmab), VAR_4);
 if (!VAR_18->dmab) {
  FUNC_14(VAR_18);
  return -VAR_3;
 }

 VAR_18->codec = VAR_7;
 FUNC_3(VAR_7, VAR_10, VAR_11, &VAR_15);
 VAR_18->m_converter_format = VAR_15;
 VAR_18->buf_size = (VAR_12 ? VAR_1 :
   VAR_0) * 2;

 VAR_19 = VAR_12 ? VAR_5 : 0;

 VAR_14 = FUNC_1(VAR_7, VAR_6,
     VAR_15, &VAR_16);

 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "set converter format fail\n");
  goto exit;
 }

 VAR_14 = FUNC_17(VAR_7,
    VAR_18->m_converter_format,
    VAR_18->buf_size,
    VAR_18->dmab);
 if (VAR_14 < 0)
  goto exit;
 VAR_13->dsp_stream_id = VAR_14;

 if (VAR_12) {
  VAR_14 = FUNC_7(VAR_7, &VAR_19);
  if (VAR_14 < 0) {
   FUNC_0(VAR_7, "alloc dmachan fail\n");
   VAR_19 = VAR_5;
   goto exit;
  }
 }

 VAR_20 = 0;
 VAR_14 = FUNC_5(VAR_7, VAR_15,
     &VAR_20);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "alloc ports fail\n");
  goto exit;
 }

 VAR_17 = FUNC_4(VAR_18);
 VAR_14 = FUNC_2(VAR_7,
   VAR_6, VAR_17, 0, &VAR_16);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "set stream chan fail\n");
  goto exit;
 }

 while ((VAR_8 != ((void*)0)) && !FUNC_12(VAR_8)) {
  if (!FUNC_13(VAR_8)) {
   FUNC_0(VAR_7, "FLS check fail\n");
   VAR_14 = -VAR_2;
   goto exit;
  }
  VAR_14 = FUNC_9(VAR_7, VAR_8, VAR_9,
     VAR_18, VAR_19,
     VAR_20, VAR_12);
  if (VAR_14 < 0)
   break;

  if (FUNC_11(VAR_8))
   VAR_8 = FUNC_10(VAR_8);

  if ((VAR_8 != ((void*)0)) && !FUNC_12(VAR_8))
   VAR_8 = FUNC_10(VAR_8);
 }

 if (VAR_20 != 0)
  VAR_14 = FUNC_6(VAR_7);

 if (VAR_14 < 0)
  goto exit;

 VAR_14 = FUNC_2(VAR_7,
    VAR_6, 0, 0, &VAR_16);

exit:
 if (VAR_12 && (VAR_19 != VAR_5))
  FUNC_8(VAR_7, VAR_19);

 if (VAR_18->dmab->area)
  FUNC_16(VAR_7, VAR_18->dmab);
 FUNC_14(VAR_18->dmab);
 FUNC_14(VAR_18);

 return VAR_14;
}
