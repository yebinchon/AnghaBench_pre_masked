
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_client {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_mon_client*,int ,int ,int) ;
 int FUNC_1 (struct ceph_mon_client*) ;
 int FUNC_2 (struct ceph_mon_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ceph_mon_client *VAR_2)
{
 FUNC_3(&VAR_2->mutex);
 FUNC_0(VAR_2, VAR_0, 0, 1);
 FUNC_0(VAR_2, VAR_1, 0, 0);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->mutex);
 return 0;
}
