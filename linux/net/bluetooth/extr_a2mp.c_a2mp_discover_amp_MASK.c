
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct l2cap_conn {TYPE_1__* hcon; } ;
struct l2cap_chan {struct l2cap_conn* conn; } ;
struct amp_mgr {struct l2cap_chan* bredr_chan; } ;
struct a2mp_discov_req {scalar_t__ ext_feat; int mtu; } ;
typedef int req ;
struct TYPE_2__ {struct amp_mgr* amp_mgr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct l2cap_chan*,struct l2cap_conn*,struct amp_mgr*) ;
 int VAR_1 ;
 int FUNC_1 (struct amp_mgr*,int ,int,int,struct a2mp_discov_req*) ;
 struct amp_mgr* FUNC_2 (struct l2cap_conn*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct l2cap_chan *VAR_2)
{
 struct l2cap_conn *VAR_3 = VAR_2->conn;
 struct amp_mgr *VAR_4 = VAR_3->hcon->amp_mgr;
 struct a2mp_discov_req VAR_5;

 FUNC_0("chan %p conn %p mgr %p", VAR_2, VAR_3, VAR_4);

 if (!VAR_4) {
  VAR_4 = FUNC_2(VAR_3, 1);
  if (!VAR_4)
   return;
 }

 VAR_4->bredr_chan = VAR_2;

 VAR_5.mtu = FUNC_3(VAR_1);
 VAR_5.ext_feat = 0;
 FUNC_1(VAR_4, VAR_0, 1, sizeof(VAR_5), &VAR_5);
}
