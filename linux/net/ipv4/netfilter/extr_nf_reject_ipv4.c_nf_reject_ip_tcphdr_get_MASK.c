
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ rst; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int frag_off; scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int,int ,scalar_t__) ;
 struct tcphdr* FUNC_4 (struct sk_buff*,int ,int,struct tcphdr*) ;

const struct tcphdr *FUNC_5(struct sk_buff *VAR_2,
          struct tcphdr *VAR_3, int VAR_4)
{
 const struct tcphdr *VAR_5;


 if (FUNC_1(VAR_2)->frag_off & FUNC_0(VAR_1))
  return ((void*)0);

 if (FUNC_1(VAR_2)->protocol != VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_4(VAR_2, FUNC_2(VAR_2),
     sizeof(struct tcphdr), VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);


 if (VAR_5->rst)
  return ((void*)0);


 if (FUNC_3(VAR_2, VAR_4, FUNC_2(VAR_2), VAR_0))
  return ((void*)0);

 return VAR_5;
}
