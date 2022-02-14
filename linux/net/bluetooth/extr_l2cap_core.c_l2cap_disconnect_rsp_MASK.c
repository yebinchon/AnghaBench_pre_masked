
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct l2cap_disconn_rsp {int dcid; int scid; } ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_cmd_hdr {int dummy; } ;
struct l2cap_chan {scalar_t__ state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* close ) (struct l2cap_chan*) ;} ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct l2cap_chan* FUNC_1 (struct l2cap_conn*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2cap_chan*,int ) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*) ;
 int FUNC_7 (struct l2cap_chan*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct l2cap_chan*) ;

__attribute__((used)) static inline int FUNC_11(struct l2cap_conn *VAR_2,
           struct l2cap_cmd_hdr *VAR_3, u16 VAR_4,
           u8 *VAR_5)
{
 struct l2cap_disconn_rsp *VAR_6 = (struct l2cap_disconn_rsp *) VAR_5;
 u16 VAR_7, VAR_8;
 struct l2cap_chan *VAR_9;

 if (VAR_4 != sizeof(*VAR_6))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_6->scid);
 VAR_7 = FUNC_2(VAR_6->dcid);

 FUNC_0("dcid 0x%4.4x scid 0x%4.4x", VAR_7, VAR_8);

 FUNC_8(&VAR_2->chan_lock);

 VAR_9 = FUNC_1(VAR_2, VAR_8);
 if (!VAR_9) {
  FUNC_9(&VAR_2->chan_lock);
  return 0;
 }

 FUNC_5(VAR_9);

 if (VAR_9->state != VAR_0) {
  FUNC_7(VAR_9);
  FUNC_9(&VAR_2->chan_lock);
  return 0;
 }

 FUNC_4(VAR_9);
 FUNC_3(VAR_9, 0);

 FUNC_7(VAR_9);

 VAR_9->ops->close(VAR_9);
 FUNC_6(VAR_9);

 FUNC_9(&VAR_2->chan_lock);

 return 0;
}
