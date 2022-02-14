
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uni_cell_header {scalar_t__ pti; int vci; int vpi; } ;
struct tx_descriptor {unsigned int dataptr; int iscell; int own; int c; int sop; int eop; scalar_t__ byteoff; int datalen; int member_0; } ;
struct sk_buff {scalar_t__ data; } ;
struct atm_vcc {TYPE_1__* stats; } ;
struct TYPE_6__ {int wtx_oam; TYPE_2__* conn; int wtx_drop_oam; int wtx_err_oam; } ;
struct TYPE_5__ {struct tx_descriptor* tx_desc; struct sk_buff** tx_skb; } ;
struct TYPE_4__ {int tx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (struct atm_vcc*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (scalar_t__,void*,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_13(struct atm_vcc *VAR_8, void *VAR_9, int VAR_10)
{
 int VAR_11;
 struct uni_cell_header *VAR_12 = (struct uni_cell_header *)VAR_9;
 int VAR_13;
 struct sk_buff *VAR_14;
 struct tx_descriptor VAR_15 = {0};

 if ( ((VAR_12->pti == VAR_1 || VAR_12->pti == VAR_0)
   && FUNC_7(VAR_12->vpi, VAR_12->vci) < 0)
   || ((VAR_12->vci == 0x03 || VAR_12->vci == 0x04)
   && FUNC_6(VAR_12->vpi) < 0) )
 {
  VAR_6.wtx_err_oam++;
  return -VAR_3;
 }

 if ( !VAR_7 ) {
  FUNC_11("not in showtime\n");
  VAR_6.wtx_drop_oam++;
  return -VAR_4;
 }

 VAR_11 = FUNC_5(VAR_8);
 if ( VAR_11 < 0 ) {
  FUNC_11("FIND_VCC_FAIL\n");
  VAR_6.wtx_drop_oam++;
  return -VAR_3;
 }

 VAR_14 = FUNC_1(VAR_2);
 if ( VAR_14 == ((void*)0) ) {
  FUNC_11("ALLOC_SKB_TX_FAIL\n");
  VAR_6.wtx_drop_oam++;
  return -VAR_5;
 }
 FUNC_12(VAR_14, VAR_2);
 FUNC_10(VAR_14->data, VAR_9, VAR_2);

 VAR_15.dataptr = (unsigned int)VAR_14->data >> 2;
 VAR_15.datalen = VAR_2;
 VAR_15.byteoff = 0;
 VAR_15.iscell = 1;

 VAR_15.own = 1;
 VAR_15.c = 1;
 VAR_15.sop = VAR_15.eop = 1;

 VAR_13 = FUNC_8(VAR_11);
 if ( VAR_13 < 0 ) {
  FUNC_3(VAR_14);
  FUNC_11("ALLOC_TX_CONNECTION_FAIL\n");
  VAR_6.wtx_drop_oam++;
  return -VAR_4;
 }

 if ( VAR_8->stats )
  FUNC_2(&VAR_8->stats->tx);


 if ( VAR_6.conn[VAR_11].tx_skb[VAR_13] != ((void*)0) )
  FUNC_3(VAR_6.conn[VAR_11].tx_skb[VAR_13]);
 VAR_6.conn[VAR_11].tx_skb[VAR_13] = VAR_14;


 VAR_6.conn[VAR_11].tx_desc[VAR_13] = VAR_15;
 FUNC_4((unsigned long)VAR_14->data, VAR_2);

 FUNC_9(VAR_11, 1);

 VAR_6.wtx_oam++;
 FUNC_0();

 return 0;
}
