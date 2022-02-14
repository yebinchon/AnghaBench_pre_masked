
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_connection*) ;
 int FUNC_1 (struct ceph_connection*,int ) ;
 scalar_t__ FUNC_2 (struct ceph_connection*,int ) ;
 int FUNC_3 (char*,struct ceph_connection*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ceph_connection*) ;

void FUNC_7(struct ceph_connection *VAR_2)
{
 FUNC_3("con_keepalive %p\n", VAR_2);
 FUNC_4(&VAR_2->mutex);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2, VAR_0);
 FUNC_5(&VAR_2->mutex);

 if (FUNC_2(VAR_2, VAR_1) == 0)
  FUNC_6(VAR_2);
}
