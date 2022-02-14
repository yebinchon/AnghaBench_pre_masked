
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {int has_efi; scalar_t__* reactos_path; scalar_t__* efi_img_path; size_t wininst_index; int winpe; void* has_4GB_file; void** has_old_c32; int * wininst_path; void* disable_iso; void* has_kolibrios; void* has_grub4dos; void* has_bootmgr_efi; void* has_bootmgr; void* uses_casper; void* has_grub2; void* has_efi_syslinux; } ;
struct TYPE_6__ {void** is_old_c32; void* is_menu_cfg; void* is_grub_cfg; void* is_cfg; void* is_syslinux_cfg; } ;
typedef TYPE_1__ EXTRACT_PROPS ;
typedef void* BOOL ;


 size_t FUNC_0 (char**) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__) ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *,char const*,void*) ;
 void* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 char** VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 void* VAR_15 ;
 TYPE_3__ VAR_16 ;
 char** VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 size_t FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 char* VAR_23 ;
 char** VAR_24 ;
 scalar_t__* VAR_25 ;
 char** VAR_26 ;
 char** VAR_27 ;
 int VAR_28 ;
 char* VAR_29 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;
 int * FUNC_8 (char const*,int ) ;
 scalar_t__ VAR_30 ;
 char* VAR_31 ;
 int FUNC_9 (int ,char*,char const*) ;
 int FUNC_10 (scalar_t__*,char const*) ;
 int FUNC_11 (char const*) ;
 char** VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_12 (char*,char const*) ;
 char** VAR_34 ;

