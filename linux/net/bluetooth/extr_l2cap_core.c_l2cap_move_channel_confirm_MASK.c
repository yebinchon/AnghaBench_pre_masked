
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_cfm {int result; int icid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {scalar_t__ move_state; scalar_t__ local_amp_id; scalar_t__ move_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_3 (struct l2cap_conn*,int) ;
 int FUNC_4 (struct l2cap_chan*) ;
 int FUNC_5 (struct l2cap_conn*,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct l2cap_conn *VAR_4,
          struct l2cap_cmd_hdr *VAR_5,
          u16 VAR_6, void *VAR_7)
{
 struct l2cap_move_chan_cfm *VAR_8 = VAR_7;
 struct l2cap_chan *VAR_9;
 u16 VAR_10, VAR_11;

 if (VAR_6 != sizeof(*VAR_8))
  return -VAR_1;

 VAR_10 = FUNC_6(VAR_8->icid);
 VAR_11 = FUNC_6(VAR_8->result);

 FUNC_0("icid 0x%4.4x, result 0x%4.4x", VAR_10, VAR_11);

 VAR_9 = FUNC_3(VAR_4, VAR_10);
 if (!VAR_9) {

  FUNC_5(VAR_4, VAR_5->ident, VAR_10);
  return 0;
 }

 if (VAR_9->move_state == VAR_3) {
  if (VAR_11 == VAR_2) {
   VAR_9->local_amp_id = VAR_9->move_id;
   if (VAR_9->local_amp_id == VAR_0)
    FUNC_1(VAR_9);
  } else {
   VAR_9->move_id = VAR_9->local_amp_id;
  }

  FUNC_4(VAR_9);
 }

 FUNC_5(VAR_4, VAR_5->ident, VAR_10);

 FUNC_2(VAR_9);

 return 0;
}
