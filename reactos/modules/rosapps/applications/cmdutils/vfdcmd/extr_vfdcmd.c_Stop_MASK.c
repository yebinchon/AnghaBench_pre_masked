
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (char const**) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,...) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 char* FUNC_3 (scalar_t__) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_4 (scalar_t__*) ;
 int FUNC_5 (char const*,char*) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(const char **VAR_23)
{
 int VAR_24 = VAR_13;
 const char *VAR_25[] = { "*", ((void*)0), ((void*)0) };
 DWORD VAR_26;

 while (VAR_23 && *VAR_23) {
  if (!FUNC_5(*VAR_23, "/f") ||
   !FUNC_5(*VAR_23, "/force")) {

   if (VAR_24 != VAR_13) {
    FUNC_2(VAR_1, *VAR_23);
    return VAR_18;
   }

   VAR_24 = VAR_14;


   VAR_25[1] = *VAR_23;
  }
  else if (!FUNC_5(*VAR_23, "/q") ||
   !FUNC_5(*VAR_23, "/quit")) {

   if (VAR_24 != VAR_13) {
    FUNC_2(VAR_1, *VAR_23);
    return VAR_18;
   }

   VAR_24 = VAR_15;


   VAR_25[1] = *VAR_23;
  }
  else {
   FUNC_2(VAR_12, *VAR_23);
   FUNC_2(VAR_2, VAR_22);
   return VAR_18;
  }

  VAR_23++;
 }



 if (VAR_21 == VAR_19) {
  FUNC_2(VAR_3);
  return VAR_18;
 }



 if (VAR_21 == VAR_17) {
  FUNC_2(VAR_4);
  return VAR_18;
 }



 if (VAR_21 == VAR_16) {



  while (FUNC_0(VAR_25) != VAR_20) {



   if (VAR_24 == VAR_14) {
    FUNC_2(VAR_6);
    break;
   }
   else if (VAR_24 == VAR_15) {
    FUNC_2(VAR_10);
    return VAR_18;
   }
   else {
    int VAR_27;

    FUNC_2(VAR_11);

    VAR_27 = FUNC_1(VAR_5, "rfc");

    if (VAR_27 == 'f') {
     break;
    }
    else if (VAR_27 == 'c') {
     return VAR_18;
    }
   }
  }
 }



 VAR_26 = FUNC_4(&VAR_21);

 if (VAR_26 != VAR_0) {
  FUNC_2(VAR_7);
  FUNC_6("%s", FUNC_3(VAR_26));
  return VAR_18;
 }

 if (VAR_21 != VAR_17) {
  FUNC_2(VAR_9);
  return VAR_18;
 }



 FUNC_2(VAR_8);

 return VAR_20;
}
