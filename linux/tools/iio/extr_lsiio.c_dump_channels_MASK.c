
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*) ;
 struct dirent* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(const char *VAR_1)
{
 DIR *VAR_2;
 const struct dirent *VAR_3;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 while (VAR_3 = FUNC_5(VAR_2), VAR_3)
  if (FUNC_1(VAR_3->d_name, "in_") &&
     (FUNC_0(VAR_3->d_name, "_raw") ||
      FUNC_0(VAR_3->d_name, "_input")))
   FUNC_4("   %-10s\n", VAR_3->d_name);

 return (FUNC_2(VAR_2) == -1) ? -VAR_0 : 0;
}
