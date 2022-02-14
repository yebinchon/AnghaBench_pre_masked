
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ip_vs_conn {TYPE_1__* dest; } ;
typedef scalar_t__ __u8 ;
typedef int __be16 ;
struct TYPE_2__ {int tun_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,size_t,int ,int ,int ,int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct net *VAR_6, struct sk_buff *VAR_7,
        struct ip_vs_conn *VAR_8, __u8 *VAR_9)
{
 __be16 VAR_10 = *VAR_9 == VAR_3 ?
    FUNC_2(VAR_0) : FUNC_2(VAR_1);
 __be16 VAR_11 = 0;
 size_t VAR_12;

 if (VAR_8->dest->tun_flags & VAR_4)
  VAR_11 |= VAR_5;

 VAR_12 = FUNC_1(VAR_11);
 FUNC_0(VAR_7, VAR_12, VAR_11, VAR_10, 0, 0);

 *VAR_9 = VAR_2;
}
