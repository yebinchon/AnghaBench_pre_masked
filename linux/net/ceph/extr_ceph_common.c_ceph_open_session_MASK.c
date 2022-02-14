
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_client {int mount_mutex; } ;


 int FUNC_0 (struct ceph_client*,unsigned long) ;
 int FUNC_1 (char*) ;
 unsigned long VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ceph_client *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3 = VAR_0;

 FUNC_1("open_session start\n");
 FUNC_2(&VAR_1->mount_mutex);

 VAR_2 = FUNC_0(VAR_1, VAR_3);

 FUNC_3(&VAR_1->mount_mutex);
 return VAR_2;
}
