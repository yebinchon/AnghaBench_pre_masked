
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef char WCHAR ;
struct TYPE_3__ {int * pwszName; } ;
typedef TYPE_1__ VDS_VOLUME_PROP ;
typedef int USHORT ;
typedef int ULONG ;
typedef int LPWSTR ;
typedef char* LPCSTR ;
typedef int IVdsVolumeMF3 ;
typedef int IVdsVolume ;
typedef int IVdsSwProvider ;
typedef int IVdsServiceLoader ;
typedef int IVdsService ;
typedef int IVdsProvider ;
typedef int IVdsPack ;
typedef int IVdsAsync ;
typedef int IUnknown ;
typedef int IEnumVdsObject ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,int,int *,void**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int *,int *,int ,int ,int *,int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 char* FUNC_5 (int,int ,int,int) ;
 scalar_t__ FUNC_6 (int *,int,int **,int*) ;
 int FUNC_7 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int *,int *,void**) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,scalar_t__*,int*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int **) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,char*,int **) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,int ,int **) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int *,int *,void**) ;
 scalar_t__ FUNC_21 (int *,int **) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int *,char*,int ,int,char*,int,int **) ;
 scalar_t__ FUNC_24 (int *,int **,int*) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_27 (int *,int *,void**) ;
 int FUNC_28 (int *) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_29 (int ,int ,int,int) ;
 int FUNC_30 (int ,int ,char*,...) ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_31 (int ) ;
 int VAR_31 ;
 scalar_t__ FUNC_32 (scalar_t__) ;
 scalar_t__ VAR_32 ;
 int FUNC_33 (int) ;
 int VAR_33 ;
 int FUNC_34 (int ,float) ;
 int FUNC_35 (int ,int ,int,int) ;
 int FUNC_36 (int *,int) ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int FUNC_37 (scalar_t__) ;
 scalar_t__ VAR_36 ;
 int FUNC_38 () ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 float VAR_39 ;
 int FUNC_39 (char*) ;
 scalar_t__ FUNC_40 (char*,int ) ;
 int FUNC_41 (char*,...) ;
 char* FUNC_42 (char*) ;
 scalar_t__ FUNC_43 (char*,int ) ;

