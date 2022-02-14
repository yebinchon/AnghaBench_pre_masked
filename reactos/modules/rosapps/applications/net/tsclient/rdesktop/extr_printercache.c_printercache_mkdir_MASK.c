
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static BOOL
FUNC_7(char *VAR_4, char *VAR_5)
{
 char *VAR_6;

 VAR_6 = (char *) FUNC_6(FUNC_4(VAR_4) + sizeof("/.rdesktop/rdpdr/") + FUNC_4(VAR_5) + 1);

 FUNC_2(VAR_6, "%s/.rdesktop", VAR_4);
 if ((FUNC_0(VAR_6, 0700) == -1) && VAR_3 != VAR_0)
 {
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
  return VAR_1;
 }

 FUNC_3(VAR_6, "/rdpdr");
 if ((FUNC_0(VAR_6, 0700) == -1) && VAR_3 != VAR_0)
 {
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
  return VAR_1;
 }

 FUNC_3(VAR_6, "/");
 FUNC_3(VAR_6, VAR_5);
 if ((FUNC_0(VAR_6, 0700) == -1) && VAR_3 != VAR_0)
 {
  FUNC_1(VAR_6);
  FUNC_5(VAR_6);
  return VAR_1;
 }

 FUNC_5(VAR_6);
 return VAR_2;
}
