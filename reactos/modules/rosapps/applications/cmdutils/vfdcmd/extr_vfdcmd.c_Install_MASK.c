
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,...) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (char const*,scalar_t__) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,char*) ;

int FUNC_6(const char **VAR_15)
{
 const char *VAR_16 = ((void*)0);
 DWORD VAR_17 = VAR_9;

 DWORD VAR_18;



 while (VAR_15 && *VAR_15) {

  if (!FUNC_4(*VAR_15, "/a") ||
   !FUNC_4(*VAR_15, "/auto")) {

   if (VAR_17 != VAR_9) {
    FUNC_0(VAR_2, *VAR_15);
    return VAR_10;
   }
   VAR_17 = VAR_8;
  }
  else if (**VAR_15 == '/') {
   FUNC_0(VAR_7, *VAR_15);
   FUNC_0(VAR_4, VAR_14);
   return VAR_10;
  }
  else {
   if (VAR_16) {
    FUNC_0(VAR_2, "path");
    return VAR_10;
   }

   VAR_16 = *VAR_15;
  }

  VAR_15++;
 }



 if (VAR_13 != VAR_11) {
  FUNC_0(VAR_1);
  return VAR_10;
 }



 VAR_18 = FUNC_3(
  VAR_16,
  VAR_17);

 if (VAR_18 != VAR_0) {
  FUNC_0(VAR_5);
  FUNC_5("%s", FUNC_1(VAR_18));
  return VAR_10;
 }



 VAR_18 = FUNC_2(&VAR_13);

 if (VAR_18 != VAR_0) {
  FUNC_0(VAR_3);
  FUNC_5("%s", FUNC_1(VAR_18));
  return VAR_10;
 }



 FUNC_0(VAR_6);

 return VAR_12;
}
