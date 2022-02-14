
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct thread_stat {int rb; int seq_list; int tid; } ;
struct TYPE_3__ {int rb_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct thread_stat* FUNC_4 (int) ;

__attribute__((used)) static struct thread_stat *FUNC_5(u32 VAR_3)
{
 struct thread_stat *VAR_4;

 VAR_4 = FUNC_4(sizeof(struct thread_stat));
 if (!VAR_4) {
  FUNC_1("memory allocation failed\n");
  return ((void*)0);
 }
 VAR_4->tid = VAR_3;
 FUNC_0(&VAR_4->seq_list);

 FUNC_3(&VAR_4->rb, ((void*)0), &VAR_2.rb_node);
 FUNC_2(&VAR_4->rb, &VAR_2);

 VAR_0 = VAR_1;
 return VAR_4;
}
