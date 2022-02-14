
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int * security; } ;


 int FUNC_0 (int ,struct kern_ipc_perm*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct kern_ipc_perm *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1->security);
 VAR_1->security = ((void*)0);
}
