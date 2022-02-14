
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn {int chan_lock; } ;
struct l2cap_cmd_rej_unk {int dummy; } ;
struct l2cap_cmd_hdr {int ident; } ;
struct l2cap_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct l2cap_chan* FUNC_0 (struct l2cap_conn*,int ) ;
 int FUNC_1 (struct l2cap_chan*,int ) ;
 int FUNC_2 (struct l2cap_chan*) ;
 int FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct l2cap_conn *VAR_2,
           struct l2cap_cmd_hdr *VAR_3, u16 VAR_4,
           u8 *VAR_5)
{
 struct l2cap_cmd_rej_unk *VAR_6 = (struct l2cap_cmd_rej_unk *) VAR_5;
 struct l2cap_chan *VAR_7;

 if (VAR_4 < sizeof(*VAR_6))
  return -VAR_1;

 FUNC_4(&VAR_2->chan_lock);

 VAR_7 = FUNC_0(VAR_2, VAR_3->ident);
 if (!VAR_7)
  goto done;

 FUNC_2(VAR_7);
 FUNC_1(VAR_7, VAR_0);
 FUNC_3(VAR_7);

done:
 FUNC_5(&VAR_2->chan_lock);
 return 0;
}
