
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dyn_event {int list; int ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct dyn_event *VAR_3)
{
 FUNC_1(&VAR_2);

 if (!VAR_3 || !VAR_3->ops)
  return -VAR_0;

 FUNC_0(&VAR_3->list, &VAR_1);
 return 0;
}
