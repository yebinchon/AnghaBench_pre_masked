
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct thread_stack {scalar_t__ trace_nr; scalar_t__ crp; } ;
struct thread {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thread*,struct thread_stack*) ;
 int FUNC_1 (char*) ;
 struct thread_stack* FUNC_2 (struct thread*,int) ;
 struct thread_stack* FUNC_3 (struct thread*,int,int *) ;
 int FUNC_4 (struct thread_stack*,scalar_t__) ;
 int FUNC_5 (struct thread_stack*) ;
 int FUNC_6 (struct thread_stack*,scalar_t__,int) ;

int FUNC_7(struct thread *VAR_6, int VAR_7, u32 VAR_8, u64 VAR_9,
   u64 VAR_10, u16 VAR_11, u64 VAR_12)
{
 struct thread_stack *VAR_13 = FUNC_2(VAR_6, VAR_7);

 if (!VAR_6)
  return -VAR_0;

 if (!VAR_13) {
  VAR_13 = FUNC_3(VAR_6, VAR_7, ((void*)0));
  if (!VAR_13) {
   FUNC_1("Out of memory: no thread stack\n");
   return -VAR_1;
  }
  VAR_13->trace_nr = VAR_12;
 }






 if (VAR_12 != VAR_13->trace_nr) {
  if (VAR_13->trace_nr)
   FUNC_0(VAR_6, VAR_13);
  VAR_13->trace_nr = VAR_12;
 }


 if (VAR_13->crp)
  return 0;

 if (VAR_8 & VAR_2) {
  u64 VAR_14;

  if (!VAR_10)
   return 0;
  VAR_14 = VAR_9 + VAR_11;
  if (VAR_14 == VAR_10)
   return 0;
  return FUNC_6(VAR_13, VAR_14,
       VAR_8 & VAR_5);
 } else if (VAR_8 & VAR_4) {







  FUNC_4(VAR_13, VAR_10);
  FUNC_5(VAR_13);
 } else if ((VAR_8 & VAR_3) && VAR_9) {
  FUNC_4(VAR_13, VAR_10);
 }

 return 0;
}
