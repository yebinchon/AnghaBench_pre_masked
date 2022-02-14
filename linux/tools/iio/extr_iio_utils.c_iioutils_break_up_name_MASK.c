
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char**,char*,char*,char*) ;
 int FUNC_2 (char*) ;
 char** VAR_2 ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*,int) ;
 char* FUNC_7 (char*,char*) ;

int FUNC_8(const char *VAR_3, char **VAR_4)
{
 char *VAR_5;
 char *VAR_6, *VAR_7;
 char *VAR_8, *VAR_9 = "";
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++)
  if (!FUNC_6(VAR_3, VAR_2[VAR_10],
        FUNC_5(VAR_2[VAR_10]))) {
   VAR_9 = VAR_2[VAR_10];
   break;
  }

 VAR_5 = FUNC_4(VAR_3 + FUNC_5(VAR_9) + 1);
 if (!VAR_5)
  return -VAR_1;

 VAR_8 = FUNC_7(VAR_5, "_\0");
 if (!VAR_8) {
  FUNC_2(VAR_5);
  return -VAR_0;
 }

 VAR_6 = VAR_8;
 VAR_7 = VAR_8;

 while (*VAR_7 != '\0') {
  if (!FUNC_3(*VAR_7)) {
   *VAR_6 = *VAR_7;
   VAR_6++;
  }

  VAR_7++;
 }
 *VAR_6 = '\0';
 VAR_11 = FUNC_1(VAR_4, "%s_%s", VAR_9, VAR_8);
 FUNC_2(VAR_5);

 return (VAR_11 == -1) ? -VAR_1 : 0;
}
