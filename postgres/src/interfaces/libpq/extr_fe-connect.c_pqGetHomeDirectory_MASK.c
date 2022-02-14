
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmppath ;
struct passwd {int pw_dir; } ;
typedef int pwdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int *,int ,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*,int ,int) ;

bool
FUNC_6(char *VAR_4, int VAR_5)
{

 char VAR_6[VAR_0];
 struct passwd VAR_7;
 struct passwd *VAR_8 = ((void*)0);

 (void) FUNC_3(FUNC_2(), &VAR_7, VAR_6, sizeof(VAR_6), &VAR_8);
 if (VAR_8 == ((void*)0))
  return 0;
 FUNC_5(VAR_4, VAR_8->pw_dir, VAR_5);
 return 1;
}
