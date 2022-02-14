
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,...) ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int VAR_11 ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(const char **VAR_12)
{
 DWORD VAR_13;

 VAR_13 = FUNC_2();

 if (VAR_13 != VAR_2 &&
  VAR_13 != VAR_1 &&
  VAR_13 != VAR_0) {
  FUNC_0(VAR_3);
  FUNC_6("%s", FUNC_1(VAR_13));
  return VAR_9;
 }

 if (VAR_12 && *VAR_12) {
  if (FUNC_5(*VAR_12, "/on") == 0) {
   if (VAR_13 != VAR_2) {
    VAR_13 = FUNC_3();

    if (VAR_13 != VAR_2) {
     FUNC_0(VAR_5);
     FUNC_6("%s", FUNC_1(VAR_13));
     return VAR_9;
    }
   }
  }
  else if (FUNC_5(*VAR_12, "/off") == 0) {
   if (VAR_13 == VAR_2) {
    VAR_13 = FUNC_4();

    if (VAR_13 != VAR_2) {
     FUNC_0(VAR_5);
     FUNC_6("%s", FUNC_1(VAR_13));
     return VAR_9;
    }
   }
  }
  else {
   FUNC_0(VAR_8, *VAR_12);
   FUNC_0(VAR_4, VAR_11);
   return VAR_9;
  }

  VAR_13 = FUNC_2();
 }

 if (VAR_13 == VAR_1 ||
  VAR_13 == VAR_0) {
  FUNC_0(VAR_6);
 }
 else if (VAR_13 == VAR_2) {
  FUNC_0(VAR_7);
 }
 else {
  FUNC_0(VAR_3);
  FUNC_6("%s", FUNC_1(VAR_13));
  return VAR_9;
 }

 return VAR_10;
}
