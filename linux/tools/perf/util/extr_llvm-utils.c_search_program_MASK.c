
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*,char const*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char*,char*,char**) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_3, const char *VAR_4,
        char *VAR_5)
{
 char *VAR_6, *VAR_7, *VAR_8 = ((void*)0);
 char VAR_9[VAR_2];
 int VAR_10;

 VAR_5[0] = '\0';
 if (VAR_3 && VAR_3[0] != '\0') {
  if (VAR_3[0] == '/') {
   if (FUNC_0(VAR_3, VAR_1) == 0) {
    FUNC_5(VAR_5, VAR_3, VAR_2);
    return 0;
   }
  } else if (VAR_3[0] != '\0')
   VAR_4 = VAR_3;
 }

 VAR_6 = FUNC_2("PATH");
 if (!VAR_6)
  return -1;
 VAR_6 = FUNC_4(VAR_6);
 if (!VAR_6)
  return -1;

 VAR_10 = -VAR_0;
 VAR_7 = FUNC_6(VAR_6, ":", &VAR_8);
 while (VAR_7) {
  FUNC_3(VAR_9, sizeof(VAR_9), "%s/%s", VAR_7, VAR_4);
  if (FUNC_0(VAR_9, VAR_1) == 0) {
   FUNC_5(VAR_5, VAR_9, VAR_2);
   VAR_10 = 0;
   break;
  }
  VAR_7 = FUNC_6(((void*)0), ":", &VAR_8);
 }

 FUNC_1(VAR_6);
 return VAR_10;
}
