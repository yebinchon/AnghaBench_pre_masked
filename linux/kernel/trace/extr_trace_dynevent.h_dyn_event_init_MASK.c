
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyn_event_operations {int dummy; } ;
struct dyn_event {struct dyn_event_operations* ops; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline
int FUNC_1(struct dyn_event *VAR_1, struct dyn_event_operations *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_0(&VAR_1->list);
 VAR_1->ops = VAR_2;
 return 0;
}
