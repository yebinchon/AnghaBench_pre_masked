
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ceph_mon_client {int mutex; } ;


 int FUNC_0 (struct ceph_mon_client*,int,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(struct ceph_mon_client *VAR_0, int VAR_1, u32 VAR_2,
   bool VAR_3)
{
 bool VAR_4;

 FUNC_1(&VAR_0->mutex);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->mutex);

 return VAR_4;
}
