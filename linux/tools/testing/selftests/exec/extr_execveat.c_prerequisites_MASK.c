
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char const*,int ) ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_3;
 const char *VAR_4 = "#!/bin/sh\nexit $*\n";


 FUNC_1("execveat", "execveat.ephemeral");
 FUNC_1("execveat", "execveat.path.ephemeral");
 FUNC_1("script", "script.ephemeral");
 FUNC_2("subdir.ephemeral", 0755);

 VAR_3 = FUNC_3("subdir.ephemeral/script", VAR_1|VAR_0|VAR_2, 0755);
 FUNC_5(VAR_3, VAR_4, FUNC_4(VAR_4));
 FUNC_0(VAR_3);
}
