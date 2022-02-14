
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lowpan_peer {int chan; } ;
struct l2cap_conn {int chan; } ;


 int FUNC_0 (char*,struct lowpan_peer*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct lowpan_peer* FUNC_2 (struct lowpan_peer*) ;

__attribute__((used)) static int FUNC_3(struct l2cap_conn *VAR_1, u8 VAR_2)
{
 struct lowpan_peer *VAR_3;

 FUNC_0("conn %p dst type %d", VAR_1, VAR_2);

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_0("peer %p chan %p", VAR_3, VAR_3->chan);

 FUNC_1(VAR_3->chan, VAR_0);

 return 0;
}
