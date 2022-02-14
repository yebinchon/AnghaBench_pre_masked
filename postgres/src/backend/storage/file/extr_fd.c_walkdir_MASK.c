
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subpath ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 struct dirent* FUNC_3 (int *,char const*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,struct stat*) ;
 int FUNC_10 (char*,int,char*,char const*,char*) ;
 int FUNC_11 (char*,struct stat*) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 void FUNC_13 (char const*,int,int) ;
 void FUNC_14 (char const*,int,int) ;

__attribute__((used)) static void
FUNC_15(const char *VAR_1,
  void (*VAR_2) (const char *VAR_3, bool VAR_4, int VAR_5),
  bool VAR_6,
  int VAR_7)
{
 DIR *VAR_8;
 struct dirent *VAR_9;

 VAR_8 = FUNC_0(VAR_1);

 while ((VAR_9 = FUNC_3(VAR_8, VAR_1, VAR_7)) != ((void*)0))
 {
  char VAR_10[VAR_0 * 2];
  struct stat VAR_11;
  int VAR_12;

  FUNC_1();

  if (FUNC_12(VAR_9->d_name, ".") == 0 ||
   FUNC_12(VAR_9->d_name, "..") == 0)
   continue;

  FUNC_10(VAR_10, sizeof(VAR_10), "%s/%s", VAR_1, VAR_9->d_name);

  if (VAR_6)
   VAR_12 = FUNC_11(VAR_10, &VAR_11);
  else
   VAR_12 = FUNC_9(VAR_10, &VAR_11);

  if (VAR_12 < 0)
  {
   FUNC_6(VAR_7,
     (FUNC_7(),
      FUNC_8("could not stat file \"%s\": %m", VAR_10)));
   continue;
  }

  if (FUNC_5(VAR_11.st_mode))
   (*VAR_2) (VAR_10, 0, VAR_7);
  else if (FUNC_4(VAR_11.st_mode))
   FUNC_15(VAR_10, VAR_2, 0, VAR_7);
 }

 FUNC_2(VAR_8);







 if (VAR_8)
  (*VAR_2) (VAR_1, 1, VAR_7);
}
