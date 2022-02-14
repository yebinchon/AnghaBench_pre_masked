
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_skb_reader {scalar_t__ offset; scalar_t__ count; int csum; struct sk_buff* skb; } ;
struct xdr_buf {int dummy; } ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; int dev; int csum_complete_sw; int csum; int data; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 int FUNC_3 (int ,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct xdr_buf*,int ,struct xdr_skb_reader*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_8(struct xdr_buf *VAR_3, struct sk_buff *VAR_4)
{
 struct xdr_skb_reader VAR_5;

 VAR_5.skb = VAR_4;
 VAR_5.offset = 0;
 VAR_5.count = VAR_4->len - VAR_5.offset;

 if (FUNC_5(VAR_4))
  goto no_checksum;

 VAR_5.csum = FUNC_2(VAR_4->data, VAR_5.offset, VAR_4->csum);
 if (FUNC_7(VAR_3, 0, &VAR_5, VAR_1) < 0)
  return -1;
 if (VAR_5.offset != VAR_4->len) {
  __wsum VAR_6;
  VAR_6 = FUNC_4(VAR_4, VAR_5.offset, VAR_4->len - VAR_5.offset, 0);
  VAR_5.csum = FUNC_0(VAR_5.csum, VAR_6, VAR_5.offset);
 }
 if (VAR_5.count)
  return -1;
 if (FUNC_1(VAR_5.csum))
  return -1;
 if (FUNC_6(VAR_4->ip_summed == VAR_0) &&
     !VAR_4->csum_complete_sw)
  FUNC_3(VAR_4->dev, VAR_4);
 return 0;
no_checksum:
 if (FUNC_7(VAR_3, 0, &VAR_5, VAR_2) < 0)
  return -1;
 if (VAR_5.count)
  return -1;
 return 0;
}
