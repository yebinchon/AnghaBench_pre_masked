
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {int list; scalar_t__ dellink; scalar_t__ setup; int kind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct rtnl_link_ops *VAR_3)
{
 if (FUNC_1(VAR_3->kind))
  return -VAR_0;






 if (VAR_3->setup && !VAR_3->dellink)
  VAR_3->dellink = VAR_2;

 FUNC_0(&VAR_3->list, &VAR_1);
 return 0;
}
