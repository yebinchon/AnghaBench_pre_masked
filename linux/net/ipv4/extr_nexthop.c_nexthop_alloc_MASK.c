
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nexthop {int grp_list; int f6i_list; int fi_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nexthop* FUNC_1 (int,int ) ;

__attribute__((used)) static struct nexthop *FUNC_2(void)
{
 struct nexthop *VAR_1;

 VAR_1 = FUNC_1(sizeof(struct nexthop), VAR_0);
 if (VAR_1) {
  FUNC_0(&VAR_1->fi_list);
  FUNC_0(&VAR_1->f6i_list);
  FUNC_0(&VAR_1->grp_list);
 }
 return VAR_1;
}
