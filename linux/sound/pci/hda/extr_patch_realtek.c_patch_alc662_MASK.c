
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int vendor_id; } ;
struct hda_codec {TYPE_5__ core; TYPE_2__* bus; struct alc_spec* spec; } ;
struct TYPE_9__ {int beep_nid; int no_analog; } ;
struct TYPE_8__ {int platform_type; } ;
struct alc_spec {TYPE_4__ gen; TYPE_3__ cdefine; int init_hook; int parse_flags; int shutup; } ;
struct TYPE_7__ {TYPE_1__* pci; } ;
struct TYPE_6__ {int subsystem_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hda_codec*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*) ;
 int FUNC_3 (struct hda_codec*,char*) ;
 int VAR_9 ;
 int FUNC_4 (struct hda_codec*,int,int,int) ;
 int FUNC_5 (struct hda_codec*) ;
 int FUNC_6 (struct hda_codec*) ;
 int FUNC_7 (struct hda_codec*) ;
 scalar_t__ FUNC_8 (struct hda_codec*) ;
 int FUNC_9 (struct alc_spec*,int,int,int ) ;
 int FUNC_10 (struct hda_codec*,int ) ;
 int FUNC_11 (struct hda_codec*,int ,int ,int ) ;
 int FUNC_12 (struct hda_codec*,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct hda_codec *VAR_10)
{
 struct alc_spec *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_10, 0x0b);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = VAR_10->spec;

 VAR_11->shutup = VAR_9;


 VAR_11->parse_flags = VAR_3;

 FUNC_4(VAR_10, 0x20, 0x04, 15);

 switch (VAR_10->core.vendor_id) {
 case 0x10ec0668:
  VAR_11->init_hook = VAR_8;
  break;
 }

 FUNC_7(VAR_10);

 FUNC_11(VAR_10, VAR_4,
         VAR_5, VAR_6);
 FUNC_12(VAR_10, VAR_7, VAR_6, 1);
 FUNC_10(VAR_10, VAR_0);

 FUNC_2(VAR_10);

 if (FUNC_8(VAR_10))
  VAR_11->gen.beep_nid = 0x01;

 if ((FUNC_6(VAR_10) & (1 << 14)) &&
     VAR_10->bus->pci && VAR_10->bus->pci->subsystem_vendor == 0x1025 &&
     VAR_11->cdefine.platform_type == 1) {
  VAR_12 = FUNC_3(VAR_10, "ALC272X");
  if (VAR_12 < 0)
   goto error;
 }


 VAR_12 = FUNC_0(VAR_10);
 if (VAR_12 < 0)
  goto error;

 if (!VAR_11->gen.no_analog && VAR_11->gen.beep_nid) {
  switch (VAR_10->core.vendor_id) {
  case 0x10ec0662:
   VAR_12 = FUNC_9(VAR_11, 0x0b, 0x05, VAR_2);
   break;
  case 0x10ec0272:
  case 0x10ec0663:
  case 0x10ec0665:
  case 0x10ec0668:
   VAR_12 = FUNC_9(VAR_11, 0x0b, 0x04, VAR_2);
   break;
  case 0x10ec0273:
   VAR_12 = FUNC_9(VAR_11, 0x0b, 0x03, VAR_2);
   break;
  }
  if (VAR_12 < 0)
   goto error;
 }

 FUNC_10(VAR_10, VAR_1);

 return 0;

 error:
 FUNC_5(VAR_10);
 return VAR_12;
}