__attribute__((used)) static BOOL FUNC_13(const char* VAR_35, int64_t VAR_36, const char* VAR_37,
 const char* VAR_38, EXTRACT_PROPS *VAR_39)
{
 size_t VAR_40, VAR_41, VAR_42;


 FUNC_4(VAR_39, 0, sizeof(EXTRACT_PROPS));
 for (VAR_40 = 0; VAR_40 < FUNC_0(VAR_32); VAR_40++) {
  if (FUNC_5(VAR_37, VAR_32[VAR_40]) == 0) {
   VAR_39->is_cfg = VAR_5;
   VAR_39->is_syslinux_cfg = VAR_5;

   if ((VAR_30) && (VAR_40 < 3))
    FUNC_2(&VAR_9, VAR_38, VAR_5);
   if ((VAR_30) && (VAR_40 == 1) && (FUNC_5(VAR_35, VAR_11) == 0))
    VAR_16.has_efi_syslinux = VAR_5;
  }
 }


 for (VAR_40 = 0; VAR_40 < VAR_4; VAR_40++) {
  if ((FUNC_5(VAR_37, VAR_24[VAR_40]) == 0) && (VAR_36 <= VAR_25[VAR_40]))
   VAR_39->is_old_c32[VAR_40] = VAR_5;
 }

 if (!VAR_30) {

  VAR_42 = FUNC_6(VAR_37);
  if ((VAR_42 >= 4) && FUNC_5(&VAR_37[VAR_42 - 4], ".cfg") == 0) {
   VAR_39->is_cfg = VAR_5;
   if (FUNC_5(VAR_37, VAR_13) == 0) {
    VAR_39->is_grub_cfg = VAR_5;
   } else if (FUNC_5(VAR_37, VAR_23) == 0) {
    VAR_39->is_menu_cfg = VAR_5;
   }
  }


  if ((VAR_35 != ((void*)0)) && (VAR_35[0] == 0) && (FUNC_5(VAR_37, VAR_21) == 0)) {
   FUNC_12("Skipping '%s' file from ISO image", VAR_37);
   return VAR_5;
  }
 } else {

  if (FUNC_5(VAR_35, VAR_14) == 0)
   VAR_16.has_grub2 = VAR_5;


  if (FUNC_5(VAR_37, VAR_20) == 0) {
   VAR_15 = VAR_5;
  }


  if (FUNC_7(VAR_35, VAR_8, FUNC_11(VAR_8)) == 0) {
   VAR_16.uses_casper = VAR_5;
   if (FUNC_8(VAR_35, VAR_28) != ((void*)0))
    VAR_16.disable_iso = VAR_5;
  }


  if ((VAR_35 != ((void*)0)) && (VAR_35[0] == 0)) {
   if (FUNC_5(VAR_37, VAR_7) == 0) {
    VAR_16.has_bootmgr = VAR_5;
   }
   if (FUNC_5(VAR_37, VAR_6) == 0) {
    VAR_16.has_bootmgr_efi = VAR_5;
   }
   if (FUNC_5(VAR_37, VAR_12) == 0) {
    VAR_16.has_grub4dos = VAR_5;
   }
   if (FUNC_5(VAR_37, VAR_19) == 0) {
    VAR_16.has_kolibrios = VAR_5;
   }
   if (FUNC_5(VAR_37, VAR_6) == 0) {
    VAR_16.has_efi |= 1;
   }
   if (FUNC_5(VAR_37, VAR_22) == 0) {
    VAR_16.disable_iso = VAR_5;
   }
  }


  if ((VAR_16.reactos_path[0] == 0) && (FUNC_5(VAR_37, VAR_29) == 0))
   FUNC_10(VAR_16.reactos_path, VAR_38);


  if (!FUNC_1(VAR_16) && (FUNC_6(VAR_37) >= 7) &&
   (FUNC_7(VAR_37, "efi", 3) == 0) &&
   (FUNC_5(&VAR_37[FUNC_11(VAR_37) - 4], ".img") == 0))
   FUNC_10(VAR_16.efi_img_path, VAR_38);


  if (FUNC_5(VAR_35, VAR_11) == 0) {
   for (VAR_40=0; VAR_40<FUNC_0(VAR_10); VAR_40++)
    if (FUNC_5(VAR_37, VAR_10[VAR_40]) == 0)
     VAR_16.has_efi |= (2<<VAR_40);
  }


  if (VAR_35 != ((void*)0)) {
   if (FUNC_5(&VAR_35[FUNC_3(0, ((int)FUNC_6(VAR_35)) - ((int)FUNC_11(VAR_31)))], VAR_31) == 0) {
    for (VAR_40 = 0; VAR_40 < FUNC_0(VAR_34); VAR_40++) {
     if (FUNC_5(VAR_37, VAR_34[VAR_40]) == 0) {
      if (VAR_16.wininst_index < VAR_3) {
       FUNC_9(VAR_16.wininst_path[VAR_16.wininst_index], "?:%s", VAR_38);
       VAR_16.wininst_index++;
      }
     }
    }
   }
  }


  for (VAR_40=0; VAR_40<FUNC_0(VAR_26); VAR_40++)
   if (FUNC_5(VAR_35, VAR_26[VAR_40]) == 0)
    for (VAR_41=0; VAR_41<FUNC_0(VAR_27); VAR_41++)
     if (FUNC_5(VAR_37, VAR_27[VAR_41]) == 0)
      VAR_16.winpe |= (1<<VAR_41)<<(FUNC_0(VAR_26)*VAR_40);

  for (VAR_40=0; VAR_40<FUNC_0(VAR_17); VAR_40++) {
   if (FUNC_5(VAR_37, VAR_17[VAR_40]) == 0) {

    FUNC_2(&VAR_18, VAR_38, VAR_5);
   }
  }

  for (VAR_40=0; VAR_40<VAR_4; VAR_40++) {
   if (VAR_39->is_old_c32[VAR_40])
    VAR_16.has_old_c32[VAR_40] = VAR_5;
  }
  if (VAR_36 >= VAR_1)
   VAR_16.has_4GB_file = VAR_5;

  VAR_33 += VAR_36 / VAR_2;

  if ((VAR_36 != 0) && (VAR_36 % VAR_2 != 0))
   VAR_33++;
  return VAR_5;
 }
 return VAR_0;
}
