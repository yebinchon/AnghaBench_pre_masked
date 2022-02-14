
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int dev_id ;
typedef int buf ;
typedef int FILE ;
typedef int DIR ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,char*,int ) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (int ) ;

__attribute__((used)) static char *FUNC_10(char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 FILE *VAR_5;
 char *VAR_6, *VAR_7;
 char *VAR_8 = ((void*)0);
 char VAR_9[256];
 char VAR_10[VAR_1];

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 while ((VAR_4 = FUNC_5(VAR_3)) != ((void*)0)) {



  FUNC_6(VAR_10, sizeof(VAR_10), "%s%s/device/device_id",
    VAR_0, VAR_4->d_name);

  VAR_5 = FUNC_3(VAR_10, "r");
  if (VAR_5 == ((void*)0))
   continue;

  VAR_6 = FUNC_2(VAR_9, sizeof(VAR_9), VAR_5);
  if (VAR_6) {
   VAR_7 = FUNC_7(VAR_6, '\n');
   if (VAR_7)
    *VAR_7 = '\0';

   if (!FUNC_8(VAR_6, VAR_2)) {




    VAR_8 = FUNC_9(VAR_4->d_name);
    FUNC_1(VAR_5);
    break;
   }
  }
  FUNC_1(VAR_5);
 }

 FUNC_0(VAR_3);
 return VAR_8;
}
