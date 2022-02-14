
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_ulp_ops {int list; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct tcp_ulp_ops *VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(&VAR_2);
 if (FUNC_3(VAR_3->name))
  VAR_4 = -VAR_0;
 else
  FUNC_0(&VAR_3->list, &VAR_1);
 FUNC_2(&VAR_2);

 return VAR_4;
}
