
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vendor_id; } ;
struct hda_codec {TYPE_3__* bus; TYPE_1__ core; } ;
struct alc_codec_rename_table {scalar_t__ vendor_id; int coef_mask; int coef_bits; int name; } ;
struct alc_codec_rename_pci_table {scalar_t__ codec_vendor_id; scalar_t__ pci_subvendor; scalar_t__ pci_subdevice; int name; } ;
struct TYPE_6__ {TYPE_2__* pci; } ;
struct TYPE_5__ {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; } ;


 int FUNC_0 (struct hda_codec*,int ) ;
 int FUNC_1 (struct hda_codec*) ;
 struct alc_codec_rename_pci_table* VAR_0 ;
 struct alc_codec_rename_table* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct hda_codec *VAR_2)
{
 const struct alc_codec_rename_table *VAR_3;
 const struct alc_codec_rename_pci_table *VAR_4;

 for (VAR_3 = VAR_1; VAR_3->vendor_id; VAR_3++) {
  if (VAR_3->vendor_id != VAR_2->core.vendor_id)
   continue;
  if ((FUNC_1(VAR_2) & VAR_3->coef_mask) == VAR_3->coef_bits)
   return FUNC_0(VAR_2, VAR_3->name);
 }

 if (!VAR_2->bus->pci)
  return 0;
 for (VAR_4 = VAR_0; VAR_4->codec_vendor_id; VAR_4++) {
  if (VAR_4->codec_vendor_id != VAR_2->core.vendor_id)
   continue;
  if (VAR_4->pci_subvendor != VAR_2->bus->pci->subsystem_vendor)
   continue;
  if (!VAR_4->pci_subdevice ||
      VAR_4->pci_subdevice == VAR_2->bus->pci->subsystem_device)
   return FUNC_0(VAR_2, VAR_4->name);
 }

 return 0;
}
