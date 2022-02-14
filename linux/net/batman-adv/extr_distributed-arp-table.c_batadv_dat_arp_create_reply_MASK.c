
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct batadv_priv {int soft_iface; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 struct sk_buff* FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ,unsigned short) ;

__attribute__((used)) static struct sk_buff *
FUNC_4(struct batadv_priv *VAR_5, __be32 VAR_6,
       __be32 VAR_7, u8 *VAR_8, u8 *VAR_9,
       unsigned short VAR_10)
{
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_0(VAR_0, VAR_3, VAR_7, VAR_5->soft_iface,
    VAR_6, VAR_9, VAR_8, VAR_9);
 if (!VAR_11)
  return ((void*)0);

 FUNC_2(VAR_11);

 if (VAR_10 & VAR_1)
  VAR_11 = FUNC_3(VAR_11, FUNC_1(VAR_2),
          VAR_10 & VAR_4);

 return VAR_11;
}
