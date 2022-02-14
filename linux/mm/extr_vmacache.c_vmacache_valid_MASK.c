
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seqnum; } ;
struct task_struct {TYPE_1__ vmacache; } ;
struct mm_struct {scalar_t__ vmacache_seqnum; } ;


 struct task_struct* VAR_0 ;
 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct mm_struct*) ;

__attribute__((used)) static bool FUNC_2(struct mm_struct *VAR_1)
{
 struct task_struct *VAR_2;

 if (!FUNC_1(VAR_1))
  return 0;

 VAR_2 = VAR_0;
 if (VAR_1->vmacache_seqnum != VAR_2->vmacache.seqnum) {




  VAR_2->vmacache.seqnum = VAR_1->vmacache_seqnum;
  FUNC_0(VAR_2);
  return 0;
 }
 return 1;
}
