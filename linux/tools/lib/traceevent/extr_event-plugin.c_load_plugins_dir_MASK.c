
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tep_handle {int dummy; } ;
struct stat {int st_mode; } ;
struct dirent {char* d_name; } ;
typedef int DIR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char const*,struct stat*) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static void
FUNC_7(struct tep_handle *VAR_0, const char *VAR_1,
   const char *VAR_2,
   void (*VAR_3)(struct tep_handle *VAR_4,
         const char *VAR_5,
         const char *VAR_6,
         void *VAR_7),
   void *VAR_8)
{
 struct dirent *VAR_9;
 struct stat VAR_10;
 DIR *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_2, &VAR_10);
 if (VAR_12 < 0)
  return;

 if (!FUNC_0(VAR_10.st_mode))
  return;

 VAR_11 = FUNC_2(VAR_2);
 if (!VAR_11)
  return;

 while ((VAR_9 = FUNC_3(VAR_11))) {
  const char *VAR_13 = VAR_9->d_name;

  if (FUNC_5(VAR_13, ".") == 0 ||
      FUNC_5(VAR_13, "..") == 0)
   continue;


  if (FUNC_5(VAR_13 + (FUNC_6(VAR_13) - FUNC_6(VAR_1)), VAR_1) != 0)
   continue;

  VAR_3(VAR_0, VAR_2, VAR_13, VAR_8);
 }

 FUNC_1(VAR_11);
}
