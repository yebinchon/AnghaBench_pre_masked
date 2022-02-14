
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char**) ;
 int FUNC_5 (char**,size_t*,int *) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, int *VAR_4, int *VAR_5)
{
 char *VAR_6;
 FILE *VAR_7;
 char *VAR_8 = ((void*)0);
 size_t VAR_9 = 0;
 char *VAR_10;
 int VAR_11 = 0;

 if (FUNC_4(&VAR_6) != 0)
  FUNC_0(VAR_0, "debugfs is not mounted");

 VAR_7 = FUNC_2(VAR_6, "r");
 if (!VAR_7)
  FUNC_0(VAR_0, "read from gpio debugfs failed");




 while (FUNC_5(&VAR_8, &VAR_9, VAR_7) != -1) {
  VAR_10 = FUNC_8(VAR_8, VAR_3);
  if (VAR_10 == ((void*)0))
   continue;

  VAR_10 = FUNC_6(VAR_8, ')');
  if (!VAR_10)
   continue;

  VAR_10 += 2;
  if (!FUNC_7(VAR_10, "out", 3)) {
   *VAR_4 = VAR_2;
   VAR_10 += 4;
  } else if (!FUNC_7(VAR_10, "in", 2)) {
   *VAR_4 = VAR_1;
   VAR_10 += 4;
  }

  if (!FUNC_7(VAR_10, "hi", 2))
   *VAR_5 = 1;
  else if (!FUNC_7(VAR_10, "lo", 2))
   *VAR_5 = 0;

  VAR_11 = 1;
  break;
 }
 FUNC_3(VAR_6);
 FUNC_1(VAR_7);
 FUNC_3(VAR_8);

 if (!VAR_11)
  return -1;

 return 0;
}
