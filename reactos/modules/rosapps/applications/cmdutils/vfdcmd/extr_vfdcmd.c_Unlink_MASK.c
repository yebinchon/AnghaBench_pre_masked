
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,...) ;
 scalar_t__ VAR_9 ;
 char* FUNC_5 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (scalar_t__,int*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ) ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_10 (char const) ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(const char **VAR_17)
{
 ULONG VAR_18 = VAR_10;
 ULONG VAR_19 = VAR_10;
 HANDLE VAR_20;
 DWORD VAR_21;

 while (VAR_17 && *VAR_17) {
  if ((FUNC_10(**VAR_17) || **VAR_17 == '*') &&
   (*(*VAR_17 + 1) == ':' || *(*VAR_17 + 1) == '\0')) {

   if (VAR_18 != VAR_10) {
    FUNC_4(VAR_3, *VAR_17);
    return VAR_12;
   }

   if (**VAR_17 == '*') {
    VAR_18 = '0';
    VAR_19 = '0' + VAR_11;
   }
   else {
    VAR_18 = **VAR_17;
    VAR_19 = VAR_18 + 1;
   }
  }
  else {
   FUNC_4(VAR_8, *VAR_17);
   FUNC_4(VAR_4, VAR_16);
   return VAR_12;
  }

  VAR_17++;
 }

 if (VAR_18 == VAR_10) {

  VAR_18 = '0';
  VAR_19 = '1';
  FUNC_4(VAR_7, VAR_18);
 }



 if (VAR_15 == VAR_13) {
  FUNC_4(VAR_5);
  return VAR_12;
 }



 if (FUNC_0() != VAR_14) {
  return VAR_12;
 }



 if (VAR_15 != VAR_9) {
  FUNC_4(VAR_6);
  return VAR_12;
 }

 while (VAR_18 < VAR_19) {
  ULONG VAR_22;

  VAR_20 = FUNC_7(VAR_18);

  if (VAR_20 == VAR_1) {
   VAR_21 = FUNC_2();
   FUNC_4(VAR_2, VAR_18);
   FUNC_11("%s", FUNC_5(VAR_21));
   VAR_18++;
   continue;
  }

  VAR_21 = FUNC_6(VAR_20, &VAR_22);

  if (VAR_21 != VAR_0) {
   FUNC_4(VAR_2, VAR_18);
   FUNC_11("%s", FUNC_5(VAR_21));
   FUNC_1(VAR_20);
   VAR_18++;
   continue;
  }

  FUNC_8(VAR_20, 0);
  FUNC_9(VAR_20, 0);

  FUNC_3(VAR_20, VAR_22);

  FUNC_1(VAR_20);

  VAR_18++;
 }

 return VAR_14;
}
