
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tpid; scalar_t__ tci; } ;
struct TYPE_4__ {scalar_t__ tpid; scalar_t__ tci; } ;
struct TYPE_6__ {TYPE_2__ cvlan; TYPE_1__ vlan; } ;
struct sw_flow_key {TYPE_3__ eth; } ;



__attribute__((used)) static void FUNC_0(struct sw_flow_key *VAR_0)
{
 VAR_0->eth.vlan.tci = 0;
 VAR_0->eth.vlan.tpid = 0;
 VAR_0->eth.cvlan.tci = 0;
 VAR_0->eth.cvlan.tpid = 0;
}
