
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,...) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(const char **VAR_15)
{
 DWORD VAR_16 = VAR_9;
 DWORD VAR_17;

 while (VAR_15 && *VAR_15) {
  if (!FUNC_4(*VAR_15, "/a") ||
   !FUNC_4(*VAR_15, "/auto")) {

   if (VAR_16 != VAR_9) {
    FUNC_1(VAR_3, *VAR_15);
    return VAR_10;
   }

   VAR_16 = VAR_7;
  }
  else if (!FUNC_4(*VAR_15, "/m") ||
   !FUNC_4(*VAR_15, "/manual")) {

   if (VAR_16 != VAR_9) {
    FUNC_1(VAR_3, *VAR_15);
    return VAR_10;
   }

   VAR_16 = VAR_8;
  }
  else {
   FUNC_1(VAR_6, *VAR_15);
   FUNC_1(VAR_4, VAR_14);
   return VAR_10;
  }

  VAR_15++;
 }

 if (VAR_16 == VAR_9) {

  FUNC_1(VAR_4, VAR_14);
  return VAR_10;
 }



 if (VAR_13 == VAR_11) {
  FUNC_1(VAR_5);
  return VAR_10;
 }



 if (FUNC_0() != VAR_12) {
  return VAR_10;
 }



 VAR_17 = FUNC_3(VAR_16);

 if (VAR_17 != VAR_0) {
  FUNC_1(VAR_1);
  FUNC_5("%s", FUNC_2(VAR_17));
  return VAR_10;
 }



 FUNC_1(VAR_2);

 return VAR_12;
}
