
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int udf_t ;
typedef int udf_dirent_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ is_cfg; scalar_t__* is_old_c32; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ EXTRACT_PROPS ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 scalar_t__ FUNC_1 (char*,int,int ,int *,int ,int ,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (scalar_t__,int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_16 ;
 char* FUNC_10 () ;
 int FUNC_11 (scalar_t__,int *,scalar_t__,scalar_t__*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char*,char const*,char const*,char const*) ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (int,int) ;
 scalar_t__ FUNC_15 (char const*,scalar_t__,char const*,char*,TYPE_1__*) ;
 int * VAR_18 ;
 int FUNC_16 (char*,char const*,char const*,TYPE_1__*) ;
 int FUNC_17 (int *,int ,int) ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_18 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_21 ;
 int FUNC_19 (char*,scalar_t__) ;
 char const* VAR_22 ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (char*) ;
 scalar_t__ FUNC_22 (char*,int ) ;
 char* FUNC_23 (char*,int *) ;
 int VAR_23 ;
 int FUNC_24 (char*,int ,int ,int ) ;
 int FUNC_25 (char*,char*,int ,int ,int ) ;
 size_t FUNC_26 (char const*) ;
 int VAR_24 ;
 int FUNC_27 (int ) ;
 int VAR_25 ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 scalar_t__ FUNC_31 (int *) ;
 char* FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 scalar_t__ FUNC_34 (int *) ;
 int * FUNC_35 (int *) ;
 scalar_t__ FUNC_36 (int *,int *,int) ;
 int * FUNC_37 (int *) ;
 int FUNC_38 (char*,...) ;
 scalar_t__* VAR_26 ;

__attribute__((used)) static int FUNC_39(udf_t *VAR_27, udf_dirent_t *VAR_28, const char *VAR_29)
{
 HANDLE VAR_30 = ((void*)0);
 DWORD VAR_31, VAR_32, VAR_33;
 EXTRACT_PROPS VAR_34;
 BOOL VAR_35, VAR_36;
 int VAR_37;
 size_t VAR_38;
 char VAR_39[128], *VAR_40 = ((void*)0), *VAR_41 = ((void*)0);
 const char* VAR_42;
 udf_dirent_t *VAR_43;
 uint8_t VAR_44[VAR_15];
 int64_t VAR_45, VAR_46;

 if ((VAR_28 == ((void*)0)) || (VAR_29 == ((void*)0)))
  return 1;

 if (VAR_29[0] == 0)
  FUNC_9(((void*)0), VAR_14);
 while ((VAR_28 = FUNC_37(VAR_28)) != ((void*)0)) {
  if (VAR_6) goto out;
  VAR_42 = FUNC_32(VAR_28);
  if (FUNC_26(VAR_42) == 0)
   continue;
  VAR_37 = (int)(3 + FUNC_26(VAR_29) + FUNC_26(VAR_42) + FUNC_26(VAR_22) + 24);
  VAR_40 = (char*)FUNC_14(sizeof(char), VAR_37);
  if (VAR_40 == ((void*)0)) {
   FUNC_38("Error allocating file name");
   goto out;
  }
  VAR_37 = FUNC_13(VAR_40, VAR_37, "%s%s/%s", VAR_22, VAR_29, VAR_42);
  if (VAR_37 < 0) {
   goto out;
  }
  if (FUNC_34(VAR_28)) {
   if (!VAR_23) {
    VAR_41 = FUNC_23(VAR_40, &VAR_36);
    FUNC_3(FUNC_12(VAR_41));
    if (VAR_21) {
     FUNC_24(VAR_41, FUNC_27(FUNC_30(VAR_28)),
      FUNC_27(FUNC_29(VAR_28)), FUNC_27(FUNC_33(VAR_28)));
    }
    FUNC_21(VAR_41);
   }
   VAR_43 = FUNC_35(VAR_28);
   if (VAR_43 != ((void*)0)) {
    if (FUNC_39(VAR_27, VAR_43, &VAR_40[FUNC_26(VAR_22)]))
     goto out;
   }
  } else {
   VAR_46 = FUNC_31(VAR_28);
   if (FUNC_15(VAR_29, VAR_46, VAR_42, VAR_40, &VAR_34)) {
    FUNC_21(VAR_40);
    continue;
   }
   FUNC_19(VAR_40, VAR_46);
   for (VAR_38=0; VAR_38<VAR_11; VAR_38++) {
    if (VAR_34.is_old_c32[VAR_38] && VAR_26[VAR_38]) {
     FUNC_25(VAR_39, "%s/syslinux-%s/%s", VAR_3, VAR_18[0], VAR_20[VAR_38]);
     if (FUNC_0(VAR_39, VAR_40, VAR_2)) {
      FUNC_38("  Replaced with local version %s", FUNC_5(VAR_39)?"✓":"✗");
      break;
     }
     FUNC_38("  Could not replace file: %s", FUNC_10());
    }
   }
   if (VAR_38 < VAR_11)
    continue;
   VAR_41 = FUNC_23(VAR_40, &VAR_36);
   if (!VAR_36)
    FUNC_38("  File name sanitized to '%s'", VAR_41);
   VAR_30 = FUNC_1(VAR_41, VAR_7 | VAR_8,
    VAR_5, ((void*)0), VAR_0, VAR_4, ((void*)0));
   if (VAR_30 == VAR_9) {
    VAR_33 = FUNC_2();
    FUNC_38("  Unable to create file: %s", FUNC_10());
    if ((VAR_33 == VAR_1) && (FUNC_22(&VAR_41[3], VAR_17) == 0))
     FUNC_38(VAR_24);
    else
     goto out;
   } else {
    FUNC_18(VAR_30, VAR_46);
    while (VAR_46 > 0) {
     if (VAR_6) goto out;
     FUNC_17(VAR_44, 0, VAR_15);
     VAR_45 = FUNC_36(VAR_28, VAR_44, 1);
     if (VAR_45 < 0) {
      FUNC_38("  Error reading UDF file %s", &VAR_40[FUNC_26(VAR_22)]);
      goto out;
     }
     VAR_31 = (DWORD)FUNC_6(VAR_46, VAR_45);
     FUNC_4(VAR_35 = FUNC_11(VAR_30, VAR_44, VAR_31, &VAR_32, VAR_16));
     if (!VAR_35) {
      FUNC_38("  Error writing file: %s", FUNC_10());
      goto out;
     }
     VAR_46 -= VAR_45;
     if (VAR_19++ % VAR_13 == 0)
      FUNC_8(VAR_12, VAR_10, VAR_19, VAR_25);
    }
   }
   if ((VAR_21) && (!FUNC_7(VAR_30, FUNC_27(FUNC_30(VAR_28)),
    FUNC_27(FUNC_29(VAR_28)), FUNC_27(FUNC_33(VAR_28)))))
    FUNC_38("  Could not set timestamp: %s", FUNC_10());






   FUNC_4(FUNC_20(VAR_30));
   if (VAR_34.is_cfg)
    FUNC_16(VAR_41, VAR_29, VAR_42, &VAR_34);
   FUNC_21(VAR_41);
  }
  FUNC_21(VAR_40);
 }
 return 0;

out:
 if (VAR_28 != ((void*)0))
  FUNC_28(VAR_28);
 FUNC_4(FUNC_20(VAR_30));
 FUNC_21(VAR_41);
 FUNC_21(VAR_40);
 return 1;
}
