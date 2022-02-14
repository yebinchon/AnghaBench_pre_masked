
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {scalar_t__ check; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,struct sk_buff*,int ,int ,int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, unsigned int VAR_3,
         __be32 VAR_4, __be32 VAR_5)
{
 struct udphdr *VAR_6;

 if (!FUNC_1(VAR_2, VAR_3 + sizeof(*VAR_6)) ||
     FUNC_3(VAR_2, VAR_3 + sizeof(*VAR_6)))
  return -1;

 VAR_6 = (void *)(FUNC_2(VAR_2) + VAR_3);
 if (VAR_6->check || VAR_2->ip_summed == VAR_0) {
  FUNC_0(&VAR_6->check, VAR_2, VAR_4,
      VAR_5, 1);
  if (!VAR_6->check)
   VAR_6->check = VAR_1;
 }

 return 0;
}
