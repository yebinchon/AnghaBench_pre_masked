
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subpath ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (char*,struct stat*) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*) ;
 struct dirent* FUNC_6 (int *) ;
 int FUNC_7 (char*,int,char*,char const*,char*) ;
 int FUNC_8 (char*,struct stat*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*,int) ;
 int FUNC_11 (char const*,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_2,
  int (*VAR_3) (const char *VAR_4, bool VAR_5),
  bool VAR_6)
{
 DIR *VAR_7;
 struct dirent *VAR_8;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7 == ((void*)0))
 {
  FUNC_5("could not open directory \"%s\": %m", VAR_2);
  return;
 }

 while (VAR_1 = 0, (VAR_8 = FUNC_6(VAR_7)) != ((void*)0))
 {
  char VAR_9[VAR_0 * 2];
  struct stat VAR_10;
  int VAR_11;

  if (FUNC_9(VAR_8->d_name, ".") == 0 ||
   FUNC_9(VAR_8->d_name, "..") == 0)
   continue;

  FUNC_7(VAR_9, sizeof(VAR_9), "%s/%s", VAR_2, VAR_8->d_name);

  if (VAR_6)
   VAR_11 = FUNC_8(VAR_9, &VAR_10);
  else
   VAR_11 = FUNC_3(VAR_9, &VAR_10);

  if (VAR_11 < 0)
  {
   FUNC_5("could not stat file \"%s\": %m", VAR_9);
   continue;
  }

  if (FUNC_1(VAR_10.st_mode))
   (*VAR_3) (VAR_9, 0);
  else if (FUNC_0(VAR_10.st_mode))
   FUNC_12(VAR_9, VAR_3, 0);
 }

 if (VAR_1)
  FUNC_5("could not read directory \"%s\": %m", VAR_2);

 (void) FUNC_2(VAR_7);







 (*VAR_3) (VAR_2, 1);
}
