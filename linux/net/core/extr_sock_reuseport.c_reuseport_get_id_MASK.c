
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_reuseport {int reuseport_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int VAR_2 ;

int FUNC_1(struct sock_reuseport *VAR_3)
{
 int VAR_4;

 if (VAR_3->reuseport_id)
  return VAR_3->reuseport_id;

 VAR_4 = FUNC_0(&VAR_2, VAR_1, 0,

       VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3->reuseport_id = VAR_4;

 return VAR_3->reuseport_id;
}
