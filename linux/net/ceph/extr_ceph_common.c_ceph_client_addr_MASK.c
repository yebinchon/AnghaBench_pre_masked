
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_entity_addr {int dummy; } ;
struct TYPE_3__ {struct ceph_entity_addr addr; } ;
struct TYPE_4__ {TYPE_1__ inst; } ;
struct ceph_client {TYPE_2__ msgr; } ;



struct ceph_entity_addr *FUNC_0(struct ceph_client *VAR_0)
{
 return &VAR_0->msgr.inst.addr;
}
