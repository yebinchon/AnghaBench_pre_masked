
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;

int FUNC_3(void)
{
 FUNC_1("[RUN]\tSet NT and issue a syscall\n");
 FUNC_0(VAR_1);






 FUNC_2(VAR_0, VAR_4, 0);

 FUNC_1("[RUN]\tSet NT|TF and issue a syscall\n");
 FUNC_0(VAR_1 | VAR_2);

 return VAR_3 == 0 ? 0 : 1;
}
