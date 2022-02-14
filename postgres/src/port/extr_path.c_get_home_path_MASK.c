
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_dir; } ;
typedef int pwdbuf ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,struct passwd*,char*,int,struct passwd**) ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (char*,int ,int ) ;

bool
FUNC_5(char *VAR_2)
{

 char VAR_3[VAR_0];
 struct passwd VAR_4;
 struct passwd *VAR_5 = ((void*)0);

 (void) FUNC_2(FUNC_1(), &VAR_4, VAR_3, sizeof(VAR_3), &VAR_5);
 if (VAR_5 == ((void*)0))
  return 0;
 FUNC_4(VAR_2, VAR_5->pw_dir, VAR_1);
 return 1;
}
