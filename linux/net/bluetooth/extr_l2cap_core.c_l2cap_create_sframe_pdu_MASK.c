
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int priority; int len; scalar_t__ data; } ;
struct l2cap_hdr {void* cid; void* len; } ;
struct l2cap_chan {scalar_t__ fcs; int flags; scalar_t__ dcid; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (struct l2cap_chan*) ;
 struct sk_buff* FUNC_2 (int,int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,struct l2cap_hdr*) ;
 int FUNC_6 (int ,struct l2cap_hdr*) ;
 struct l2cap_hdr* FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct l2cap_chan *VAR_9,
            u32 VAR_10)
{
 struct sk_buff *VAR_11;
 struct l2cap_hdr *VAR_12;
 int VAR_13 = FUNC_1(VAR_9);

 if (VAR_9->fcs == VAR_6)
  VAR_13 += VAR_7;

 VAR_11 = FUNC_2(VAR_13, VAR_2);

 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_12 = FUNC_7(VAR_11, VAR_8);
 VAR_12->len = FUNC_3(VAR_13 - VAR_8);
 VAR_12->cid = FUNC_3(VAR_9->dcid);

 if (FUNC_8(VAR_1, &VAR_9->flags))
  FUNC_6(VAR_10, FUNC_7(VAR_11, VAR_5));
 else
  FUNC_5(VAR_10, FUNC_7(VAR_11, VAR_4));

 if (VAR_9->fcs == VAR_6) {
  u16 VAR_14 = FUNC_4(0, (u8 *)VAR_11->data, VAR_11->len);
  FUNC_5(VAR_14, FUNC_7(VAR_11, VAR_7));
 }

 VAR_11->priority = VAR_3;
 return VAR_11;
}
