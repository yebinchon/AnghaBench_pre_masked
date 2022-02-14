
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct ceph_messenger {int my_enc_addr; TYPE_1__ inst; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ceph_messenger *VAR_0)
{
 FUNC_1(&VAR_0->my_enc_addr, &VAR_0->inst.addr, sizeof(VAR_0->my_enc_addr));
 FUNC_0(&VAR_0->my_enc_addr);
}
