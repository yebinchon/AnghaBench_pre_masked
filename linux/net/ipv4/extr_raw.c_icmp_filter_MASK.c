
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct icmphdr {int type; } ;
typedef int _hdr ;
typedef unsigned int __u32 ;
struct TYPE_3__ {unsigned int data; } ;
struct TYPE_4__ {TYPE_1__ filter; } ;


 TYPE_2__* FUNC_0 (struct sock const*) ;
 struct icmphdr* FUNC_1 (struct sk_buff const*,int ,int,struct icmphdr*) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_3(const struct sock *VAR_0, const struct sk_buff *VAR_1)
{
 struct icmphdr VAR_2;
 const struct icmphdr *VAR_3;

 VAR_3 = FUNC_1(VAR_1, FUNC_2(VAR_1),
     sizeof(VAR_2), &VAR_2);
 if (!VAR_3)
  return 1;

 if (VAR_3->type < 32) {
  __u32 VAR_4 = FUNC_0(VAR_0)->filter.data;

  return ((1U << VAR_3->type) & VAR_4) != 0;
 }


 return 0;
}
