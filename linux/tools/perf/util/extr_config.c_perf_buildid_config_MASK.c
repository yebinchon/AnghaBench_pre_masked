
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const char *VAR_3)
{

 if (!FUNC_2(VAR_2, "buildid.dir")) {
  const char *VAR_4 = FUNC_0(VAR_2, VAR_3);

  if (!VAR_4) {
   FUNC_1("Invalid buildid directory!\n");
   return -1;
  }
  FUNC_3(VAR_1, VAR_4, VAR_0-1);
  VAR_1[VAR_0-1] = '\0';
 }

 return 0;
}
