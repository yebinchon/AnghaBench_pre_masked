
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file_desc ;
typedef scalar_t__ VFD_MEDIA ;
typedef int VFD_FLAGS ;
typedef int VFD_FILETYPE ;
typedef scalar_t__ VFD_DISKTYPE ;
typedef scalar_t__ ULONG ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ CHAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,...) ;
 char* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,scalar_t__*,scalar_t__*,int*,int *,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,int,int ,scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,...) ;

void FUNC_9(
 HANDLE VAR_18)
{
 ULONG VAR_19;
 CHAR VAR_20[VAR_1];
 CHAR VAR_21[VAR_1];
 VFD_DISKTYPE VAR_22;
 VFD_MEDIA VAR_23;
 VFD_FLAGS VAR_24;
 VFD_FILETYPE VAR_25;
 ULONG VAR_26;
 DWORD VAR_27;

 FUNC_8("\n");



 VAR_27 = FUNC_4(VAR_18, &VAR_19);

 if (VAR_27 != VAR_0) {
  FUNC_2(VAR_7);
  FUNC_8("%s", FUNC_3(VAR_27));
  VAR_19 = (ULONG)-1;
 }



 FUNC_1(VAR_18, VAR_19);



 VAR_27 = FUNC_5(VAR_18, VAR_20, &VAR_22,
  &VAR_23, &VAR_24, &VAR_25, &VAR_26);

 if (VAR_27 != VAR_0) {
  FUNC_2(VAR_6);
  FUNC_8("%s", FUNC_3(VAR_27));
  return;
 }


 if (VAR_23 == VAR_17) {
  FUNC_2(VAR_9);
  return;
 }

 if (VAR_20[0]) {
  FUNC_2(VAR_8, VAR_20);

  FUNC_6(VAR_21, sizeof(VAR_21),
   VAR_25, VAR_26, FUNC_0(VAR_20));
 }
 else {
  FUNC_2(VAR_8, "<RAM>");

  FUNC_6(VAR_21, sizeof(VAR_21),
   VAR_14, VAR_26, 0);
 }

 FUNC_2(VAR_5, VAR_21);

 if (VAR_22 == VAR_13) {
  FUNC_2(VAR_2);
 }
 else {
  if (VAR_24 & VAR_15) {
   FUNC_2(VAR_4);
  }
  else {
   FUNC_2(VAR_3);
  }
 }



 FUNC_2(VAR_11, FUNC_7(VAR_23));

 if (VAR_24 & VAR_16) {
  FUNC_2(VAR_10);
 }
 else {
  FUNC_2(VAR_12);
 }
}
