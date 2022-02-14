
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct thread {int tid; int ppid; scalar_t__ comm_set; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,struct thread*,int) ;
 char* FUNC_1 (struct thread*) ;
 int FUNC_2 (struct thread*,char const*,int ) ;

int FUNC_3(struct thread *VAR_1, struct thread *VAR_2, u64 VAR_3, bool VAR_4)
{
 if (VAR_2->comm_set) {
  const char *VAR_5 = FUNC_1(VAR_2);
  int VAR_6;
  if (!VAR_5)
   return -VAR_0;
  VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 VAR_1->ppid = VAR_2->tid;
 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
