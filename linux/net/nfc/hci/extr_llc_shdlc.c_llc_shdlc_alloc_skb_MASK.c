
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_shdlc {scalar_t__ tx_headroom; scalar_t__ tx_tailroom; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct llc_shdlc *VAR_2,
        int VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_2->tx_headroom + VAR_1 +
   VAR_2->tx_tailroom + VAR_3, VAR_0);
 if (VAR_4)
  FUNC_1(VAR_4, VAR_2->tx_headroom + VAR_1);

 return VAR_4;
}
