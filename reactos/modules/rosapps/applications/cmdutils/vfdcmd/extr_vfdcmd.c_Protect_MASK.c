
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
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
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ,...) ;
 scalar_t__ VAR_17 ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_9 (char const) ;
 int FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (char const) ;

int FUNC_12(const char **VAR_24)
{



 ULONG VAR_25 = 0;
 ULONG VAR_26 = VAR_18;
 HANDLE VAR_27;
 DWORD VAR_28;



 while (VAR_24 && *VAR_24) {



  if (FUNC_8(*VAR_24, "/on") == 0) {

   if (VAR_25) {
    FUNC_3(VAR_4, *VAR_24);
    return VAR_19;
   }

   VAR_25 = 1;
  }
  else if (FUNC_8(*VAR_24, "/off") == 0) {

   if (VAR_25) {
    FUNC_3(VAR_4, *VAR_24);
    return VAR_19;
   }

   VAR_25 = 2;
  }
  else if (FUNC_9(**VAR_24)) {

   if (VAR_26 != VAR_18) {
    FUNC_3(VAR_4, *VAR_24);
    return VAR_19;
   }

   VAR_26 = FUNC_11(**VAR_24);
  }
  else {
   FUNC_3(VAR_13, *VAR_24);
   FUNC_3(VAR_6, VAR_23);
   return VAR_19;
  }

  VAR_24++;
 }

 if (VAR_26 == VAR_18) {
  VAR_26 = '0';
  FUNC_3(VAR_12, VAR_26);
 }



 if (VAR_22 == VAR_20) {
  FUNC_3(VAR_9);
  return VAR_19;
 }



 if (FUNC_0() != VAR_21) {
  return VAR_19;
 }



 if (VAR_22 != VAR_17) {
  FUNC_3(VAR_10);
  return VAR_19;
 }



 VAR_27 = FUNC_6(VAR_26);

 if (VAR_27 == VAR_2) {
  VAR_28 = FUNC_2();
  FUNC_3(VAR_3, VAR_26);
  FUNC_10("%s", FUNC_4(VAR_28));
  return VAR_19;
 }

 if (VAR_25) {


  VAR_28 = FUNC_7(
   VAR_27, (VAR_25 == 1));

  if (VAR_28 != VAR_0) {
   FUNC_3(VAR_11, VAR_26);
   FUNC_10("%s", FUNC_4(VAR_28));

   FUNC_1(VAR_27);
   return VAR_19;
  }
 }



 VAR_28 = FUNC_5(VAR_27);

 FUNC_1(VAR_27);

 if (VAR_28 == VAR_0) {
  FUNC_3(VAR_8);
 }
 else if (VAR_28 == VAR_1) {
  FUNC_3(VAR_7);
 }
 else {
  FUNC_3(VAR_5);
  FUNC_10("%s", FUNC_4(VAR_28));
  return VAR_19;
 }

 return VAR_21;
}
