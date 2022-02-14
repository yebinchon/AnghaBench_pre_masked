
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t,char*,char*,char const*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static inline bool FUNC_5(const char *VAR_1, char *VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 size_t VAR_5, VAR_6;
 size_t VAR_7 = 0;

 VAR_3 = FUNC_4(VAR_1, '/');
 if (VAR_3)
  VAR_7 = FUNC_2(VAR_3);

 VAR_4 = FUNC_0("APP_ABI");
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_2(VAR_4);

 if (!FUNC_3(VAR_1, "/data/app-lib", 13)) {
  char *VAR_8;

  if (!VAR_5)
   return 0;

  VAR_6 = 7 + VAR_5 + VAR_7;

  VAR_8 = FUNC_0("APK_PATH");
  if (VAR_8) {
   VAR_6 += FUNC_2(VAR_8) + 1;
   if (VAR_6 > VAR_0)
    return 0;
   FUNC_1(VAR_2, VAR_6,
     "%s/libs/%s/%s", VAR_8, VAR_4, VAR_3);
  } else {
   if (VAR_6 > VAR_0)
    return 0;
   FUNC_1(VAR_2, VAR_6,
     "libs/%s/%s", VAR_4, VAR_3);
  }
  return 1;
 }

 if (!FUNC_3(VAR_1, "/system/lib/", 11)) {
  char *VAR_9, *VAR_10;
  const char *VAR_11;
  size_t VAR_12;
  size_t VAR_13;

  VAR_9 = FUNC_0("NDK_ROOT");
  VAR_10 = FUNC_0("APP_PLATFORM");

  if (!(VAR_9 && VAR_10))
   return 0;

  VAR_12 = FUNC_2(VAR_9);
  VAR_13 = FUNC_2(VAR_10);

  if (!(VAR_12 && VAR_13 && VAR_5))
   return 0;

  VAR_11 = !FUNC_3(VAR_4, "arm", 3) ? "arm" :
         !FUNC_3(VAR_4, "mips", 4) ? "mips" :
         !FUNC_3(VAR_4, "x86", 3) ? "x86" : ((void*)0);

  if (!VAR_11)
   return 0;

  VAR_6 = 27 + VAR_12 +
        VAR_13 + VAR_7
      + FUNC_2(VAR_11);

  if (VAR_6 > VAR_0)
   return 0;
  FUNC_1(VAR_2, VAR_6,
   "%s/platforms/%s/arch-%s/usr/lib/%s",
   VAR_9, VAR_10, VAR_11, VAR_3);

  return 1;
 }
 return 0;
}
