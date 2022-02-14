
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
struct TYPE_2__ {int dwFileAttributes; int cFileName; } ;
struct compat_dir {int path; int dir; TYPE_1__ d; scalar_t__ gotone; int ffn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int ) ;
 int FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (int ,char**,int *) ;

char* FUNC_8(struct compat_dir *VAR_1)
{
 if(!VAR_1)
  return ((void*)0);
 {
  struct dirent *VAR_2;
  while((VAR_2 = FUNC_5(VAR_1->dir)))
  {
   struct stat VAR_3;
   char *VAR_4 = FUNC_2(VAR_1->path, VAR_2->d_name);
   if(VAR_4 && !FUNC_6(VAR_4, &VAR_3) && FUNC_1(VAR_3.st_mode))
   {
    FUNC_4(VAR_4);
    return FUNC_3(VAR_2->d_name);
   }
   FUNC_4(VAR_4);
  }
 }

 return ((void*)0);
}
