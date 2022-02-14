
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* VAR_4 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(char *VAR_6, char *VAR_7)
{
 int VAR_8;
 pid_t VAR_9;

 FUNC_6("%s %s %s\n", VAR_4, VAR_6, VAR_7);

 VAR_8 = FUNC_4("kern_memfd_share_fork",
       VAR_5,
       VAR_3 | VAR_2);
 FUNC_3(VAR_8, 0);

 VAR_9 = FUNC_7(0);
 FUNC_2(VAR_8, VAR_0);
 FUNC_3(VAR_8, VAR_0);

 FUNC_5(VAR_8, VAR_1);
 FUNC_3(VAR_8, VAR_0);

 FUNC_1(VAR_9);

 FUNC_5(VAR_8, VAR_1);
 FUNC_3(VAR_8, VAR_0);

 FUNC_0(VAR_8);
}
