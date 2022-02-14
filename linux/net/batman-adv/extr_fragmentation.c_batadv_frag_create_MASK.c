
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; scalar_t__ len; int priority; } ;
struct batadv_frag_packet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct batadv_frag_packet*,unsigned int) ;
 struct sk_buff* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_1,
       struct batadv_frag_packet *VAR_2,
       unsigned int VAR_3)
{
 struct sk_buff *VAR_4;
 unsigned int VAR_5 = sizeof(*VAR_2);
 unsigned int VAR_6 = VAR_3 + VAR_5;

 VAR_4 = FUNC_1(((void*)0), VAR_6 + VAR_0);
 if (!VAR_4)
  goto err;

 VAR_4->priority = VAR_1->priority;


 FUNC_3(VAR_4, VAR_5 + VAR_0);
 FUNC_4(VAR_1, VAR_4, VAR_1->len - VAR_3);


 FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_4->data, VAR_2, VAR_5);

err:
 return VAR_4;
}
