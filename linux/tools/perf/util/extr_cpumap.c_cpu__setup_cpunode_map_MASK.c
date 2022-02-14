
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 unsigned int* VAR_3 ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,char const*,...) ;
 int FUNC_6 (char*,char*,unsigned int*) ;
 char* FUNC_7 () ;

int FUNC_8(void)
{
 struct dirent *VAR_4, *VAR_5;
 DIR *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9;
 char VAR_10[VAR_2];
 char VAR_11[VAR_2];
 const char *VAR_12;
 int VAR_13;


 if (FUNC_1())
  return -1;

 VAR_12 = FUNC_7();
 if (!VAR_12)
  return 0;

 VAR_13 = FUNC_5(VAR_11, VAR_2, "%s/devices/system/node", VAR_12);
 if (VAR_13 == VAR_2) {
  FUNC_3("sysfs path crossed PATH_MAX(%d) size\n", VAR_2);
  return -1;
 }

 VAR_6 = FUNC_2(VAR_11);
 if (!VAR_6)
  return 0;


 while ((VAR_4 = FUNC_4(VAR_6)) != ((void*)0)) {
  if (VAR_4->d_type != VAR_0 || FUNC_6(VAR_4->d_name, "node%u", &VAR_9) < 1)
   continue;

  VAR_13 = FUNC_5(VAR_10, VAR_2, "%s/%s", VAR_11, VAR_4->d_name);
  if (VAR_13 == VAR_2) {
   FUNC_3("sysfs path crossed PATH_MAX(%d) size\n", VAR_2);
   continue;
  }

  VAR_7 = FUNC_2(VAR_10);
  if (!VAR_7)
   continue;
  while ((VAR_5 = FUNC_4(VAR_7)) != ((void*)0)) {
   if (VAR_5->d_type != VAR_1 || FUNC_6(VAR_5->d_name, "cpu%u", &VAR_8) < 1)
    continue;
   VAR_3[VAR_8] = VAR_9;
  }
  FUNC_0(VAR_7);
 }
 FUNC_0(VAR_6);
 return 0;
}
