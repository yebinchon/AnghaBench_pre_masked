
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct percpu_list_node {int dummy; } ;
struct percpu_list {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,char*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 char* FUNC_5 (int) ;
 struct percpu_list_node* FUNC_6 (struct percpu_list*,int *) ;
 int FUNC_7 (struct percpu_list*,struct percpu_list_node*,int *) ;

void *FUNC_8(void *VAR_2)
{
 int VAR_3;
 struct percpu_list *VAR_4 = (struct percpu_list *)VAR_2;

 if (FUNC_2()) {
  FUNC_1(VAR_1, "Error: rseq_register_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_5(VAR_0));
  FUNC_0();
 }

 for (VAR_3 = 0; VAR_3 < 100000; VAR_3++) {
  struct percpu_list_node *VAR_5;

  VAR_5 = FUNC_6(VAR_4, ((void*)0));
  FUNC_4();
  if (VAR_5)
   FUNC_7(VAR_4, VAR_5, ((void*)0));
 }

 if (FUNC_3()) {
  FUNC_1(VAR_1, "Error: rseq_unregister_current_thread(...) failed(%d): %s\n",
   VAR_0, FUNC_5(VAR_0));
  FUNC_0();
 }

 return ((void*)0);
}
