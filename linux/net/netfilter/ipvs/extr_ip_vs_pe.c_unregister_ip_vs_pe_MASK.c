
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_pe {int name; int n_list; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

int FUNC_5(struct ip_vs_pe *VAR_1)
{
 FUNC_2(&VAR_0);

 FUNC_1(&VAR_1->n_list);
 FUNC_3(&VAR_0);


 FUNC_0();

 FUNC_4("[%s] pe unregistered.\n", VAR_1->name);

 return 0;
}
