
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct seg6_local_lwt {int dummy; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct TYPE_2__ {int daddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipv6_sr_hdr*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct ipv6_sr_hdr* FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_1, struct seg6_local_lwt *VAR_2)
{
 struct ipv6_sr_hdr *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  goto drop;

 FUNC_0(VAR_3, &FUNC_3(VAR_1)->daddr);

 FUNC_5(VAR_1, ((void*)0), 0);

 return FUNC_1(VAR_1);

drop:
 FUNC_4(VAR_1);
 return -VAR_0;
}
