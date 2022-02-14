
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dev; } ;
struct ip_tunnel_encap {scalar_t__ sport; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ,struct sk_buff*,int ,int ,int) ;

int FUNC_3(struct sk_buff *VAR_0, struct ip_tunnel_encap *VAR_1,
         u8 *VAR_2, __be16 *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;

 *VAR_3 = VAR_1->sport ? : FUNC_2(FUNC_0(VAR_0->dev),
      VAR_0, 0, 0, 0);

 return 0;
}
