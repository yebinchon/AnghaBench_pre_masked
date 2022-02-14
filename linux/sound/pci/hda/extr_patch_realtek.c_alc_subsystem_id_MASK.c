
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int subsystem_id; int vendor_id; } ;
struct hda_codec {TYPE_4__ core; TYPE_3__* bus; struct alc_spec* spec; } ;
struct TYPE_11__ {int * hp_pins; int line_outs; int line_out_pins; } ;
struct TYPE_12__ {TYPE_5__ autocfg; } ;
struct TYPE_7__ {unsigned int sku_cfg; scalar_t__ fixup; } ;
struct alc_spec {scalar_t__ init_amp; TYPE_6__ gen; TYPE_1__ cdefine; } ;
typedef int hda_nid_t ;
struct TYPE_9__ {TYPE_2__* pci; } ;
struct TYPE_8__ {unsigned int subsystem_device; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct alc_spec*) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (struct hda_codec*,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 unsigned int FUNC_4 (struct hda_codec*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct hda_codec *VAR_3, const hda_nid_t *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned VAR_8;
 struct alc_spec *VAR_9 = VAR_3->spec;

 if (VAR_9->cdefine.fixup) {
  VAR_5 = VAR_9->cdefine.sku_cfg;
  if (VAR_5 == VAR_0)
   return 0;
  goto do_sku;
 }

 VAR_5 = VAR_3->core.subsystem_id & 0xffff;
 if (VAR_3->bus->pci &&
     VAR_5 != VAR_3->bus->pci->subsystem_device && (VAR_5 & 1))
  goto do_sku;
 VAR_8 = 0x1d;
 if (VAR_3->core.vendor_id == 0x10ec0260)
  VAR_8 = 0x17;
 VAR_5 = FUNC_4(VAR_3, VAR_8);
 FUNC_2(VAR_3,
    "realtek: No valid SSID, checking pincfg 0x%08x for NID 0x%x\n",
     VAR_5, VAR_8);
 if (!(VAR_5 & 1))
  return 0;
 if ((VAR_5 >> 30) != 1)
  return 0;


 VAR_6 = 0;
 for (VAR_7 = 1; VAR_7 < 16; VAR_7++) {
  if ((VAR_5 >> VAR_7) & 1)
   VAR_6++;
 }
 if (((VAR_5 >> 16) & 0xf) != VAR_6)
  return 0;
do_sku:
 FUNC_2(VAR_3, "realtek: Enabling init ASM_ID=0x%04x CODEC_ID=%08x\n",
     VAR_5 & 0xffff, VAR_3->core.vendor_id);







 VAR_6 = (VAR_5 & 0x38) >> 3;
 if (VAR_9->init_amp == VAR_2) {
  switch (VAR_6) {
  case 1:
   FUNC_1(VAR_3, 0x01);
   break;
  case 3:
   FUNC_1(VAR_3, 0x02);
   break;
  case 7:
   FUNC_1(VAR_3, 0x03);
   break;
  case 5:
  default:
   VAR_9->init_amp = VAR_1;
   break;
  }
 }




 if (!(VAR_5 & 0x8000))
  return 1;







 if (!FUNC_0(VAR_9)) {
  hda_nid_t VAR_10;
  VAR_6 = (VAR_5 >> 11) & 0x3;
  VAR_10 = VAR_4[VAR_6];
  if (FUNC_3(VAR_10, VAR_9->gen.autocfg.line_out_pins,
          VAR_9->gen.autocfg.line_outs))
   return 1;
  VAR_9->gen.autocfg.hp_pins[0] = VAR_10;
 }
 return 1;
}
