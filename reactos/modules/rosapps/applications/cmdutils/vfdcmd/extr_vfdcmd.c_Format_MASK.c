
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*) ;
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
 int FUNC_4 (int ,...) ;
 scalar_t__ VAR_19 ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (char const*,char*) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_11 (char const) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char const) ;

int FUNC_14(const char **VAR_27)
{
 int VAR_28 = VAR_16;
 ULONG VAR_29 = VAR_20;
 HANDLE VAR_30;
 DWORD VAR_31;



 while (VAR_27 && *VAR_27) {

  if (!FUNC_10(*VAR_27, "/f") ||
   !FUNC_10(*VAR_27, "/force")) {

   if (VAR_28 != VAR_16) {
    FUNC_4(VAR_4, *VAR_27);
    return VAR_22;
   }

   VAR_28 = VAR_17;
  }
  else if (!FUNC_10(*VAR_27, "/q") ||
   !FUNC_10(*VAR_27, "/quit")) {

   if (VAR_28 != VAR_16) {
    FUNC_4(VAR_4, *VAR_27);
    return VAR_22;
   }

   VAR_28 = VAR_18;
  }
  else if (FUNC_11(**VAR_27)) {
   if (VAR_29 != VAR_20) {
    FUNC_4(VAR_4, *VAR_27);
    return VAR_22;
   }

   VAR_29 = FUNC_13(**VAR_27);
  }
  else {
   FUNC_4(VAR_15, *VAR_27);
   FUNC_4(VAR_9, VAR_26);
   return VAR_22;
  }

  VAR_27++;
 }

 if (VAR_29 == VAR_20) {
  VAR_29 = '0';
  FUNC_4(VAR_14, VAR_29);
 }



 if (VAR_25 == VAR_23) {
  FUNC_4(VAR_11);
  return VAR_22;
 }



 if (FUNC_0() != VAR_24) {
  return VAR_22;
 }



 if (VAR_25 != VAR_19) {
  FUNC_4(VAR_12);
  return VAR_22;
 }



 VAR_30 = FUNC_9(VAR_29);

 if (VAR_30 == VAR_2) {
  VAR_31 = FUNC_2();
  FUNC_4(VAR_3, VAR_29);
  FUNC_12("%s", FUNC_5(VAR_31));
  return VAR_22;
 }



 VAR_31 = FUNC_8(VAR_30);

 if (VAR_31 != VAR_1) {
  FUNC_4(VAR_6, VAR_29);
  FUNC_12("%s", FUNC_5(VAR_31));

  FUNC_1(VAR_30);
  return VAR_22;
 }



retry:
 VAR_31 = FUNC_6(
  VAR_30, (VAR_28 == VAR_17));

 if (VAR_31 == VAR_0) {

  FUNC_4(VAR_10, VAR_29);

  if (VAR_28 == VAR_17) {
   FUNC_4(VAR_5);
  }
  else if (VAR_28 == VAR_18) {
   FUNC_4(VAR_8);
   FUNC_1(VAR_30);
   return VAR_22;
  }
  else {
   int VAR_32 = FUNC_3(VAR_13, "rfc");

   if (VAR_32 == 'r') {
    goto retry;
   }
   else if (VAR_32 == 'f') {
    FUNC_6(VAR_30, VAR_21);
   }
   else {
    FUNC_1(VAR_30);
    return VAR_22;
   }
  }
 }
 else if (VAR_31 != VAR_1) {
  FUNC_4(VAR_10, VAR_29);
  FUNC_1(VAR_30);
  return VAR_22;
 }

 VAR_31 = FUNC_7(VAR_30);

 FUNC_1(VAR_30);

 if (VAR_31 != VAR_1) {
  FUNC_4(VAR_6, VAR_29);
  FUNC_12("%s", FUNC_5(VAR_31));
  return VAR_22;
 }



 FUNC_4(VAR_7);

 return VAR_24;
}
