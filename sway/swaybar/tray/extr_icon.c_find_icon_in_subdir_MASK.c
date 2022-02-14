
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extensions ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,size_t,char*,char*,char*,char*,char*,...) ;

__attribute__((used)) static char *FUNC_4(char *VAR_1, char *VAR_2, char *VAR_3,
  char *VAR_4) {
 static const char *VAR_5[] = {



  "png",



 };

 size_t VAR_6 = FUNC_3(((void*)0), 0, "%s/%s/%s/%s.EXT", VAR_2, VAR_3,
   VAR_4, VAR_1) + 1;
 char *VAR_7 = FUNC_2(VAR_6);

 for (size_t VAR_8 = 0; VAR_8 < sizeof(VAR_5) / sizeof(*VAR_5); ++VAR_8) {
  FUNC_3(VAR_7, VAR_6, "%s/%s/%s/%s.%s", VAR_2, VAR_3, VAR_4,
    VAR_1, VAR_5[VAR_8]);
  if (FUNC_0(VAR_7, VAR_0) == 0) {
   return VAR_7;
  }
 }

 FUNC_1(VAR_7);
 return ((void*)0);
}
