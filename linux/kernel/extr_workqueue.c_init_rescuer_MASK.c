
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int flags; struct worker* rescuer; int name; } ;
struct worker {int task; struct workqueue_struct* rescue_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 struct worker* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct worker*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct worker*,char*,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct workqueue_struct *VAR_5)
{
 struct worker *VAR_6;
 int VAR_7;

 if (!(VAR_5->flags & VAR_2))
  return 0;

 VAR_6 = FUNC_1(VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->rescue_wq = VAR_5;
 VAR_6->task = FUNC_4(VAR_4, VAR_6, "%s", VAR_5->name);
 VAR_7 = FUNC_0(VAR_6->task);
 if (VAR_7) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 VAR_5->rescuer = VAR_6;
 FUNC_3(VAR_6->task, VAR_3);
 FUNC_5(VAR_6->task);

 return 0;
}
