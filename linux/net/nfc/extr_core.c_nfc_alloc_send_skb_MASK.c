
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nfc_dev {unsigned int tx_headroom; unsigned int tx_tailroom; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_1 (struct sock*,unsigned int,unsigned int,unsigned int*) ;

struct sk_buff *FUNC_2(struct nfc_dev *VAR_2, struct sock *VAR_3,
       unsigned int VAR_4, unsigned int VAR_5,
       unsigned int *VAR_6)
{
 struct sk_buff *VAR_7;
 unsigned int VAR_8;

 VAR_8 = VAR_5 +
  VAR_2->tx_headroom + VAR_2->tx_tailroom + VAR_1;

 VAR_7 = FUNC_1(VAR_3, VAR_8, VAR_4 & VAR_0, VAR_6);
 if (VAR_7)
  FUNC_0(VAR_7, VAR_2->tx_headroom + VAR_1);

 return VAR_7;
}
