
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dev; scalar_t__ data; } ;
struct net_protocol {int (* err_handler ) (struct sk_buff*,int ) ;} ;
struct iphdr {int protocol; int ihl; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int,int ) ;
 struct net_protocol* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_6(struct sk_buff *VAR_2, u32 VAR_3)
{
 const struct iphdr *VAR_4 = (const struct iphdr *) VAR_2->data;
 const struct net_protocol *VAR_5;
 int VAR_6 = VAR_4->protocol;




 if (!FUNC_2(VAR_2, VAR_4->ihl * 4 + 8)) {
  FUNC_0(FUNC_1(VAR_2->dev), VAR_0);
  return;
 }

 FUNC_3(VAR_2, VAR_6, VAR_3);

 VAR_5 = FUNC_4(VAR_1[VAR_6]);
 if (VAR_5 && VAR_5->err_handler)
  VAR_5->err_handler(VAR_2, VAR_3);
}
