
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct task_struct {int utime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*,int,int ) ;
 scalar_t__ FUNC_3 (struct task_struct*) ;

void FUNC_4(struct task_struct *VAR_2, u64 VAR_3)
{
 int VAR_4;


 VAR_2->utime += VAR_3;
 FUNC_0(VAR_2, VAR_3);

 VAR_4 = (FUNC_3(VAR_2) > 0) ? VAR_0 : VAR_1;


 FUNC_2(VAR_2, VAR_4, VAR_3);


 FUNC_1(VAR_2);
}
