
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int protocol; int daddr; int saddr; } ;
struct audit_buffer {int dummy; } ;
typedef int _iph ;


 int FUNC_0 (struct audit_buffer*,char*,int *,int *,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*,int ,int,struct iphdr*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_3(struct audit_buffer *VAR_0, struct sk_buff *VAR_1)
{
 struct iphdr VAR_2;
 const struct iphdr *VAR_3;

 VAR_3 = FUNC_1(VAR_1, FUNC_2(VAR_1), sizeof(VAR_2), &VAR_2);
 if (!VAR_3)
  return 0;

 FUNC_0(VAR_0, " saddr=%pI4 daddr=%pI4 proto=%hhu",
    &VAR_3->saddr, &VAR_3->daddr, VAR_3->protocol);

 return 1;
}
