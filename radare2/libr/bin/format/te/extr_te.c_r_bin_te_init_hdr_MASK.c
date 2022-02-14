
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ut8 ;
struct r_bin_te_obj_t {TYPE_1__* header; int kv; int b; } ;
struct TYPE_2__ {int Signature; } ;
typedef int TE_image_file_header ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (int ,char*,char*,int ) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct r_bin_te_obj_t *VAR_0) {
 if (!VAR_0) {
  return 0;
 }
 if (!(VAR_0->header = FUNC_1 (sizeof(TE_image_file_header)))) {
  FUNC_3 ("malloc (header)");
  return 0;
 }
 if (FUNC_2 (VAR_0->b, 0, (ut8*)VAR_0->header, sizeof (TE_image_file_header)) == -1) {
  FUNC_0("Error: read (header)\n");
  return 0;
 }
 if (!VAR_0->kv) {
  FUNC_0("Error: sdb instance is empty\n");
  return 0;
 }

 FUNC_5 (VAR_0->kv, "te_machine.cparse", "enum te_machine { TE_IMAGE_FILE_MACHINE_UNKNOWN=0x0, TE_IMAGE_FILE_MACHINE_ALPHA=0x184, "
 "TE_IMAGE_FILE_MACHINE_ALPHA64=0x284, TE_IMAGE_FILE_MACHINE_AM33=0x1d3, TE_IMAGE_FILE_MACHINE_AMD64=0x8664, "
 "TE_IMAGE_FILE_MACHINE_ARM=0x1c0, TE_IMAGE_FILE_MACHINE_AXP64=0x184, TE_IMAGE_FILE_MACHINE_CEE=0xc0ee, "
 "TE_IMAGE_FILE_MACHINE_CEF=0x0cef, TE_IMAGE_FILE_MACHINE_EBC=0x0ebc, TE_IMAGE_FILE_MACHINE_I386=0x014c, "
 "TE_IMAGE_FILE_MACHINE_IA64=0x0200, TE_IMAGE_FILE_MACHINE_M32R=0x9041, TE_IMAGE_FILE_MACHINE_M68K=0x0268, "
 "TE_IMAGE_FILE_MACHINE_MIPS16=0x0266, TE_IMAGE_FILE_MACHINE_MIPSFPU=0x0366, TE_IMAGE_FILE_MACHINE_MIPSFPU16=0x0466, "
 "TE_IMAGE_FILE_MACHINE_POWERPC=0x01f0, TE_IMAGE_FILE_MACHINE_POWERPCFP=0x01f1, TE_IMAGE_FILE_MACHINE_R10000=0x0168, "
 "TE_IMAGE_FILE_MACHINE_R3000=0x0162, TE_IMAGE_FILE_MACHINE_R4000=0x0166, TE_IMAGE_FILE_MACHINE_SH3=0x01a2, "
 "TE_IMAGE_FILE_MACHINE_SH3DSP=0x01a3, TE_IMAGE_FILE_MACHINE_SH3E=0x01a4, TE_IMAGE_FILE_MACHINE_SH4=0x01a6, "
 "TE_IMAGE_FILE_MACHINE_SH5=0x01a8, TE_IMAGE_FILE_MACHINE_THUMB=0x01c2, TE_IMAGE_FILE_MACHINE_TRICORE=0x0520, "
 "TE_IMAGE_FILE_MACHINE_WCEMIPSV2=0x0169};", 0);
 FUNC_5 (VAR_0->kv, "te_subsystem.cparse", "enum te_subsystem { TE_IMAGE_SUBSYSTEM_UNKNOWN=0, TE_IMAGE_SUBSYSTEM_NATIVE=1, "
 "TE_IMAGE_SUBSYSTEM_WINDOWS_GUI=2, TE_IMAGE_SUBSYSTEM_WINDOWS_CUI=3, "
 "TE_IMAGE_SUBSYSTEM_POSIX_CUI=7, TE_IMAGE_SUBSYSTEM_WINDOWS_CE_GU=9, "
 "TE_IMAGE_SUBSYSTEM_EFI_APPLICATION=10, TE_IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER=11, TE_IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER=12, "
 "TE_IMAGE_SUBSYSTEM_EFI_ROM=13, TE_IMAGE_SUBSYSTEM_XBOX=14};", 0);
 FUNC_4 (VAR_0->kv, "te_header.offset", 0, 0);
 FUNC_5 (VAR_0->kv, "te_header.format", "[2]z[2]Eb[1]Ewxxq"
  " Signature (te_machine)Machine NumberOfSections (te_subsystem)Subsystem StrippedSize AddressOfEntryPoint BaseOfCode ImageBase", 0);
 FUNC_4 (VAR_0->kv, "te_directory1_header.offset", 24, 0);
 FUNC_5 (VAR_0->kv, "te_directory1_header.format", "xx"
  " VirtualAddress Size", 0);
 FUNC_4 (VAR_0->kv, "te_directory2_header.offset", 32, 0);
 FUNC_5 (VAR_0->kv, "te_directory2_header.format", "xx"
  " VirtualAddress Size", 0);

 if (FUNC_6 ((char *)&VAR_0->header->Signature, "VZ", 2)) {
  return 0;
 }
 return 1;
}
