
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ ee_info; scalar_t__ ee_data; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct sk_buff {int dummy; } ;


 struct sock_exterr_skb* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0, u32 VAR_1, u16 VAR_2)
{
 struct sock_exterr_skb *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4, VAR_5;
 u64 VAR_6;

 VAR_4 = VAR_3->ee.ee_info;
 VAR_5 = VAR_3->ee.ee_data;
 VAR_6 = VAR_5 - VAR_4 + 1ULL + VAR_2;

 if (VAR_6 >= (1ULL << 32))
  return 0;

 if (VAR_1 != VAR_5 + 1)
  return 0;

 VAR_3->ee.ee_data += VAR_2;
 return 1;
}
