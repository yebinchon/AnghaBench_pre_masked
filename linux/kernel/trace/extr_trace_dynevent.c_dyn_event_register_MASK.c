
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyn_event_operations {int list; int match; int free; int is_busy; int show; int create; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dyn_event_operations *VAR_3)
{
 if (!VAR_3 || !VAR_3->create || !VAR_3->show || !VAR_3->is_busy ||
     !VAR_3->free || !VAR_3->match)
  return -VAR_0;

 FUNC_0(&VAR_3->list);
 FUNC_2(&VAR_2);
 FUNC_1(&VAR_3->list, &VAR_1);
 FUNC_3(&VAR_2);
 return 0;
}
