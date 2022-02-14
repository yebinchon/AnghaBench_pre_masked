
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_list_node {int dummy; } ;
struct percpu_list {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 struct percpu_list_node* FUNC_6 (struct percpu_list*,int *) ;
 int FUNC_7 (struct percpu_list*,struct percpu_list_node*,int *) ;

void *FUNC_8(void *VAR_5)
{
 long long VAR_6, VAR_7;
 struct percpu_list *VAR_8 = (struct percpu_list *)VAR_5;

 if (!VAR_1 && FUNC_3())
  FUNC_0();

 VAR_7 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  struct percpu_list_node *VAR_9;

  VAR_9 = FUNC_6(VAR_8, ((void*)0));
  if (VAR_3)
   FUNC_5();
  if (VAR_9)
   FUNC_7(VAR_8, VAR_9, ((void*)0));
 }

 FUNC_2("tid %d: number of rseq abort: %d, signals delivered: %u\n",
         (int) FUNC_1(), VAR_0, VAR_4);
 if (!VAR_1 && FUNC_4())
  FUNC_0();

 return ((void*)0);
}
