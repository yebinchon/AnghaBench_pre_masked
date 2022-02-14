
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct memory_failure_entry {int flags; int pfn; int member_0; } ;
struct memory_failure_cpu {int lock; int fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct memory_failure_entry*) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct memory_failure_cpu* FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_2)
{
 struct memory_failure_cpu *VAR_3;
 struct memory_failure_entry VAR_4 = { 0, };
 unsigned long VAR_5;
 int VAR_6;

 VAR_3 = FUNC_6(&VAR_1);
 for (;;) {
  FUNC_4(&VAR_3->lock, VAR_5);
  VAR_6 = FUNC_0(&VAR_3->fifo, &VAR_4);
  FUNC_5(&VAR_3->lock, VAR_5);
  if (!VAR_6)
   break;
  if (VAR_4.flags & VAR_0)
   FUNC_3(FUNC_2(VAR_4.pfn), VAR_4.flags);
  else
   FUNC_1(VAR_4.pfn, VAR_4.flags);
 }
}
