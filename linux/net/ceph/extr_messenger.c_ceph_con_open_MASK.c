
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_entity_addr {int dummy; } ;
struct TYPE_2__ {int num; scalar_t__ type; } ;
struct ceph_connection {scalar_t__ state; int mutex; scalar_t__ delay; int peer_addr; TYPE_1__ peer_name; } ;
typedef scalar_t__ __u8 ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_entity_addr*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct ceph_connection*,int ) ;
 int FUNC_4 (int *,struct ceph_entity_addr*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ceph_connection*) ;

void FUNC_8(struct ceph_connection *VAR_2,
     __u8 VAR_3, __u64 VAR_4,
     struct ceph_entity_addr *VAR_5)
{
 FUNC_5(&VAR_2->mutex);
 FUNC_3("con_open %p %s\n", VAR_2, FUNC_1(VAR_5));

 FUNC_0(VAR_2->state != VAR_0);
 VAR_2->state = VAR_1;

 VAR_2->peer_name.type = (__u8) VAR_3;
 VAR_2->peer_name.num = FUNC_2(VAR_4);

 FUNC_4(&VAR_2->peer_addr, VAR_5, sizeof(*VAR_5));
 VAR_2->delay = 0;
 FUNC_6(&VAR_2->mutex);
 FUNC_7(VAR_2);
}
