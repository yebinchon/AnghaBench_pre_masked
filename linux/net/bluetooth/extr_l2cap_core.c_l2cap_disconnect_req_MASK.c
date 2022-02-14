
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct l2cap_disconn_rsp {void* scid; void* dcid; } ;
struct l2cap_disconn_req {int dcid; int scid; } ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {TYPE_1__* ops; int dcid; int scid; } ;
typedef int rsp ;
struct TYPE_2__ {int (* close ) (struct l2cap_chan*) ;int (* set_shutdown ) (struct l2cap_chan*) ;} ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct l2cap_chan* FUNC_1 (struct l2cap_conn*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2cap_conn*,int ,int,int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct l2cap_chan*,int ) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (struct l2cap_chan*) ;
 int FUNC_9 (struct l2cap_chan*) ;
 int FUNC_10 (struct l2cap_conn*,int ,int ,int,struct l2cap_disconn_rsp*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct l2cap_chan*) ;
 int FUNC_14 (struct l2cap_chan*) ;

__attribute__((used)) static inline int FUNC_15(struct l2cap_conn *VAR_3,
           struct l2cap_cmd_hdr *VAR_4, u16 VAR_5,
           u8 *VAR_6)
{
 struct l2cap_disconn_req *VAR_7 = (struct l2cap_disconn_req *) VAR_6;
 struct l2cap_disconn_rsp VAR_8;
 u16 VAR_9, VAR_10;
 struct l2cap_chan *VAR_11;

 if (VAR_5 != sizeof(*VAR_7))
  return -VAR_1;

 VAR_10 = FUNC_2(VAR_7->scid);
 VAR_9 = FUNC_2(VAR_7->dcid);

 FUNC_0("scid 0x%4.4x dcid 0x%4.4x", VAR_10, VAR_9);

 FUNC_11(&VAR_3->chan_lock);

 VAR_11 = FUNC_1(VAR_3, VAR_9);
 if (!VAR_11) {
  FUNC_12(&VAR_3->chan_lock);
  FUNC_3(VAR_3, VAR_4->ident, VAR_9, VAR_10);
  return 0;
 }

 FUNC_7(VAR_11);

 VAR_8.dcid = FUNC_4(VAR_11->scid);
 VAR_8.scid = FUNC_4(VAR_11->dcid);
 FUNC_10(VAR_3, VAR_4->ident, VAR_2, sizeof(VAR_8), &VAR_8);

 VAR_11->ops->set_shutdown(VAR_11);

 FUNC_6(VAR_11);
 FUNC_5(VAR_11, VAR_0);

 FUNC_9(VAR_11);

 VAR_11->ops->close(VAR_11);
 FUNC_8(VAR_11);

 FUNC_12(&VAR_3->chan_lock);

 return 0;
}
