
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct l2cap_le_credits {int credits; int cid; } ;
struct l2cap_conn {int dummy; } ;
struct l2cap_cmd_hdr {int dummy; } ;
struct l2cap_chan {int tx_credits; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* resume ) (struct l2cap_chan*) ;} ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2cap_chan*) ;
 struct l2cap_chan* FUNC_4 (struct l2cap_conn*,int) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,int ) ;
 int FUNC_7 (struct l2cap_chan*) ;

__attribute__((used)) static inline int FUNC_8(struct l2cap_conn *VAR_4,
       struct l2cap_cmd_hdr *VAR_5, u16 VAR_6,
       u8 *VAR_7)
{
 struct l2cap_le_credits *VAR_8;
 struct l2cap_chan *VAR_9;
 u16 VAR_10, VAR_11, VAR_12;

 if (VAR_6 != sizeof(*VAR_8))
  return -VAR_2;

 VAR_8 = (struct l2cap_le_credits *) VAR_7;
 VAR_10 = FUNC_2(VAR_8->cid);
 VAR_11 = FUNC_2(VAR_8->credits);

 FUNC_0("cid 0x%4.4x credits 0x%4.4x", VAR_10, VAR_11);

 VAR_9 = FUNC_4(VAR_4, VAR_10);
 if (!VAR_9)
  return -VAR_0;

 VAR_12 = VAR_3 - VAR_9->tx_credits;
 if (VAR_11 > VAR_12) {
  FUNC_1("LE credits overflow");
  FUNC_6(VAR_9, VAR_1);
  FUNC_3(VAR_9);




  return 0;
 }

 VAR_9->tx_credits += VAR_11;


 FUNC_5(VAR_9);

 if (VAR_9->tx_credits)
  VAR_9->ops->resume(VAR_9);

 FUNC_3(VAR_9);

 return 0;
}
