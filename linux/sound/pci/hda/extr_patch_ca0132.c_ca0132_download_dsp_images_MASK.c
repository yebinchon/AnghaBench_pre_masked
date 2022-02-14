
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {TYPE_1__* card; struct ca0132_spec* spec; } ;
struct firmware {scalar_t__ data; } ;
struct dsp_image_seg {int dummy; } ;
struct ca0132_spec {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (struct ca0132_spec*) ;
 int FUNC_1 (struct hda_codec*,char*) ;
 int FUNC_2 (struct hda_codec*,char*) ;
 scalar_t__ FUNC_3 (struct hda_codec*,struct dsp_image_seg const*,int ,int ,int,int ) ;
 int FUNC_4 (struct hda_codec*) ;
 int FUNC_5 (struct firmware const*) ;
 scalar_t__ FUNC_6 (struct firmware const**,int ,int ) ;

__attribute__((used)) static bool FUNC_7(struct hda_codec *VAR_3)
{
 bool VAR_4 = 0;
 struct ca0132_spec *VAR_5 = VAR_3->spec;
 const struct dsp_image_seg *VAR_6;
 const struct firmware *VAR_7 = ((void*)0);





 switch (FUNC_0(VAR_5)) {
 case 128:
 case 130:
 case 131:
  if (FUNC_6(&VAR_7, VAR_0,
     VAR_3->card->dev) != 0)
   FUNC_1(VAR_3, "Desktop firmware not found.");
  else
   FUNC_1(VAR_3, "Desktop firmware selected.");
  break;
 case 129:
  if (FUNC_6(&VAR_7, VAR_2,
     VAR_3->card->dev) != 0)
   FUNC_1(VAR_3, "Recon3Di alt firmware not detected.");
  else
   FUNC_1(VAR_3, "Recon3Di firmware selected.");
  break;
 default:
  break;
 }




 if (!VAR_7) {
  FUNC_1(VAR_3, "Default firmware selected.");
  if (FUNC_6(&VAR_7, VAR_1,
     VAR_3->card->dev) != 0)
   return 0;
 }

 VAR_6 = (struct dsp_image_seg *)(VAR_7->data);
 if (FUNC_3(VAR_3, VAR_6, 0, 0, 1, 0)) {
  FUNC_2(VAR_3, "ca0132 DSP load image failed\n");
  goto exit_download;
 }

 VAR_4 = FUNC_4(VAR_3);

exit_download:
 FUNC_5(VAR_7);

 return VAR_4;
}
