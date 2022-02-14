
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int usb_label; int label; int has_efi_syslinux; } ;
struct TYPE_5__ {scalar_t__ is_grub_cfg; scalar_t__ is_syslinux_cfg; scalar_t__ is_conf; scalar_t__ is_cfg; scalar_t__ is_menu_cfg; } ;
typedef TYPE_1__ EXTRACT_PROPS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_5 ;
 char* FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 char* FUNC_4 (int ,char,char*) ;
 int * FUNC_5 (char*,char*,char*,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,char*,int ) ;
 char* FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,int ) ;
 size_t FUNC_10 (char const*) ;
 int * VAR_7 ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void FUNC_12(const char* VAR_8, const char* VAR_9, const char* VAR_10, EXTRACT_PROPS* VAR_11)
{
 size_t VAR_12, VAR_13;
 char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16, *VAR_17;

 VAR_13 = FUNC_10(VAR_8);
 VAR_16 = FUNC_8(VAR_8);
 if (VAR_16 == ((void*)0))
  return;
 for (VAR_12=0; VAR_12<VAR_13; VAR_12++)
  if (VAR_16[VAR_12] == '/') VAR_16[VAR_12] = '\\';


 if ((VAR_3 == VAR_0) && FUNC_1(VAR_5) && VAR_6) {
  if ((VAR_11->is_grub_cfg) || (VAR_11->is_menu_cfg) || (VAR_11->is_syslinux_cfg)) {


   if (FUNC_5(VAR_16, VAR_11->is_grub_cfg ? "linux" : "append",
    VAR_11->is_grub_cfg ? "/casper/vmlinuz" : "initrd=/casper/initrd",

    VAR_11->is_grub_cfg ? "/casper/vmlinuz persistent" : "persistent initrd=/casper/initrd", VAR_2) != ((void*)0))
    FUNC_11("  Added 'persistent' kernel option");


   else if (FUNC_5(VAR_16, VAR_11->is_grub_cfg ? "linux" : "append",
    "boot=live", "boot=live persistence", VAR_2) != ((void*)0))
    FUNC_11("  Added 'persistence' kernel option");





  }
 }



 if ((VAR_11->is_cfg) || (VAR_11->is_conf)) {
  VAR_14 = FUNC_4(VAR_5.label, ' ', "\\x20");
  VAR_15 = FUNC_4(VAR_5.usb_label, ' ', "\\x20");
  if ((VAR_14 != ((void*)0)) && (VAR_15 != ((void*)0))) {
   if (VAR_11->is_grub_cfg) {

    if ((FUNC_5(VAR_16, "linux", VAR_14, VAR_15, VAR_2) != ((void*)0)) ||
     (FUNC_5(VAR_16, "linuxefi", VAR_14, VAR_15, VAR_2) != ((void*)0)))
     FUNC_11("  Patched %s: '%s' ➔ '%s'\n", VAR_16, VAR_14, VAR_15);
   }
   else if (FUNC_5(VAR_16, (VAR_11->is_conf) ? "options" : "append",
    VAR_14, VAR_15, VAR_2) != ((void*)0))
    FUNC_11("  Patched %s: '%s' ➔ '%s'\n", VAR_16, VAR_14, VAR_15);
  }
  FUNC_6(VAR_14);
  FUNC_6(VAR_15);
 }


 if ( (VAR_11->is_syslinux_cfg) && (FUNC_9(VAR_9, VAR_4) == 0) &&
   (FUNC_9(VAR_10, VAR_7[0]) == 0) &&
   (!VAR_5.has_efi_syslinux) && (VAR_17 = FUNC_8(VAR_16)) ) {
  VAR_17[VAR_13-12] = 's'; VAR_17[VAR_13-11] = 'y'; VAR_17[VAR_13-10] = 's';
  FUNC_0(VAR_16, VAR_17, VAR_2);
  FUNC_11("Duplicated %s to %s\n", VAR_16, VAR_17);
  FUNC_2(VAR_17);
 }


 if (VAR_11->is_grub_cfg) {
  VAR_14 = FUNC_3(VAR_1);
  VAR_15 = FUNC_3(VAR_1);
  if ((VAR_14 != ((void*)0)) && (VAR_15 != ((void*)0))) {
   FUNC_7(VAR_14, VAR_1, "cd9660:/dev/iso9660/%s", VAR_5.label);
   FUNC_7(VAR_15, VAR_1, "msdosfs:/dev/msdosfs/%s", VAR_5.usb_label);
   if (FUNC_5(VAR_16, "set", VAR_14, VAR_15, VAR_2) != ((void*)0))
    FUNC_11("  Patched %s: '%s' ➔ '%s'\n", VAR_16, VAR_14, VAR_15);
  }
  FUNC_6(VAR_14);
  FUNC_6(VAR_15);
 }

 FUNC_2(VAR_16);
}
