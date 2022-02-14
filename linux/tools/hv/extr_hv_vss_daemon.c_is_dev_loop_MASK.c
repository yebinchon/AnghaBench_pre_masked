
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int * FUNC_5 (char*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,char*,char const*,...) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_11(const char *VAR_6)
{
 char *VAR_7;
 DIR *VAR_8;
 struct dirent *VAR_9;
 bool VAR_10 = 0;

 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_7) {
  FUNC_10(VAR_1, "Can't allocate memory!");
  FUNC_2(1);
 }

 FUNC_7(VAR_7, VAR_2, "%s/loop", VAR_6);
 if (!FUNC_0(VAR_7, VAR_3 | VAR_4)) {
  VAR_10 = 1;
  goto free_buffer;
 } else if (VAR_5 != VAR_0) {
  FUNC_10(VAR_1, "Can't access: %s; error:%d %s!",
         VAR_7, VAR_5, FUNC_9(VAR_5));
 }

 FUNC_7(VAR_7, VAR_2, "%s/slaves", VAR_6);
 VAR_8 = FUNC_5(VAR_7);
 if (!VAR_8) {
  if (VAR_5 != VAR_0)
   FUNC_10(VAR_1, "Can't opendir: %s; error:%d %s!",
          VAR_7, VAR_5, FUNC_9(VAR_5));
  goto free_buffer;
 }

 while ((VAR_9 = FUNC_6(VAR_8)) != ((void*)0)) {
  if (FUNC_8(VAR_9->d_name, ".") == 0 ||
      FUNC_8(VAR_9->d_name, "..") == 0)
   continue;

  FUNC_7(VAR_7, VAR_2, "%s/slaves/%s", VAR_6,
    VAR_9->d_name);
  if (FUNC_11(VAR_7)) {
   VAR_10 = 1;
   break;
  }
 }
 FUNC_1(VAR_8);
free_buffer:
 FUNC_3(VAR_7);
 return VAR_10;
}
