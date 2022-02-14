
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_client {int osdc; int monc; int msgr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ceph_client *VAR_0)
{
 FUNC_0(&VAR_0->msgr);
 FUNC_1(&VAR_0->monc);
 FUNC_2(&VAR_0->osdc);
}
