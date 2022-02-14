
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 TYPE_1__* FUNC_0 (struct task_struct*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct task_struct*) ;
 int VAR_5 ;
 int FUNC_3 (int ,struct task_struct*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,struct task_struct*,int ) ;
 int FUNC_7 (int ,struct task_struct*) ;

__attribute__((used)) static int FUNC_8(struct task_struct *VAR_6,
        unsigned int VAR_7)
{
 int VAR_8 = 0;


 if (VAR_7 & VAR_2) {
  switch (VAR_5) {
  case 130:

   break;
  case 128:
   FUNC_4();
   if (!FUNC_2(VAR_6))
    VAR_8 = -VAR_1;
   if (!VAR_8 && !FUNC_7(VAR_4, VAR_6) &&
       !FUNC_3(VAR_4, VAR_6) &&
       !FUNC_1(FUNC_0(VAR_6)->user_ns, VAR_0))
    VAR_8 = -VAR_1;
   FUNC_5();
   break;
  case 131:
   FUNC_4();
   if (!FUNC_1(FUNC_0(VAR_6)->user_ns, VAR_0))
    VAR_8 = -VAR_1;
   FUNC_5();
   break;
  case 129:
  default:
   VAR_8 = -VAR_1;
   break;
  }
 }

 if (VAR_8 && (VAR_7 & VAR_3) == 0)
  FUNC_6("attach", VAR_6, VAR_4);

 return VAR_8;
}
