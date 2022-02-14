
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,char*,char*,...) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*) ;

char *
FUNC_9(char *VAR_5, char *VAR_6)
{
 char VAR_7[VAR_3];
 char VAR_8[VAR_2];
 char *VAR_9 = ((void*)0);
 int VAR_10;
 int VAR_11;

 if (VAR_5 == ((void*)0))
  FUNC_5(VAR_7, VAR_3, "%s/%s", VAR_0, VAR_6);
 else
  FUNC_5(VAR_7, VAR_3,
    "%s/%s/%s", VAR_0, VAR_5, VAR_6);

 VAR_10 = FUNC_3(VAR_7, VAR_1);
 if (VAR_10 < 0) {
  FUNC_2("Failed to open sysfs entry '%s': %s\n",
   VAR_7, FUNC_7(VAR_4));
  return ((void*)0);
 }

 VAR_11 = FUNC_4(VAR_10, VAR_8, sizeof(VAR_8));
 if (VAR_11 < 0) {
  FUNC_2("Failed to read sysfs entry '%s': %s\n",
   VAR_7, FUNC_7(VAR_4));
  goto readsys_ret;
 }
 if (VAR_11 == 0)
  goto readsys_ret;

 VAR_8[VAR_11 - 1] = '\0';

 VAR_9 = FUNC_1(FUNC_8(VAR_8) + 1);
 if (VAR_9)
  FUNC_6(VAR_9, VAR_8);

readsys_ret:
 FUNC_0(VAR_10);
 return VAR_9;
}
