
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_5 ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_6,
         unsigned int VAR_7)
{
 u32 VAR_8 = FUNC_1();
 u32 VAR_9 = FUNC_2(VAR_6);

 if (VAR_7 & VAR_2)
  return FUNC_0(&VAR_5,
        VAR_8, VAR_9, VAR_3, VAR_0, ((void*)0));

 return FUNC_0(&VAR_5,
       VAR_8, VAR_9, VAR_4, VAR_1, ((void*)0));
}
