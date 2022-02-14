
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kern_ipc_perm {int dummy; } ;


 int FUNC_0 (int ,int ,struct kern_ipc_perm*) ;
 int FUNC_1 (struct kern_ipc_perm*) ;
 int FUNC_2 (struct kern_ipc_perm*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct kern_ipc_perm *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_2))
  return VAR_2;
 VAR_2 = FUNC_0(VAR_0, 0, VAR_1);
 if (FUNC_3(VAR_2))
  FUNC_2(VAR_1);
 return VAR_2;
}
