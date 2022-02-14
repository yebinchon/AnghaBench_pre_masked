
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_handler {size_t idiag_type; } ;
typedef size_t __u16 ;


 size_t const VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(const struct inet_diag_handler *VAR_3)
{
 const __u16 VAR_4 = VAR_3->idiag_type;

 if (VAR_4 >= VAR_0)
  return;

 FUNC_0(&VAR_2);
 VAR_1[VAR_4] = ((void*)0);
 FUNC_1(&VAR_2);
}
