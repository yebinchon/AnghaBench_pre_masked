
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct task_struct*,int) ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;

 if (!FUNC_2(VAR_3)) {
  VAR_5 = -VAR_1;
  goto out;
 }
 if (VAR_4 < FUNC_4(VAR_3) && !FUNC_0(VAR_3, VAR_4)) {
  VAR_5 = -VAR_0;
  goto out;
 }
 VAR_6 = FUNC_1(VAR_3, VAR_4);
 if (VAR_6) {
  VAR_5 = VAR_6;
  goto out;
 }
 if (VAR_5 == -VAR_2)
  VAR_5 = 0;
 FUNC_3(VAR_3, VAR_4);
out:
 return VAR_5;
}
