
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; int dev; } ;
struct ethhdr {scalar_t__ h_proto; } ;
struct batadv_priv {int dummy; } ;
struct arphdr {scalar_t__ ar_hrd; scalar_t__ ar_pro; scalar_t__ ar_hln; int ar_pln; scalar_t__ ar_op; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (struct sk_buff*,int) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static u16 FUNC_15(struct batadv_priv *VAR_6,
          struct sk_buff *VAR_7, int VAR_8)
{
 struct arphdr *VAR_9;
 struct ethhdr *VAR_10;
 __be32 VAR_11, VAR_12;
 u8 *VAR_13, *VAR_14;
 u16 VAR_15 = 0;


 if (FUNC_14(!FUNC_13(VAR_7, VAR_8 + VAR_3)))
  goto out;

 VAR_10 = (struct ethhdr *)(VAR_7->data + VAR_8);

 if (VAR_10->h_proto != FUNC_5(VAR_4))
  goto out;


 if (FUNC_14(!FUNC_13(VAR_7, VAR_8 + VAR_3 +
        FUNC_0(VAR_7->dev))))
  goto out;

 VAR_9 = (struct arphdr *)(VAR_7->data + VAR_8 + VAR_3);


 if (VAR_9->ar_hrd != FUNC_5(VAR_0))
  goto out;

 if (VAR_9->ar_pro != FUNC_5(VAR_5))
  goto out;

 if (VAR_9->ar_hln != VAR_2)
  goto out;

 if (VAR_9->ar_pln != 4)
  goto out;




 VAR_11 = FUNC_4(VAR_7, VAR_8);
 VAR_12 = FUNC_3(VAR_7, VAR_8);
 if (FUNC_7(VAR_11) || FUNC_8(VAR_11) ||
     FUNC_7(VAR_12) || FUNC_8(VAR_12) ||
     FUNC_9(VAR_11) || FUNC_6(VAR_11) ||
     FUNC_9(VAR_12) || FUNC_6(VAR_12))
  goto out;

 VAR_13 = FUNC_2(VAR_7, VAR_8);
 if (FUNC_11(VAR_13) || FUNC_10(VAR_13))
  goto out;


 if (VAR_9->ar_op != FUNC_5(VAR_1)) {
  VAR_14 = FUNC_1(VAR_7, VAR_8);
  if (FUNC_11(VAR_14) ||
      FUNC_10(VAR_14))
   goto out;
 }

 VAR_15 = FUNC_12(VAR_9->ar_op);
out:
 return VAR_15;
}
