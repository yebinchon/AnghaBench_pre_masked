
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct sk_msg {int skb; } ;
struct scatterlist {int length; } ;


 int FUNC_0 (struct scatterlist*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct sock*,int) ;
 struct scatterlist* FUNC_4 (struct sk_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_0, struct sk_msg *VAR_1, u32 VAR_2,
       bool VAR_3)
{
 struct scatterlist *VAR_4 = FUNC_4(VAR_1, VAR_2);
 u32 VAR_5 = VAR_4->length;

 if (VAR_3)
  FUNC_3(VAR_0, VAR_5);
 if (!VAR_1->skb)
  FUNC_1(FUNC_2(VAR_4));
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 return VAR_5;
}
