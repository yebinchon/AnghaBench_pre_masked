
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tofile ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int fromfile ;
typedef int DIR ;


 int * FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int) ;
 scalar_t__ FUNC_12 (char*,struct stat*) ;
 int FUNC_13 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_14 (char*,char*) ;

void
FUNC_15(char *VAR_3, char *VAR_4, bool VAR_5)
{
 DIR *VAR_6;
 struct dirent *VAR_7;
 char VAR_8[VAR_1 * 2];
 char VAR_9[VAR_1 * 2];

 if (FUNC_3(VAR_4) != 0)
  FUNC_8(VAR_0,
    (FUNC_9(),
     FUNC_10("could not create directory \"%s\": %m", VAR_4)));

 VAR_6 = FUNC_0(VAR_3);

 while ((VAR_7 = FUNC_4(VAR_6, VAR_3)) != ((void*)0))
 {
  struct stat VAR_10;


  FUNC_1();

  if (FUNC_14(VAR_7->d_name, ".") == 0 ||
   FUNC_14(VAR_7->d_name, "..") == 0)
   continue;

  FUNC_13(VAR_8, sizeof(VAR_8), "%s/%s", VAR_3, VAR_7->d_name);
  FUNC_13(VAR_9, sizeof(VAR_9), "%s/%s", VAR_4, VAR_7->d_name);

  if (FUNC_12(VAR_8, &VAR_10) < 0)
   FUNC_8(VAR_0,
     (FUNC_9(),
      FUNC_10("could not stat file \"%s\": %m", VAR_8)));

  if (FUNC_5(VAR_10.st_mode))
  {

   if (VAR_5)
    FUNC_15(VAR_8, VAR_9, 1);
  }
  else if (FUNC_6(VAR_10.st_mode))
   FUNC_7(VAR_8, VAR_9);
 }
 FUNC_2(VAR_6);





 if (!VAR_2)
  return;

 VAR_6 = FUNC_0(VAR_4);

 while ((VAR_7 = FUNC_4(VAR_6, VAR_4)) != ((void*)0))
 {
  struct stat VAR_11;

  if (FUNC_14(VAR_7->d_name, ".") == 0 ||
   FUNC_14(VAR_7->d_name, "..") == 0)
   continue;

  FUNC_13(VAR_9, sizeof(VAR_9), "%s/%s", VAR_4, VAR_7->d_name);





  if (FUNC_12(VAR_9, &VAR_11) < 0)
   FUNC_8(VAR_0,
     (FUNC_9(),
      FUNC_10("could not stat file \"%s\": %m", VAR_9)));

  if (FUNC_6(VAR_11.st_mode))
   FUNC_11(VAR_9, 0);
 }
 FUNC_2(VAR_6);







 FUNC_11(VAR_4, 1);
}
