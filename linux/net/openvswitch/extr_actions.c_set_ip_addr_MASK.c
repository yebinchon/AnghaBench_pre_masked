
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int check; } ;
typedef int __be32 ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct iphdr*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, struct iphdr *VAR_1,
   __be32 *VAR_2, __be32 VAR_3)
{
 FUNC_2(VAR_0, VAR_1, *VAR_2, VAR_3);
 FUNC_0(&VAR_1->check, *VAR_2, VAR_3);
 FUNC_1(VAR_0);
 *VAR_2 = VAR_3;
}
