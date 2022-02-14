
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct dirent {char* d_name; } ;
typedef int int64 ;
typedef int filename ;
typedef int DIR ;


 int * FUNC_0 (char const*) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 struct dirent* FUNC_3 (int *,char const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*,int,char*,char const*,char*) ;
 scalar_t__ FUNC_8 (char*,struct stat*) ;
 scalar_t__ FUNC_9 (char*,char*) ;

__attribute__((used)) static int64
FUNC_10(const char *VAR_4)
{
 int64 VAR_5 = 0;
 struct dirent *VAR_6;
 DIR *VAR_7;
 char VAR_8[VAR_2 * 2];

 VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7)
  return 0;

 while ((VAR_6 = FUNC_3(VAR_7, VAR_4)) != ((void*)0))
 {
  struct stat VAR_9;

  FUNC_1();

  if (FUNC_9(VAR_6->d_name, ".") == 0 ||
   FUNC_9(VAR_6->d_name, "..") == 0)
   continue;

  FUNC_7(VAR_8, sizeof(VAR_8), "%s/%s", VAR_4, VAR_6->d_name);

  if (FUNC_8(VAR_8, &VAR_9) < 0)
  {
   if (VAR_3 == VAR_0)
    continue;
   else
    FUNC_4(VAR_1,
      (FUNC_5(),
       FUNC_6("could not stat file \"%s\": %m", VAR_8)));
  }
  VAR_5 += VAR_9.st_size;
 }

 FUNC_2(VAR_7);
 return VAR_5;
}
