
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct task_security_struct {int sid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 struct task_security_struct* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct task_security_struct const*,int ,int *) ;
 int FUNC_4 (int,int,int) ;

__attribute__((used)) static int FUNC_5(int VAR_2, int VAR_3,
     int VAR_4, int VAR_5)
{
 const struct task_security_struct *VAR_6 = FUNC_2(FUNC_1());
 u32 VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (VAR_5)
  return 0;

 VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_4);
 VAR_9 = FUNC_3(VAR_6, VAR_8, &VAR_7);
 if (VAR_9)
  return VAR_9;

 return FUNC_0(&VAR_1,
       VAR_6->sid, VAR_7, VAR_8, VAR_0, ((void*)0));
}
