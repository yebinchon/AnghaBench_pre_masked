
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tomoyo_profile {size_t default_config; size_t* config; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char** VAR_6 ;
 int FUNC_4 (char const*,char*) ;
 size_t* VAR_7 ;
 char** VAR_8 ;
 char** VAR_9 ;
 scalar_t__ FUNC_5 (char**,char*) ;

__attribute__((used)) static int FUNC_6(char *VAR_10, const char *VAR_11,
      struct tomoyo_profile *VAR_12)
{
 u8 VAR_13;
 u8 VAR_14;

 if (!FUNC_0(VAR_10, "CONFIG")) {
  VAR_13 = VAR_5 + VAR_4;
  VAR_14 = VAR_12->default_config;
 } else if (FUNC_5(&VAR_10, "CONFIG::")) {
  VAR_14 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_5
        + VAR_4; VAR_13++) {
   int VAR_15 = 0;

   if (VAR_13 < VAR_5) {
    const u8 VAR_16 = VAR_7[VAR_13];
    const char *VAR_17 =
     VAR_6[VAR_16];

    VAR_15 = FUNC_1(VAR_17);
    if (FUNC_2(VAR_10, VAR_17, VAR_15) ||
        VAR_10[VAR_15++] != ':' || VAR_10[VAR_15++] != ':')
     continue;
   }
   if (FUNC_0(VAR_10 + VAR_15, VAR_8[VAR_13]))
    continue;
   VAR_14 = VAR_12->config[VAR_13];
   break;
  }
  if (VAR_13 == VAR_5 + VAR_4)
   return -VAR_0;
 } else {
  return -VAR_0;
 }
 if (FUNC_3(VAR_11, "use_default")) {
  VAR_14 = VAR_1;
 } else {
  u8 VAR_18;

  for (VAR_18 = 0; VAR_18 < 4; VAR_18++)
   if (FUNC_3(VAR_11, VAR_9[VAR_18]))




    VAR_14 = (VAR_14 & ~7) | VAR_18;
  if (VAR_14 != VAR_1) {
   switch (FUNC_4(VAR_11, "grant_log")) {
   case 1:
    VAR_14 |= VAR_2;
    break;
   case 0:
    VAR_14 &= ~VAR_2;
    break;
   }
   switch (FUNC_4(VAR_11, "reject_log")) {
   case 1:
    VAR_14 |= VAR_3;
    break;
   case 0:
    VAR_14 &= ~VAR_3;
    break;
   }
  }
 }
 if (VAR_13 < VAR_5 + VAR_4)
  VAR_12->config[VAR_13] = VAR_14;
 else if (VAR_14 != VAR_1)
  VAR_12->default_config = VAR_14;
 return 0;
}
