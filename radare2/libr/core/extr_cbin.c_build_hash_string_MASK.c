
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut8 ;
typedef int ut32 ;
typedef int tmp ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char*,int *,int ) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(int VAR_0, const char *VAR_1, ut8 *VAR_2, ut32 VAR_3) {
 char *VAR_4 = ((void*)0), *VAR_5, *VAR_6 = ((void*)0);
 const char *VAR_7 = VAR_1;
 char VAR_8[128];
 int VAR_9;
 do {
  for (VAR_9 = 0; *VAR_7 && *VAR_7 != ',' && VAR_9 < sizeof (VAR_8) -1; VAR_9++) {
   VAR_8[VAR_9] = *VAR_7++;
  }
  VAR_8[VAR_9] = '\0';
  FUNC_6 (VAR_8);
  VAR_4 = FUNC_3 (((void*)0), VAR_8, VAR_2, VAR_3);
  if (!VAR_4) {
   if (*VAR_7 && *VAR_7 == ',') {
    VAR_7++;
   }
   continue;
  }
  if (FUNC_1 (VAR_0)) {
   VAR_5 = FUNC_5 ("%s ", VAR_4);
  } else if (FUNC_0 (VAR_0)) {
   VAR_5 = FUNC_5 ("\"%s\":\"%s\",", VAR_8, VAR_4);
  } else {
   VAR_5 = FUNC_5 ("%s=%s ", VAR_8, VAR_4);
  }
  VAR_6 = FUNC_4 (VAR_6, VAR_5);
  FUNC_2 (VAR_4);
  FUNC_2 (VAR_5);
  if (*VAR_7 && *VAR_7 == ',') {
   VAR_7++;
  }
 } while (*VAR_7);

 return VAR_6;
}
