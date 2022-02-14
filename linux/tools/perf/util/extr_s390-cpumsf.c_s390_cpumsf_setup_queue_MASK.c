
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct s390_cpumsf_queue {int cpu; } ;
struct s390_cpumsf {int heap; } ;
struct auxtrace_queue {int cpu; struct s390_cpumsf_queue* priv; int head; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct s390_cpumsf_queue* FUNC_2 (struct s390_cpumsf*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct s390_cpumsf *VAR_1,
       struct auxtrace_queue *VAR_2,
       unsigned int VAR_3, u64 VAR_4)
{
 struct s390_cpumsf_queue *VAR_5 = VAR_2->priv;

 if (FUNC_1(&VAR_2->head))
  return 0;

 if (VAR_5 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_1, VAR_3);
  if (!VAR_5)
   return -VAR_0;
  VAR_2->priv = VAR_5;

  if (VAR_2->cpu != -1)
   VAR_5->cpu = VAR_2->cpu;
 }
 return FUNC_0(&VAR_1->heap, VAR_3, VAR_4);
}
