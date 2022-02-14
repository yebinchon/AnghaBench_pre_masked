
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct task_struct*) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_4,
          struct task_struct *VAR_5)
{
 u32 VAR_6 = FUNC_1();
 u32 VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8 = FUNC_2(VAR_5);
 int VAR_9;

 if (VAR_6 != VAR_7) {
  VAR_9 = FUNC_0(&VAR_3,
      VAR_6, VAR_7, VAR_2,
      VAR_1, ((void*)0));
  if (VAR_9)
   return VAR_9;
 }

 return FUNC_0(&VAR_3,
       VAR_7, VAR_8, VAR_2, VAR_0,
       ((void*)0));
}
