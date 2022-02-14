
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TCHAR ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,...) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const**) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ FUNC_8 (int *,scalar_t__*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,scalar_t__*) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_30 ;
 int FUNC_13 (char*,...) ;

int FUNC_14(const char **VAR_31)
{
 HANDLE VAR_32;
 TCHAR VAR_33[VAR_2];
 DWORD VAR_34;
 DWORD VAR_35;
 ULONG VAR_36;
 DWORD VAR_37;

 FUNC_7(VAR_31);

 if (VAR_30 == VAR_28) {
  FUNC_5(VAR_9);
 }
 else {



  VAR_37 = FUNC_10(VAR_33, &VAR_34);

  if (VAR_37 != VAR_0) {
   FUNC_5(VAR_7);
   FUNC_13("%s", FUNC_6(VAR_37));
   return VAR_27;
  }



  FUNC_5(VAR_4, VAR_33);


  VAR_35 = 0;

  if (VAR_30 == 132) {

   VAR_32 = FUNC_12(0);

   if (VAR_32 != VAR_1) {
    VAR_37 = FUNC_11(VAR_32, &VAR_35);

    FUNC_0(VAR_32);
   }

  }

  if (VAR_35 == 0) {
   VAR_37 = FUNC_8(VAR_33, &VAR_35);
  }

  if (VAR_37 == VAR_0) {
   FUNC_5(VAR_6,
    FUNC_2(VAR_35) & 0x7fff,
    FUNC_3(VAR_35),
    (VAR_35 & 0x80000000) ? "(debug)" : "");
  }
  else {
   FUNC_5(VAR_8);
   FUNC_13("%s", FUNC_6(VAR_37));
  }




  FUNC_5(VAR_17);

  switch (VAR_34) {
  case 139:
   FUNC_5(VAR_12);
   break;

  case 138:
   FUNC_5(VAR_13);
   break;

  case 136:
   FUNC_5(VAR_14);
   break;

  case 135:
   FUNC_5(VAR_15);
   break;

  case 128 :
   FUNC_5(VAR_16);
   break;

  default:
   FUNC_5(VAR_25, VAR_34);
   break;
  }



  FUNC_5(VAR_5);

  switch (VAR_30) {
  case 130:
   FUNC_5(VAR_23);
   break;

  case 131:
   FUNC_5(VAR_22);
   break;

  case 129:
   FUNC_5(VAR_24);
   break;

  case 132:
   FUNC_5(VAR_21);
   break;

  case 137:
   FUNC_5(VAR_18);
   break;

  case 133:
   FUNC_5(VAR_20);
   break;

  case 134:
   FUNC_5(VAR_19);
   break;

  default:
   FUNC_5(VAR_25, VAR_30);
   break;
  }
 }



 FUNC_13("\n");

 if (FUNC_9() == VAR_0) {
  FUNC_5(VAR_11);
 }
 else {
  FUNC_5(VAR_10);
 }



 if (VAR_30 != 132) {
  return VAR_29;
 }



 for (VAR_36 = 0; VAR_36 < VAR_26; VAR_36++) {
  HANDLE VAR_38 = FUNC_12(VAR_36);

  if (VAR_38 == VAR_1) {
   VAR_37 = FUNC_1();
   FUNC_5(VAR_3, VAR_36 + '0');
   FUNC_13("%s", FUNC_6(VAR_37));
   return VAR_27;
  }

  FUNC_4(VAR_38);

  FUNC_0(VAR_38);
 }

 return VAR_29;
}
