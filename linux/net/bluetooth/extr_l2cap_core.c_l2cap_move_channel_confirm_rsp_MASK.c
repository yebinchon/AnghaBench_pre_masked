
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_cfm_rsp {int icid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int dummy; } ;
struct l2cap_chan {scalar_t__ move_state; scalar_t__ local_amp_id; scalar_t__ move_id; scalar_t__ hs_hchan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_4 (struct l2cap_conn*,int) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(struct l2cap_conn *VAR_3,
       struct l2cap_cmd_hdr *VAR_4,
       u16 VAR_5, void *VAR_6)
{
 struct l2cap_move_chan_cfm_rsp *VAR_7 = VAR_6;
 struct l2cap_chan *VAR_8;
 u16 VAR_9;

 if (VAR_5 != sizeof(*VAR_7))
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_7->icid);

 FUNC_0("icid 0x%4.4x", VAR_9);

 VAR_8 = FUNC_4(VAR_3, VAR_9);
 if (!VAR_8)
  return 0;

 FUNC_1(VAR_8);

 if (VAR_8->move_state == VAR_2) {
  VAR_8->local_amp_id = VAR_8->move_id;

  if (VAR_8->local_amp_id == VAR_0 && VAR_8->hs_hchan)
   FUNC_2(VAR_8);

  FUNC_5(VAR_8);
 }

 FUNC_3(VAR_8);

 return 0;
}
