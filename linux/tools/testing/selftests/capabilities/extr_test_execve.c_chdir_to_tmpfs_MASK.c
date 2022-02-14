
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cwd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*,char*,int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 char VAR_2[VAR_0];
 if (FUNC_1(VAR_2, sizeof(VAR_2)) != VAR_2)
  FUNC_2("getcwd - %s\n", FUNC_4(VAR_1));

 if (FUNC_3("private_tmp", ".", "tmpfs", 0, "mode=0777") != 0)
  FUNC_2("mount private tmpfs - %s\n",
     FUNC_4(VAR_1));

 if (FUNC_0(VAR_2) != 0)
  FUNC_2("chdir to private tmpfs - %s\n",
     FUNC_4(VAR_1));
}
