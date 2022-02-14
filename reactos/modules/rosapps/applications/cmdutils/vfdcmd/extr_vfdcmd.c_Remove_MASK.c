
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
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
 int FUNC_1 (int ,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char const**) ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_5 (scalar_t__*) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (char const*,char*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_8 (char*,char*) ;

int FUNC_9(const char **VAR_22)
{
 int VAR_23 = VAR_13;
 const char *VAR_24[] = { ((void*)0), ((void*)0) };
 DWORD VAR_25;
 int VAR_26;



 while (VAR_22 && *VAR_22) {

  if (!FUNC_7(*VAR_22, "/f") ||
   !FUNC_7(*VAR_22, "/force")) {

   if (VAR_23 != VAR_13) {
    FUNC_1(VAR_1, *VAR_22);
    return VAR_17;
   }

   VAR_23 = VAR_14;
   VAR_24[0] = *VAR_22;
  }
  else if (!FUNC_7(*VAR_22, "/q") ||
   !FUNC_7(*VAR_22, "/quit")) {

   if (VAR_23 != VAR_13) {
    FUNC_1(VAR_1, *VAR_22);
    return VAR_17;
   }

   VAR_23 = VAR_15;
   VAR_24[0] = *VAR_22;
  }
  else {
   FUNC_1(VAR_12, *VAR_22);
   FUNC_1(VAR_3, VAR_21);
   return VAR_17;
  }

  VAR_22++;
 }



 if (VAR_20 == VAR_18) {
  FUNC_1(VAR_4);
  return VAR_17;
 }



 if (VAR_20 == VAR_16) {



  while (FUNC_3(VAR_24) != VAR_19) {



   if (VAR_23 == VAR_14) {
    FUNC_1(VAR_5);
    break;
   }
   else if (VAR_23 == VAR_15) {
    FUNC_1(VAR_9);
    return VAR_17;
   }
   else {
    int VAR_27;

    FUNC_1(VAR_10);

    VAR_27 = FUNC_0(VAR_11, "rfc");

    if (VAR_27 == 'f') {
     break;
    }
    else if (VAR_27 == 'c') {
     return VAR_17;
    }
   }
  }
 }



 VAR_25 = FUNC_6();

 if (VAR_25 != VAR_0) {
  FUNC_1(VAR_6);
  FUNC_8("%s", FUNC_4(VAR_25));
  return VAR_17;
 }



 for (VAR_26 = 0; VAR_26 < 10; VAR_26++) {

  VAR_25 = FUNC_5(&VAR_20);

  if (VAR_25 != VAR_0) {
   FUNC_1(VAR_2);
   FUNC_8("%s", FUNC_4(VAR_25));
   return VAR_17;
  }

  if (VAR_20 == VAR_18) {
   break;
  }

  FUNC_2(300);
 }

 if (VAR_20 != VAR_18) {
  FUNC_1(VAR_8);
  return VAR_17;
 }



 FUNC_1(VAR_7);

 return VAR_19;
}
