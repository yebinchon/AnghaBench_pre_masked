
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int,char*,char*,char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int,char*,int ) ;

int
FUNC_10(char *VAR_4, char *VAR_5, char *VAR_6)
{
 char VAR_7[VAR_2];
 char *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (VAR_4 == ((void*)0))
  FUNC_5(VAR_7, VAR_2, "%s/%s", VAR_0, VAR_5);
 else
  FUNC_5(VAR_7, VAR_2, "%s/%s/%s",
    VAR_0, VAR_4, VAR_5);

 VAR_8 = FUNC_4(VAR_4, VAR_5);

 VAR_9 = FUNC_3(VAR_7, VAR_1);
 if (VAR_9 < 0) {
  VAR_10 = VAR_3;
  FUNC_2("Failed to open sysfs entry '%s': %s\n",
   VAR_7, FUNC_7(VAR_3));
  goto done;
 }

 if (!VAR_8 || FUNC_6(VAR_6, VAR_8)) {
  if (FUNC_9(VAR_9, VAR_6, FUNC_8(VAR_6)) < 0) {
   VAR_10 = VAR_3;
   FUNC_2("Failed to write new sysfs entry '%s': %s\n",
    VAR_7, FUNC_7(VAR_3));
  }
 }
 FUNC_0(VAR_9);
done:
 if (VAR_8)
  FUNC_1(VAR_8);
 return VAR_10;
}
