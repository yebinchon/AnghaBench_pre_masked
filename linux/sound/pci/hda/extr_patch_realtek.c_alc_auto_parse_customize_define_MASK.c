
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int subsystem_id; int vendor_id; int chip_name; } ;
struct hda_codec {TYPE_3__ core; TYPE_2__* bus; struct alc_spec* spec; } ;
struct TYPE_8__ {int enable_pcbeep; unsigned int sku_cfg; unsigned int port_connectivity; unsigned int check_sum; unsigned int customization; unsigned int external_amp; unsigned int platform_type; unsigned int swap; unsigned int override; scalar_t__ fixup; } ;
struct alc_spec {TYPE_4__ cdefine; } ;
struct TYPE_6__ {TYPE_1__* pci; } ;
struct TYPE_5__ {unsigned int subsystem_device; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct hda_codec*,char*,unsigned int,...) ;
 int FUNC_1 (struct hda_codec*,char*,int ,unsigned int) ;
 unsigned int FUNC_2 (struct hda_codec*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct hda_codec *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4;
 unsigned VAR_5 = 0;
 struct alc_spec *VAR_6 = VAR_1->spec;

 VAR_6->cdefine.enable_pcbeep = 1;

 if (VAR_6->cdefine.fixup) {
  VAR_2 = VAR_6->cdefine.sku_cfg;
  if (VAR_2 == VAR_0)
   return -1;
  goto do_sku;
 }

 if (!VAR_1->bus->pci)
  return -1;
 VAR_2 = VAR_1->core.subsystem_id & 0xffff;
 if (VAR_2 != VAR_1->bus->pci->subsystem_device && (VAR_2 & 1))
  goto do_sku;

 VAR_5 = 0x1d;
 if (VAR_1->core.vendor_id == 0x10ec0260)
  VAR_5 = 0x17;
 VAR_2 = FUNC_2(VAR_1, VAR_5);

 if (!(VAR_2 & 1)) {
  FUNC_1(VAR_1, "%s: SKU not ready 0x%08x\n",
      VAR_1->core.chip_name, VAR_2);
  return -1;
 }


 VAR_3 = 0;
 for (VAR_4 = 1; VAR_4 < 16; VAR_4++) {
  if ((VAR_2 >> VAR_4) & 1)
   VAR_3++;
 }
 if (((VAR_2 >> 16) & 0xf) != VAR_3)
  return -1;

 VAR_6->cdefine.port_connectivity = VAR_2 >> 30;
 VAR_6->cdefine.enable_pcbeep = (VAR_2 & 0x100000) >> 20;
 VAR_6->cdefine.check_sum = (VAR_2 >> 16) & 0xf;
 VAR_6->cdefine.customization = VAR_2 >> 8;
do_sku:
 VAR_6->cdefine.sku_cfg = VAR_2;
 VAR_6->cdefine.external_amp = (VAR_2 & 0x38) >> 3;
 VAR_6->cdefine.platform_type = (VAR_2 & 0x4) >> 2;
 VAR_6->cdefine.swap = (VAR_2 & 0x2) >> 1;
 VAR_6->cdefine.override = VAR_2 & 0x1;

 FUNC_0(VAR_1, "SKU: Nid=0x%x sku_cfg=0x%08x\n",
     VAR_5, VAR_6->cdefine.sku_cfg);
 FUNC_0(VAR_1, "SKU: port_connectivity=0x%x\n",
     VAR_6->cdefine.port_connectivity);
 FUNC_0(VAR_1, "SKU: enable_pcbeep=0x%x\n", VAR_6->cdefine.enable_pcbeep);
 FUNC_0(VAR_1, "SKU: check_sum=0x%08x\n", VAR_6->cdefine.check_sum);
 FUNC_0(VAR_1, "SKU: customization=0x%08x\n", VAR_6->cdefine.customization);
 FUNC_0(VAR_1, "SKU: external_amp=0x%x\n", VAR_6->cdefine.external_amp);
 FUNC_0(VAR_1, "SKU: platform_type=0x%x\n", VAR_6->cdefine.platform_type);
 FUNC_0(VAR_1, "SKU: swap=0x%x\n", VAR_6->cdefine.swap);
 FUNC_0(VAR_1, "SKU: override=0x%x\n", VAR_6->cdefine.override);

 return 0;
}
