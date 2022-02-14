
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct l2cap_move_chan_cfm {void* result; void* icid; } ;
struct l2cap_conn {int dummy; } ;
typedef int cfm ;


 int FUNC_0 (char*,struct l2cap_conn*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_conn*) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int,struct l2cap_move_chan_cfm*) ;

__attribute__((used)) static void FUNC_4(struct l2cap_conn *VAR_2, u16 VAR_3)
{
 struct l2cap_move_chan_cfm VAR_4;

 FUNC_0("conn %p, icid 0x%4.4x", VAR_2, VAR_3);

 VAR_4.icid = FUNC_1(VAR_3);
 VAR_4.result = FUNC_1(VAR_0);

 FUNC_3(VAR_2, FUNC_2(VAR_2), VAR_1,
         sizeof(VAR_4), &VAR_4);
}
