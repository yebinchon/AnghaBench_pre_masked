
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_timespec {int dummy; } ;
struct ceph_connection {int last_keepalive_ack; } ;
typedef int ceph_ts ;


 int FUNC_0 (int *,struct ceph_timespec*) ;
 int FUNC_1 (struct ceph_connection*) ;
 int FUNC_2 (struct ceph_connection*,size_t,size_t,struct ceph_timespec*) ;

__attribute__((used)) static int FUNC_3(struct ceph_connection *VAR_0)
{
 struct ceph_timespec VAR_1;
 size_t VAR_2 = sizeof(VAR_1);
 int VAR_3 = FUNC_2(VAR_0, VAR_2, VAR_2, &VAR_1);
 if (VAR_3 <= 0)
  return VAR_3;
 FUNC_0(&VAR_0->last_keepalive_ack, &VAR_1);
 FUNC_1(VAR_0);
 return 1;
}
