
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_diag_handler {size_t family; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct sock_diag_handler const** VAR_3 ;
 int VAR_4 ;

int FUNC_2(const struct sock_diag_handler *VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5->family >= VAR_0)
  return -VAR_2;

 FUNC_0(&VAR_4);
 if (VAR_3[VAR_5->family])
  VAR_6 = -VAR_1;
 else
  VAR_3[VAR_5->family] = VAR_5;
 FUNC_1(&VAR_4);

 return VAR_6;
}
