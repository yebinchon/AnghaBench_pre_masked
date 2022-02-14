
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pernet_operations {int list; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct pernet_operations*,int *) ;

__attribute__((used)) static int FUNC_2(struct list_head *VAR_2,
     struct pernet_operations *VAR_3)
{
 if (!VAR_1) {
  FUNC_0(&VAR_3->list, VAR_2);
  return 0;
 }

 return FUNC_1(VAR_3, &VAR_0);
}
