
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int scanelemdir ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int VAR_4 ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static int FUNC_9(char *VAR_5, int VAR_6)
{
 const struct dirent *VAR_7;
 char VAR_8[256];
 DIR *VAR_9;
 int VAR_10;

 FUNC_7(VAR_8, sizeof(VAR_8),
   VAR_2, VAR_5);
 VAR_8[sizeof(VAR_8)-1] = '\0';

 VAR_9 = FUNC_3(VAR_8);
 if (!VAR_9) {
  FUNC_1(VAR_4, "Enabling/disabling channels: can't open %s\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_10 = -VAR_1;
 while (VAR_7 = FUNC_6(VAR_9), VAR_7) {
  if (FUNC_2(VAR_7->d_name, "_en")) {
   FUNC_5("%sabling: %s\n",
          VAR_6 ? "En" : "Dis",
          VAR_7->d_name);
   VAR_10 = FUNC_8(VAR_7->d_name, VAR_8,
           VAR_6);
   if (VAR_10 < 0)
    FUNC_1(VAR_4, "Failed to enable/disable %s\n",
     VAR_7->d_name);
  }
 }

 if (FUNC_0(VAR_9) == -1) {
  FUNC_4("Enabling/disabling channels: "
         "Failed to close directory");
  return -VAR_3;
 }
 return 0;
}
