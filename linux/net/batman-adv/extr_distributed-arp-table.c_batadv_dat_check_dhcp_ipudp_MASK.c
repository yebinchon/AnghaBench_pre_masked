
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int version; int ihl; scalar_t__ protocol; scalar_t__ source; int saddr; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int version; int ihl; scalar_t__ protocol; scalar_t__ source; int saddr; } ;
typedef int _udphdr ;
typedef int _iphdr ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 struct udphdr* FUNC_2 (struct sk_buff*,unsigned int,int,struct udphdr*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static bool
FUNC_5(struct sk_buff *VAR_1, __be32 *VAR_2)
{
 unsigned int VAR_3 = FUNC_3(VAR_1);
 struct udphdr *VAR_4, VAR_5;
 struct iphdr *VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_7), &VAR_7);
 if (!VAR_6 || VAR_6->version != 4 || VAR_6->ihl * 4 < sizeof(VAR_7))
  return 0;

 if (VAR_6->protocol != VAR_0)
  return 0;

 VAR_3 += VAR_6->ihl * 4;
 FUNC_4(VAR_1, VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_5), &VAR_5);
 if (!VAR_4 || VAR_4->source != FUNC_1(67))
  return 0;

 *VAR_2 = FUNC_0(&VAR_6->saddr);

 return 1;
}
