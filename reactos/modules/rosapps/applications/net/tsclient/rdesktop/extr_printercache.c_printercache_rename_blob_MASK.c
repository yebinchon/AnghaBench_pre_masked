
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static BOOL
FUNC_7(char *VAR_2, char *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6;

 char *VAR_7;

 if (VAR_2 == ((void*)0))
  return VAR_0;

 VAR_7 = FUNC_0("HOME");
 if (VAR_7 == ((void*)0))
  return VAR_0;

 VAR_6 =
  (FUNC_4(VAR_2) >
   FUNC_4(VAR_3) ? FUNC_4(VAR_2) : FUNC_4(VAR_3)) + FUNC_4(VAR_7) +
  sizeof("/.rdesktop/rdpdr/") + 1;

 VAR_4 = (char *) FUNC_6(VAR_6);
 VAR_5 = (char *) FUNC_6(VAR_6);

 FUNC_3(VAR_4, "%s/.rdesktop/rdpdr/%s", VAR_7, VAR_2);
 FUNC_3(VAR_5, "%s/.rdesktop/rdpdr/%s", VAR_7, VAR_3);

 FUNC_1("%s,%s\n", VAR_4, VAR_5);
 if (FUNC_2(VAR_4, VAR_5) < 0)
 {
  FUNC_5(VAR_4);
  FUNC_5(VAR_5);
  return VAR_0;
 }

 FUNC_5(VAR_4);
 FUNC_5(VAR_5);
 return VAR_1;
}
