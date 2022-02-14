
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int rseq_event_mask; TYPE_1__* rseq; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_3, u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_5, &VAR_3->rseq->flags);
 if (VAR_7)
  return VAR_7;


 VAR_5 |= VAR_4;







 if (FUNC_3((VAR_5 & VAR_1) &&
       (VAR_5 & VAR_2) !=
       VAR_2))
  return -VAR_0;





 FUNC_1();
 VAR_6 = VAR_3->rseq_event_mask;
 VAR_3->rseq_event_mask = 0;
 FUNC_2();

 return !!(VAR_6 & ~VAR_5);
}
