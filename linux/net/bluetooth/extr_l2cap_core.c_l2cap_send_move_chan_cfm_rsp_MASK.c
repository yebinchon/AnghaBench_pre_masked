
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_move_chan_cfm_rsp {int icid; } ;
struct l2cap_conn {int dummy; } ;
typedef int rsp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_conn*,int ,int ,int,struct l2cap_move_chan_cfm_rsp*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_conn *VAR_1, u8 VAR_2,
      u16 VAR_3)
{
 struct l2cap_move_chan_cfm_rsp VAR_4;

 FUNC_0("icid 0x%4.4x", VAR_3);

 VAR_4.icid = FUNC_1(VAR_3);
 FUNC_2(VAR_1, VAR_2, VAR_0, sizeof(VAR_4), &VAR_4);
}
