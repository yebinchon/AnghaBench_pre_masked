
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct icmp6hdr {unsigned int icmp6_type; } ;
typedef unsigned int __u32 ;
struct TYPE_3__ {unsigned int* data; } ;
struct TYPE_4__ {TYPE_1__ filter; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock const*) ;
 struct icmp6hdr* FUNC_1 (struct sk_buff const*,int ,int ,struct icmp6hdr*) ;
 int FUNC_2 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_3(const struct sock *VAR_1, const struct sk_buff *VAR_2)
{
 struct icmp6hdr VAR_3;
 const struct icmp6hdr *VAR_4;




 VAR_4 = FUNC_1(VAR_2, FUNC_2(VAR_2),
     VAR_0, &VAR_3);
 if (VAR_4) {
  const __u32 *VAR_5 = &FUNC_0(VAR_1)->filter.data[0];
  unsigned int VAR_6 = VAR_4->icmp6_type;

  return (VAR_5[VAR_6 >> 5] & (1U << (VAR_6 & 31))) != 0;
 }
 return 1;
}
