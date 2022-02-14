
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef char const* PCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef scalar_t__ CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,...) ;
 scalar_t__ VAR_12 ;
 char* FUNC_5 (int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (scalar_t__,int*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (char const*,char*) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_12 (char const) ;
 scalar_t__ FUNC_13 (char const) ;
 int FUNC_14 (char*,char*) ;
 scalar_t__ FUNC_15 (int ) ;

int FUNC_16(const char **VAR_21)
{
 ULONG VAR_22 = VAR_13;
 ULONG VAR_23 = VAR_13;
 PCSTR VAR_24 = ((void*)0);
 BOOL VAR_25 = VAR_14;
 HANDLE VAR_26;
 DWORD VAR_27;

 while (VAR_21 && *VAR_21) {
  if (!FUNC_11(*VAR_21, "/g")) {
   VAR_25 = VAR_14;
  }
  else if (!FUNC_11(*VAR_21, "/l")) {
   VAR_25 = VAR_1;
  }
  else if (FUNC_13(**VAR_21) || **VAR_21 == '*') {
   if (VAR_22 != VAR_13) {
    FUNC_4(VAR_4, *VAR_21);
    return VAR_16;
   }

   if (**VAR_21 == '*') {
    VAR_22 = '0';
    VAR_23 = '0' + VAR_15;
   }
   else {
    VAR_22 = **VAR_21;
    VAR_23 = VAR_22 + 1;
   }
  }
  else if (FUNC_12(**VAR_21)) {
   if (VAR_24) {
    FUNC_4(VAR_4, *VAR_21);
    return VAR_16;
   }
   VAR_24 = *VAR_21;
  }
  else {
   FUNC_4(VAR_11, *VAR_21);
   FUNC_4(VAR_5, VAR_20);
   return VAR_16;
  }

  VAR_21++;
 }

 if (VAR_22 == VAR_13) {

  VAR_22 = '0';
  VAR_23 = '1';
  FUNC_4(VAR_10, VAR_22);
 }



 if (VAR_19 == VAR_17) {
  FUNC_4(VAR_8);
  return VAR_16;
 }



 if (FUNC_0() != VAR_18) {
  return VAR_16;
 }



 if (VAR_19 != VAR_12) {
  FUNC_4(VAR_9);
  return VAR_16;
 }

 while (VAR_22 < VAR_23) {
  ULONG VAR_28;
  CHAR VAR_29;

  VAR_26 = FUNC_8(VAR_22);

  if (VAR_26 == VAR_2) {
   VAR_27 = FUNC_2();
   FUNC_4(VAR_3, VAR_22);
   FUNC_14("%s", FUNC_5(VAR_27));
   VAR_22++;
   continue;
  }

  VAR_27 = FUNC_7(VAR_26, &VAR_28);

  if (VAR_27 != VAR_0) {
   FUNC_4(VAR_3, VAR_22);
   FUNC_14("%s", FUNC_5(VAR_27));
   FUNC_1(VAR_26);
   VAR_22++;
   continue;
  }

  if (VAR_24 && FUNC_12(*VAR_24)) {
   VAR_29 = (CHAR)FUNC_15(*(VAR_24++));
  }
  else {
   VAR_29 = FUNC_6();
  }

  if (VAR_29) {
   if (VAR_25) {
    VAR_27 = FUNC_9(VAR_26, VAR_29);
   }
   else {
    VAR_27 = FUNC_10(VAR_26, VAR_29);
   }

   if (VAR_27 != VAR_0) {
    FUNC_4(VAR_7, VAR_28, VAR_29);
    FUNC_14("%s", FUNC_5(VAR_27));
   }
  }
  else {
   FUNC_4(VAR_6);
  }

  FUNC_3(VAR_26, VAR_28);

  FUNC_1(VAR_26);

  VAR_22++;
 }

 return VAR_18;
}
