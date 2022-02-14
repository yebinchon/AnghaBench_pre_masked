
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_connection {void* c_fcong; void* c_lcong; int c_faddr; int c_laddr; } ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;

int FUNC_1(struct rds_connection *VAR_1)
{
 VAR_1->c_lcong = FUNC_0(&VAR_1->c_laddr);
 VAR_1->c_fcong = FUNC_0(&VAR_1->c_faddr);

 if (!(VAR_1->c_lcong && VAR_1->c_fcong))
  return -VAR_0;

 return 0;
}
