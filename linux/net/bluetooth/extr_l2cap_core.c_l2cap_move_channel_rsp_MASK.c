
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_rsp {int result; int icid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int ident; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct l2cap_conn*,int,int) ;
 int FUNC_2 (struct l2cap_conn*,int ,int,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct l2cap_conn *VAR_3,
      struct l2cap_cmd_hdr *VAR_4,
      u16 VAR_5, void *VAR_6)
{
 struct l2cap_move_chan_rsp *VAR_7 = VAR_6;
 u16 VAR_8, VAR_9;

 if (VAR_5 != sizeof(*VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_7->icid);
 VAR_9 = FUNC_3(VAR_7->result);

 FUNC_0("icid 0x%4.4x, result 0x%4.4x", VAR_8, VAR_9);

 if (VAR_9 == VAR_2 || VAR_9 == VAR_1)
  FUNC_1(VAR_3, VAR_8, VAR_9);
 else
  FUNC_2(VAR_3, VAR_4->ident, VAR_8, VAR_9);

 return 0;
}
