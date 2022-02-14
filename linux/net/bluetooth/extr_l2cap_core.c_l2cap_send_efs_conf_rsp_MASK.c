
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int dummy; } ;
struct l2cap_chan {int conf_state; struct l2cap_conn* conn; } ;


 int FUNC_0 (char*,struct l2cap_conn*,struct l2cap_chan*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct l2cap_chan*,void*,int ,int ) ;
 int FUNC_3 (struct l2cap_conn*,int ,int ,int ,void*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct l2cap_chan *VAR_4, void *VAR_5,
        u8 VAR_6, u16 VAR_7)
{
 struct l2cap_conn *VAR_8 = VAR_4->conn;

 FUNC_0("conn %p chan %p ident %d flags 0x%4.4x", VAR_8, VAR_4, VAR_6,
        VAR_7);

 FUNC_1(VAR_0, &VAR_4->conf_state);
 FUNC_4(VAR_1, &VAR_4->conf_state);

 FUNC_3(VAR_8, VAR_6, VAR_2,
         FUNC_2(VAR_4, VAR_5,
         VAR_3, VAR_7), VAR_5);
}
