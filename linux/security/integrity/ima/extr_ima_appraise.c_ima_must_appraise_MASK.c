
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int dummy; } ;
typedef enum ima_hooks { ____Placeholder_ima_hooks } ima_hooks ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,int ,int ,int,int,int,int *,int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct inode *VAR_4, int VAR_5, enum ima_hooks VAR_6)
{
 u32 VAR_7;

 if (!VAR_3)
  return 0;

 FUNC_2(VAR_2, &VAR_7);
 return FUNC_1(VAR_4, FUNC_0(), VAR_7, VAR_6, VAR_5,
    VAR_0 | VAR_1, ((void*)0), ((void*)0));
}
