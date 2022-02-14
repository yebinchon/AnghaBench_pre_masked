
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* pin_hbr_setup ) (struct hda_codec*,int ,scalar_t__) ;} ;
struct hdmi_spec {TYPE_1__ ops; } ;
struct hda_codec {struct hdmi_spec* spec; } ;
typedef int hda_nid_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hda_codec*,char*) ;
 scalar_t__ FUNC_1 (struct hda_codec*) ;
 scalar_t__ FUNC_2 (int) ;
 unsigned int FUNC_3 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_4 (struct hda_codec*,int ,int ,int ,int) ;
 int FUNC_5 (struct hda_codec*,int ,int ,int ,unsigned int) ;
 int FUNC_6 (struct hda_codec*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct hda_codec *VAR_3, hda_nid_t VAR_4,
         hda_nid_t VAR_5, u32 VAR_6, int VAR_7)
{
 struct hdmi_spec *VAR_8 = VAR_3->spec;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = VAR_8->ops.pin_hbr_setup(VAR_3, VAR_5, FUNC_2(VAR_7));

 if (VAR_10) {
  FUNC_0(VAR_3, "hdmi_setup_stream: HBR is not supported\n");
  return VAR_10;
 }

 if (FUNC_1(VAR_3)) {






  VAR_9 = FUNC_3(VAR_3, VAR_4, 0,
        VAR_1, 0);

  VAR_9 = (VAR_9 >> 16) & ~(VAR_0);


  if (FUNC_2(VAR_7))
   VAR_9 |= 0x1;

  FUNC_5(VAR_3, VAR_4, 0,
        VAR_2, VAR_9);
 }

 FUNC_4(VAR_3, VAR_4, VAR_6, 0, VAR_7);
 return 0;
}
