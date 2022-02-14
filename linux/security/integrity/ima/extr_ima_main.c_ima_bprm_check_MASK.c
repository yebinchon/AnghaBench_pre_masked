
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct linux_binprm {int cred; int file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;

int FUNC_4(struct linux_binprm *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_3, &VAR_6);
 VAR_5 = FUNC_1(VAR_4->file, FUNC_0(), VAR_6, ((void*)0), 0,
      VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 FUNC_2(VAR_4->cred, &VAR_6);
 return FUNC_1(VAR_4->file, VAR_4->cred, VAR_6, ((void*)0), 0,
       VAR_2, VAR_1);
}
