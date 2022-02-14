
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct l2cap_ctrl {scalar_t__ sar; scalar_t__ reqseq; scalar_t__ final; size_t txseq; scalar_t__ poll; size_t super; int sframe; } ;
struct l2cap_chan {scalar_t__ fcs; scalar_t__ mps; scalar_t__ mode; scalar_t__ tx_state; int data; } ;
struct TYPE_2__ {struct l2cap_ctrl l2cap; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__,size_t) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct l2cap_chan*,struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_6 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*,int ) ;
 int FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (struct l2cap_chan*,struct l2cap_ctrl*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct l2cap_chan *VAR_13, struct sk_buff *VAR_14)
{
 struct l2cap_ctrl *VAR_15 = &FUNC_3(VAR_14)->l2cap;
 u16 VAR_16;
 u8 VAR_17;

 FUNC_2(VAR_13, VAR_14);

 VAR_16 = VAR_14->len;






 if (FUNC_5(VAR_13, VAR_14))
  goto drop;

 if (!VAR_15->sframe && VAR_15->sar == VAR_10)
  VAR_16 -= VAR_11;

 if (VAR_13->fcs == VAR_6)
  VAR_16 -= VAR_7;

 if (VAR_16 > VAR_13->mps) {
  FUNC_7(VAR_13, VAR_0);
  goto drop;
 }

 if ((VAR_13->mode == VAR_8 ||
      VAR_13->mode == VAR_9) && FUNC_9(VAR_13->data, VAR_14))
  goto drop;

 if (!VAR_15->sframe) {
  int VAR_18;

  FUNC_0("iframe sar %d, reqseq %d, final %d, txseq %d",
         VAR_15->sar, VAR_15->reqseq, VAR_15->final,
         VAR_15->txseq);




  if (VAR_15->final && VAR_13->tx_state != VAR_12)
   goto drop;

  if (VAR_13->mode != VAR_9) {
   VAR_17 = VAR_1;
   VAR_18 = FUNC_6(VAR_13, VAR_15, VAR_14, VAR_17);
  } else {
   VAR_18 = FUNC_8(VAR_13, VAR_15, VAR_14);
  }

  if (VAR_18)
   FUNC_7(VAR_13, VAR_0);
 } else {
  const u8 VAR_19[4] = {
   VAR_4, VAR_2,
   VAR_3, VAR_5
  };


  if (VAR_13->mode == VAR_9)
   goto drop;

  FUNC_0("sframe reqseq %d, final %d, poll %d, super %d",
         VAR_15->reqseq, VAR_15->final, VAR_15->poll,
         VAR_15->super);

  if (VAR_16 != 0) {
   FUNC_1("Trailing bytes: %d in sframe", VAR_16);
   FUNC_7(VAR_13, VAR_0);
   goto drop;
  }


  if (VAR_15->final && (VAR_15->poll ||
           VAR_13->tx_state != VAR_12))
   goto drop;

  VAR_17 = VAR_19[VAR_15->super];
  if (FUNC_6(VAR_13, VAR_15, VAR_14, VAR_17))
   FUNC_7(VAR_13, VAR_0);
 }

 return 0;

drop:
 FUNC_4(VAR_14);
 return 0;
}
