
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int release ;
struct TYPE_2__ {char* kbuild_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char**,char*,char const*,char const*,char const*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static int FUNC_4(char **VAR_5)
{
 const char *VAR_6 = VAR_4.kbuild_dir;
 const char *VAR_7 = "";
 const char *VAR_8 = "";


 char VAR_9[128];

 char *VAR_10;

 int VAR_11;

 if (!VAR_6) {
  VAR_11 = FUNC_2(((void*)0), VAR_9,
        sizeof(VAR_9));
  if (VAR_11)
   return -VAR_0;

  VAR_6 = VAR_9;
  VAR_7 = "/lib/modules/";
  VAR_8 = "/build";
 }

 VAR_11 = FUNC_1(&VAR_10, "%s%s%s/include/generated/autoconf.h",
         VAR_7, VAR_6, VAR_8);
 if (VAR_11 < 0)
  return -VAR_2;

 if (FUNC_0(VAR_10, VAR_3) == 0) {
  FUNC_3(VAR_10);

  VAR_11 = FUNC_1(VAR_5, "%s%s%s", VAR_7, VAR_6,
          VAR_8);
  if (VAR_11 < 0)
   return -VAR_2;
  return 0;
 }
 FUNC_3(VAR_10);
 return -VAR_1;
}
