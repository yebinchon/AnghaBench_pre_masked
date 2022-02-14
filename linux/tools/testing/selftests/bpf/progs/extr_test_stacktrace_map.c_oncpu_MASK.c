
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sched_switch_args {int dummy; } ;
typedef int __u64 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct sched_switch_args*,void*,int,int ) ;
 int FUNC_1 (struct sched_switch_args*,int *,int ) ;
 void* FUNC_2 (int *,int*) ;
 int FUNC_3 (int *,int*,int*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct sched_switch_args *VAR_5)
{
 __u32 VAR_6 = VAR_0 * sizeof(__u64);
 __u32 VAR_7 = 0, VAR_8 = 0, *VAR_9;
 void *VAR_10;

 VAR_9 = FUNC_2(&VAR_1, &VAR_7);
 if (VAR_9 && *VAR_9)
  return 0;


 VAR_7 = FUNC_1(VAR_5, &VAR_4, 0);
 if ((int)VAR_7 >= 0) {
  FUNC_3(&VAR_3, &VAR_7, &VAR_8, 0);
  VAR_10 = FUNC_2(&VAR_2, &VAR_7);
  if (VAR_10)
   FUNC_0(VAR_5, VAR_10, VAR_6, 0);
 }

 return 0;
}
