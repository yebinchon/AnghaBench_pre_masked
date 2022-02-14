
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct l2cap_chan {TYPE_4__* conn; TYPE_3__* hs_hcon; int rx_state; } ;
struct TYPE_10__ {int acl_mtu; } ;
struct TYPE_9__ {TYPE_1__* hcon; int mtu; } ;
struct TYPE_8__ {TYPE_2__* hdev; } ;
struct TYPE_7__ {int block_mtu; } ;
struct TYPE_6__ {TYPE_5__* hdev; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 int VAR_0 ;
 int FUNC_1 (struct l2cap_chan*) ;

__attribute__((used)) static int FUNC_2(struct l2cap_chan *VAR_1)
{
 FUNC_0("chan %p", VAR_1);

 VAR_1->rx_state = VAR_0;

 if (VAR_1->hs_hcon)
  VAR_1->conn->mtu = VAR_1->hs_hcon->hdev->block_mtu;
 else
  VAR_1->conn->mtu = VAR_1->conn->hcon->hdev->acl_mtu;

 return FUNC_1(VAR_1);
}
