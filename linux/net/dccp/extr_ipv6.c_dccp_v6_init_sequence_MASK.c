
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
typedef int __u64 ;
struct TYPE_8__ {int dccph_sport; int dccph_dport; } ;
struct TYPE_6__ {int s6_addr32; } ;
struct TYPE_5__ {int s6_addr32; } ;
struct TYPE_7__ {TYPE_2__ saddr; TYPE_1__ daddr; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static inline __u64 FUNC_3(struct sk_buff *VAR_0)
{
 return FUNC_2(FUNC_1(VAR_0)->daddr.s6_addr32,
          FUNC_1(VAR_0)->saddr.s6_addr32,
          FUNC_0(VAR_0)->dccph_dport,
          FUNC_0(VAR_0)->dccph_sport );

}
