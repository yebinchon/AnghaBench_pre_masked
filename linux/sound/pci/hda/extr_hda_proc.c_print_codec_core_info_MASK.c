
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_info_buffer {int dummy; } ;
struct hdac_device {scalar_t__ mfg; int revision_id; int subsystem_id; int vendor_id; int mfg_unsol; int mfg_function_id; int afg_unsol; int afg_function_id; scalar_t__ afg; int addr; scalar_t__ chip_name; scalar_t__ vendor_name; } ;


 int FUNC_0 (struct snd_info_buffer*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct hdac_device *VAR_0,
      struct snd_info_buffer *VAR_1)
{
 FUNC_0(VAR_1, "Codec: ");
 if (VAR_0->vendor_name && VAR_0->chip_name)
  FUNC_0(VAR_1, "%s %s\n",
       VAR_0->vendor_name, VAR_0->chip_name);
 else
  FUNC_0(VAR_1, "Not Set\n");
 FUNC_0(VAR_1, "Address: %d\n", VAR_0->addr);
 if (VAR_0->afg)
  FUNC_0(VAR_1, "AFG Function Id: 0x%x (unsol %u)\n",
   VAR_0->afg_function_id, VAR_0->afg_unsol);
 if (VAR_0->mfg)
  FUNC_0(VAR_1, "MFG Function Id: 0x%x (unsol %u)\n",
   VAR_0->mfg_function_id, VAR_0->mfg_unsol);
 FUNC_0(VAR_1, "Vendor Id: 0x%08x\n", VAR_0->vendor_id);
 FUNC_0(VAR_1, "Subsystem Id: 0x%08x\n", VAR_0->subsystem_id);
 FUNC_0(VAR_1, "Revision Id: 0x%x\n", VAR_0->revision_id);

 if (VAR_0->mfg)
  FUNC_0(VAR_1, "Modem Function Group: 0x%x\n", VAR_0->mfg);
 else
  FUNC_0(VAR_1, "No Modem Function Group found\n");
}
