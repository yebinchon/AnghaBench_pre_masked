
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thread_stat {int seq_list; int tid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct thread_stat* FUNC_2 (int ) ;
 int FUNC_3 (struct thread_stat*) ;
 struct thread_stat* FUNC_4 (int) ;

__attribute__((used)) static struct thread_stat *FUNC_5(u32 VAR_0)
{
 struct thread_stat *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_4(sizeof(struct thread_stat));
 if (!VAR_1) {
  FUNC_1("memory allocation failed\n");
  return ((void*)0);
 }

 VAR_1->tid = VAR_0;
 FUNC_0(&VAR_1->seq_list);

 FUNC_3(VAR_1);

 return VAR_1;
}
