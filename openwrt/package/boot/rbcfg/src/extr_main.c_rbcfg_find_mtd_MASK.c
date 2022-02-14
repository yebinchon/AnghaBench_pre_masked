
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int dev ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int*,int*) ;
 int FUNC_6 (char*,struct stat*) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,scalar_t__) ;
 int FUNC_9 (char*,char const*) ;

char *FUNC_10(const char *VAR_2, int *VAR_3)
{
 FILE *VAR_4;
 int VAR_5;
 char VAR_6[VAR_0];
 char *VAR_7 = ((void*)0);
 struct stat VAR_8;
 int VAR_9;

 VAR_4 = FUNC_2("/proc/mtd", "r");
 if (!VAR_4)
  return ((void*)0);

 while (1) {
  char *VAR_10;
  VAR_10 = FUNC_1(VAR_6, sizeof(VAR_6), VAR_4);
  if (!VAR_10)
   break;

  if (!FUNC_9(VAR_6, VAR_2))
   continue;

  VAR_9 = FUNC_5(VAR_6, "mtd%d: %08x", &VAR_5, VAR_3);
  if (VAR_9 != 2)
   break;

  FUNC_4(VAR_6, "/dev/mtdblock%d", VAR_5);
  VAR_9 = FUNC_6(VAR_6, &VAR_8);
  if (VAR_9 < 0)
   break;

  if ((VAR_8.st_mode & VAR_1) == 0)
   break;

  VAR_7 = FUNC_3(FUNC_7(VAR_6) + 1);
  if (VAR_7 == ((void*)0))
   break;

  FUNC_8(VAR_7, VAR_6, FUNC_7(VAR_6) + 1);
  break;
 }

 FUNC_0(VAR_4);
 return VAR_7;
}
