
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char const*,char const*,int,char*) ;
 int FUNC_1 (char*,size_t,char*,char const*,char const*,...) ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_5, const char *VAR_6, char *VAR_7, size_t VAR_8)
{
 bool VAR_9 = 0;

 while (FUNC_0("", VAR_5, "none", VAR_2 | VAR_3, ((void*)0))) {
  if (VAR_4 != VAR_0 || VAR_9) {
   FUNC_1(VAR_7, VAR_8,
     "mount --make-private %s failed: %s",
     VAR_5, FUNC_2(VAR_4));
   return -1;
  }

  if (FUNC_0(VAR_5, VAR_5, "none", VAR_1, ((void*)0))) {
   FUNC_1(VAR_7, VAR_8,
     "mount --bind %s %s failed: %s",
     VAR_5, VAR_5, FUNC_2(VAR_4));
   return -1;
  }

  VAR_9 = 1;
 }

 if (FUNC_0(VAR_6, VAR_5, VAR_6, 0, "mode=0700")) {
  FUNC_1(VAR_7, VAR_8, "mount -t %s %s %s failed: %s",
    VAR_6, VAR_6, VAR_5, FUNC_2(VAR_4));
  return -1;
 }

 return 0;
}
