
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_diag_handler {int family; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sock_diag_handler const** VAR_1 ;
 int VAR_2 ;

void FUNC_3(const struct sock_diag_handler *VAR_3)
{
 int VAR_4 = VAR_3->family;

 if (VAR_4 >= VAR_0)
  return;

 FUNC_1(&VAR_2);
 FUNC_0(VAR_1[VAR_4] != VAR_3);
 VAR_1[VAR_4] = ((void*)0);
 FUNC_2(&VAR_2);
}
