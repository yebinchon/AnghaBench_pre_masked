
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;

void FUNC_5(const char *VAR_3)
{
 if (VAR_3)
  FUNC_1(VAR_2, VAR_1, "%s", VAR_3);


 if (VAR_2[0] == '\0') {
  char *VAR_4 = FUNC_0("HOME");

  if (VAR_4) {
   FUNC_3(VAR_2, VAR_1, "%s/%s",
     VAR_4, VAR_0);
  } else {
   FUNC_4(VAR_2, VAR_0, VAR_1-1);
  }
  VAR_2[VAR_1-1] = '\0';
 }

 FUNC_2("PERF_BUILDID_DIR", VAR_2, 1);
}
