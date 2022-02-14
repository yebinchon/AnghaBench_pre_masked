
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {scalar_t__ in_rs_table; int d_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ip_vs_dest *VAR_0)
{



 if (VAR_0->in_rs_table) {
  FUNC_0(&VAR_0->d_list);
  VAR_0->in_rs_table = 0;
 }
}