__attribute__((used)) static BOOL FUNC_44(DWORD VAR_40, uint64_t VAR_41, DWORD VAR_42, LPCSTR VAR_43, LPCSTR VAR_44, DWORD VAR_45)
{
 BOOL VAR_46 = VAR_10, VAR_47 = VAR_10;
 HRESULT VAR_48;
 ULONG VAR_49;
 IVdsServiceLoader *VAR_50;
 IVdsService *VAR_51;
 IEnumVdsObject *VAR_52;
 IUnknown *VAR_53;
 char* VAR_54 = ((void*)0);
 WCHAR *VAR_55 = ((void*)0), *VAR_56 = FUNC_42(VAR_44), *VAR_57 = FUNC_42(VAR_43);

 if ((FUNC_40(VAR_43, VAR_15[VAR_13]) == 0) && !((VAR_37 == 0) && (VAR_38 == 0))) {
  FUNC_30(0, VAR_25, VAR_43, VAR_37, VAR_38);
 } else {
  FUNC_30(0, VAR_26, VAR_43);
 }
 FUNC_36(((void*)0), VAR_33);
 VAR_54 = FUNC_5(VAR_40, VAR_41, VAR_33, VAR_33);
 VAR_55 = FUNC_42(VAR_54);
 if (VAR_55 == ((void*)0)) {
  FUNC_41("Could not read volume name");
  VAR_16 = VAR_7 | FUNC_4(VAR_9) | VAR_5;
  goto out;
 }


 FUNC_7(FUNC_1(((void*)0), VAR_4));
 FUNC_7(FUNC_2(((void*)0), -1, ((void*)0), ((void*)0), VAR_29,
  VAR_30, ((void*)0), 0, ((void*)0)));


 VAR_48 = FUNC_0(&VAR_3, ((void*)0), VAR_1 | VAR_2,
  &VAR_19, (void **)&VAR_50);
 if (VAR_48 != VAR_32) {
  FUNC_37(VAR_48);
  FUNC_41("Could not create VDS Loader Instance: %s", FUNC_38());
  goto out;
 }


 VAR_48 = FUNC_16(VAR_50, L"", &VAR_51);
 FUNC_17(VAR_50);
 if (VAR_48 != VAR_32) {
  FUNC_37(VAR_48);
  FUNC_41("Could not load VDS Service: %s", FUNC_38());
  goto out;
 }


 VAR_48 = FUNC_19(VAR_51);
 if (VAR_48 != VAR_32) {
  FUNC_37(VAR_48);
  FUNC_41("VDS Service is not ready: %s", FUNC_38());
  goto out;
 }


 VAR_48 = FUNC_18(VAR_51, VAR_35, &VAR_52);
 if (VAR_48 != VAR_32) {
  FUNC_37(VAR_48);
  FUNC_41("Could not query VDS Service Providers: %s", FUNC_38());
  goto out;
 }

 while (FUNC_6(VAR_52, 1, &VAR_53, &VAR_49) == VAR_32) {
  IVdsProvider *VAR_58;
  IVdsSwProvider *VAR_59;
  IEnumVdsObject *VAR_60;
  IUnknown *VAR_61;
  VAR_0;


  VAR_48 = FUNC_9(VAR_53, &VAR_18, (void **)&VAR_58);
  FUNC_10(VAR_53);
  if (VAR_48 != VAR_32) {
   FUNC_37(VAR_48);
   FUNC_41("Could not get VDS Provider: %s", FUNC_38());
   goto out;
  }


  VAR_48 = FUNC_20(VAR_58, &VAR_20, (void **)&VAR_59);
  FUNC_15(VAR_58);
  if (VAR_48 != VAR_32) {
   FUNC_37(VAR_48);
   FUNC_41("Could not get VDS Software Provider: %s", FUNC_38());
   goto out;
  }


  VAR_48 = FUNC_21(VAR_59, &VAR_60);
  FUNC_22(VAR_59);
  if (VAR_48 != VAR_32) {
   FUNC_37(VAR_48);
   FUNC_41("Could not get VDS Software Provider Packs: %s", FUNC_38());
   goto out;
  }


  while (FUNC_6(VAR_60, 1, &VAR_61, &VAR_49) == VAR_32) {
   IVdsPack *VAR_62;
   IEnumVdsObject *VAR_63;
   IUnknown *VAR_64;
   VAR_0;

   VAR_48 = FUNC_9(VAR_61, &VAR_17, (void **)&VAR_62);
   FUNC_10(VAR_61);
   if (VAR_48 != VAR_32) {
    FUNC_37(VAR_48);
    FUNC_41("Could not query VDS Software Provider Pack: %s", FUNC_38());
    goto out;
   }


   VAR_48 = FUNC_14(VAR_62, &VAR_63);
   if (VAR_48 != VAR_32) {
    FUNC_37(VAR_48);
    FUNC_41("Could not query VDS volumes: %s", FUNC_38());
    goto out;
   }


   while (FUNC_6(VAR_63, 1, &VAR_64, &VAR_49) == VAR_32) {
    BOOL VAR_65;
    HRESULT VAR_66 = VAR_8;
    VDS_VOLUME_PROP VAR_67;
    LPWSTR *VAR_68;
    ULONG VAR_69, VAR_70;
    USHORT VAR_71 = 0;
    IVdsVolume *VAR_72;
    IVdsAsync* VAR_73;
    IVdsVolumeMF3 *VAR_74;
    VAR_0;


    VAR_48 = FUNC_9(VAR_64, &VAR_21, (void **)&VAR_72);
    if (VAR_48 != VAR_32) {
     FUNC_37(VAR_48);
     FUNC_41("Could not query VDS Volume Interface: %s", FUNC_38());
     goto out;
    }

    VAR_48 = FUNC_26(VAR_72, &VAR_67);
    if ((VAR_48 != VAR_32) && (VAR_48 != VAR_36)) {
     FUNC_37(VAR_48);
     FUNC_28(VAR_72);
     FUNC_41("Could not query VDS Volume Properties: %s", FUNC_38());
     continue;
    }
    FUNC_3(VAR_67.pwszName);


    VAR_48 = FUNC_27(VAR_72, &VAR_22, (void **)&VAR_74);
    FUNC_28(VAR_72);
    if (VAR_48 != VAR_32) {
     FUNC_37(VAR_48);
     FUNC_41("Could not access VDS VolumeMF3 interface: %s", FUNC_38());
     continue;
    }


    VAR_48 = FUNC_24(VAR_74, &VAR_68, &VAR_70);
    if (VAR_48 != VAR_32) {
     FUNC_37(VAR_48);
     FUNC_41("Could not query VDS VolumeGuidPathnames: %s", FUNC_38());
     continue;
    }

    if (VAR_70 > 1)
     FUNC_41("Notice: Volume %S has more than one GUID...", VAR_68[0]);

    VAR_65 = (FUNC_43(VAR_55, VAR_68[0]) == 0);
    FUNC_3(VAR_68);
    if (!VAR_65)
     continue;

    VAR_47 = VAR_33;
    if (FUNC_40(VAR_44, VAR_15[VAR_14]) == 0)
     VAR_71 = FUNC_31(VAR_31);
    if (VAR_42 < 0x200) {
     VAR_42 = 0;
     FUNC_41("Using default cluster size");
    } else {
     FUNC_41("Using cluster size: %d bytes", VAR_42);
    }
    VAR_39 = 0.0f;
    FUNC_41("%s format was selected", (VAR_45 & VAR_12) ? "Quick" : "Slow");
    if (VAR_45 & VAR_11)
     FUNC_41("NTFS compression is enabled");

    VAR_48 = FUNC_23(VAR_74, VAR_57, VAR_71, VAR_42, VAR_56, VAR_45, &VAR_73);
    while (FUNC_32(VAR_48)) {
     if (FUNC_8(VAR_16)) {
      FUNC_11(VAR_73);
      break;
     }
     VAR_48 = FUNC_12(VAR_73, &VAR_66, &VAR_69);
     if (FUNC_32(VAR_48)) {
      if (VAR_45 & VAR_12) {

       FUNC_29(0, VAR_24, (VAR_69 < 100) ? 1 : 2, 2);
       FUNC_34(VAR_27, (float)VAR_69);
      } else {
       FUNC_35(VAR_28, VAR_23, VAR_69, 100);
      }
      VAR_48 = VAR_66;
      if (VAR_48 == VAR_32)
       break;
      if (VAR_48 == VAR_34)
       VAR_48 = VAR_32;
     }
     FUNC_33(500);
    }
    if (!FUNC_32(VAR_48)) {
     FUNC_37(VAR_48);
     FUNC_41("Could not format drive: %s", FUNC_38());
     goto out;
    }

    FUNC_13(VAR_73);
    FUNC_25(VAR_74);

    if (!FUNC_8(VAR_16)) {
     FUNC_41("Format completed.");
     VAR_46 = VAR_33;
    }
    goto out;
   }
  }
 }

out:
 if ((!VAR_47) && (VAR_16 == 0))
  VAR_16 = VAR_7 | FUNC_4(VAR_9) | VAR_6;
 FUNC_39(VAR_54);
 FUNC_39(VAR_55);
 FUNC_39(VAR_56);
 FUNC_39(VAR_57);
 return VAR_46;
}
