
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tx_inband_header {int clp; scalar_t__ gfc; int vpi; int vci; int pti; scalar_t__ res1; int pad; scalar_t__ cpi; scalar_t__ uu; } ;
struct tx_descriptor {unsigned int dataptr; int datalen; int byteoff; int iscell; int own; int c; int sop; int eop; int member_0; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_6__ {scalar_t__ aal; } ;
struct atm_vcc {int atm_options; TYPE_3__* stats; TYPE_2__ qos; int vpi; int vci; } ;
struct TYPE_8__ {int wtx_drop_pdu; int wtx_err_pdu; TYPE_1__* conn; int wtx_pdu; } ;
struct TYPE_7__ {int tx_err; int tx; } ;
struct TYPE_5__ {struct tx_descriptor* tx_desc; int lock; struct sk_buff** tx_skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct sk_buff*,struct atm_vcc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned long,int) ;
 int FUNC_5 (struct atm_vcc*) ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct sk_buff*,int,int ,int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_17(struct atm_vcc *VAR_11, struct sk_buff *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 int VAR_18;
 unsigned long VAR_19;
 struct tx_descriptor VAR_20 = {0};
 struct tx_inband_header *VAR_21;

 if ( VAR_11 == ((void*)0) || VAR_12 == ((void*)0) )
  return -VAR_4;


 VAR_14 = FUNC_5(VAR_11);
 if ( VAR_14 < 0 ) {
  VAR_13 = -VAR_4;
  goto FIND_VCC_FAIL;
 }

 if ( !VAR_10 ) {
  FUNC_8("not in showtime\n");
  VAR_13 = -VAR_5;
  goto PPE_SEND_FAIL;
 }

 VAR_16 = (unsigned int)VAR_12->data & (VAR_3 - 1);
 VAR_17 = sizeof(*VAR_21) + VAR_16;
 if (!FUNC_12(VAR_12, VAR_17)) {
  int VAR_22 = 0;
  int VAR_23;

  if (FUNC_13(VAR_12) < VAR_17)
   VAR_22 = VAR_17 - FUNC_13(VAR_12);

  VAR_23 = FUNC_11(VAR_12, VAR_22, 0, VAR_6);
  if (VAR_23) {
   FUNC_10("pskb_expand_head failed.\n");
   FUNC_1(VAR_12, VAR_11);
   return VAR_23;
  }
 }

 VAR_18 = VAR_12->len;
 VAR_21 = (void *)FUNC_14(VAR_12, VAR_16 + VAR_7);


 if ( VAR_11->qos.aal == VAR_0 ) {

  VAR_21->uu = 0;
  VAR_21->cpi = 0;
  VAR_21->pad = VAR_8;
  VAR_21->res1 = 0;


  VAR_21->clp = (VAR_11->atm_options & VAR_1) ? 1 : 0;
  VAR_21->pti = VAR_2;
  VAR_21->vci = VAR_11->vci;
  VAR_21->vpi = VAR_11->vpi;
  VAR_21->gfc = 0;


  VAR_20.dataptr = (unsigned int)VAR_12->data >> 2;
  VAR_20.datalen = VAR_18;
  VAR_20.byteoff = VAR_16;
  VAR_20.iscell = 0;
 } else {
  VAR_20.dataptr = (unsigned int)VAR_12->data >> 2;
  VAR_20.datalen = VAR_12->len;
  VAR_20.byteoff = VAR_16;
  VAR_20.iscell = 1;
 }

 VAR_20.own = 1;
 VAR_20.c = 1;
 VAR_20.sop = VAR_20.eop = 1;

 FUNC_15(&VAR_9.conn[VAR_14].lock, VAR_19);
 VAR_15 = FUNC_6(VAR_14);
 if ( VAR_15 < 0 ) {
  FUNC_16(&VAR_9.conn[VAR_14].lock, VAR_19);
  FUNC_8("ALLOC_TX_CONNECTION_FAIL\n");
  VAR_13 = -VAR_5;
  goto PPE_SEND_FAIL;
 }

 if ( VAR_9.conn[VAR_14].tx_skb[VAR_15] != ((void*)0) )
  FUNC_3(VAR_9.conn[VAR_14].tx_skb[VAR_15]);
 VAR_9.conn[VAR_14].tx_skb[VAR_15] = VAR_12;

 FUNC_16(&VAR_9.conn[VAR_14].lock, VAR_19);

 if ( VAR_11->stats )
  FUNC_2(&VAR_11->stats->tx);
 if ( VAR_11->qos.aal == VAR_0 )
  VAR_9.wtx_pdu++;

 VAR_9.conn[VAR_14].tx_desc[VAR_15] = VAR_20;
 FUNC_4((unsigned long)VAR_12->data, VAR_12->len);

 FUNC_7(VAR_14, 1);

 FUNC_0();

 return 0;

FIND_VCC_FAIL:
 FUNC_9("FIND_VCC_FAIL\n");
 VAR_9.wtx_err_pdu++;
 FUNC_3(VAR_12);
 return VAR_13;

PPE_SEND_FAIL:
 if ( VAR_11->qos.aal == VAR_0 )
  VAR_9.wtx_drop_pdu++;
 if ( VAR_11->stats )
  FUNC_2(&VAR_11->stats->tx_err);
 FUNC_3(VAR_12);
 return VAR_13;
}
