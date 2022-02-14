
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_ops {scalar_t__ maxtype; scalar_t__ slave_maxtype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rtnl_link_ops*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct rtnl_link_ops *VAR_3)
{
 int VAR_4;


 if (FUNC_0(VAR_3->maxtype > VAR_1 ||
      VAR_3->slave_maxtype > VAR_2))
  return -VAR_0;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_3);
 FUNC_3();
 return VAR_4;
}
