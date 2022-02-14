
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct task_struct*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,struct task_struct*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct task_struct *VAR_4)
{
 int VAR_5 = 0;


 switch (VAR_3) {
 case 129:
  if (!FUNC_1(VAR_4, FUNC_0(), VAR_0))
   VAR_5 = -VAR_1;
  break;
 case 128:
  VAR_5 = -VAR_1;
  break;
 }

 if (VAR_5) {
  FUNC_3(VAR_2);
  FUNC_2("traceme", VAR_2, VAR_4);
  FUNC_4(VAR_2);
 }

 return VAR_5;
}
