
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_security_struct {int sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 struct task_security_struct* FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(u32 VAR_3)
{
 const struct task_security_struct *VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_2(FUNC_1());
 VAR_5 = VAR_4->sid;

 return FUNC_0(&VAR_2,
       VAR_5, VAR_3, VAR_1, VAR_0,
       ((void*)0));
}
