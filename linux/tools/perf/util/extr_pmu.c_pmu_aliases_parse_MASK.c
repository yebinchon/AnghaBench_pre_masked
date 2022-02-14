
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dirent {char* d_name; } ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct list_head*,char*,char*,int *) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char*,char*) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static int FUNC_10(char *VAR_2, struct list_head *VAR_3)
{
 struct dirent *VAR_4;
 DIR *VAR_5;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 while ((VAR_4 = FUNC_7(VAR_5))) {
  char VAR_6[VAR_1];
  char *VAR_7 = VAR_4->d_name;
  FILE *VAR_8;

  if (!FUNC_9(VAR_7, ".") || !FUNC_9(VAR_7, ".."))
   continue;




  if (FUNC_5(VAR_7))
   continue;

  FUNC_8(VAR_6, VAR_1, "%s/%s", VAR_2, VAR_7);

  VAR_8 = FUNC_2(VAR_6, "r");
  if (!VAR_8) {
   FUNC_6("Cannot open %s\n", VAR_6);
   continue;
  }

  if (FUNC_4(VAR_3, VAR_2, VAR_7, VAR_8) < 0)
   FUNC_6("Cannot set up %s\n", VAR_7);
  FUNC_1(VAR_8);
 }

 FUNC_0(VAR_5);
 return 0;
}
