
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_rej_cid {void* dcid; void* scid; int reason; } ;
typedef int rej ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l2cap_conn*,int ,int ,int,struct l2cap_cmd_rej_cid*) ;

__attribute__((used)) static void FUNC_3(struct l2cap_conn *VAR_2, u8 VAR_3,
       u16 VAR_4, u16 VAR_5)
{
 struct l2cap_cmd_rej_cid VAR_6;

 VAR_6.reason = FUNC_1(VAR_1);
 VAR_6.scid = FUNC_0(VAR_4);
 VAR_6.dcid = FUNC_0(VAR_5);

 FUNC_2(VAR_2, VAR_3, VAR_0, sizeof(VAR_6), &VAR_6);
}
