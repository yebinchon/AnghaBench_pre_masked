
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct napi_struct {struct sk_buff* skb; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct napi_struct*,int ) ;
 int FUNC_1 (struct sk_buff*,struct napi_struct*) ;

struct sk_buff *FUNC_2(struct napi_struct *VAR_1)
{
 struct sk_buff *VAR_2 = VAR_1->skb;

 if (!VAR_2) {
  VAR_2 = FUNC_0(VAR_1, VAR_0);
  if (VAR_2) {
   VAR_1->skb = VAR_2;
   FUNC_1(VAR_2, VAR_1);
  }
 }
 return VAR_2;
}
