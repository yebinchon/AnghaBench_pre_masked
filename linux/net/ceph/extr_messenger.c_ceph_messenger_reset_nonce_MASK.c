
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int nonce; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct ceph_messenger {TYPE_2__ inst; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ceph_messenger*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct ceph_messenger *VAR_0)
{
 u32 VAR_1 = FUNC_2(VAR_0->inst.addr.nonce) + 1000000;
 VAR_0->inst.addr.nonce = FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
