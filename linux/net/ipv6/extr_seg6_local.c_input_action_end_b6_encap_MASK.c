
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int encapsulation; scalar_t__ len; } ;
struct seg6_local_lwt {int srh; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct TYPE_2__ {int payload_len; int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipv6_sr_hdr*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 struct ipv6_sr_hdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,int *,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_2,
         struct seg6_local_lwt *VAR_3)
{
 struct ipv6_sr_hdr *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  goto drop;

 FUNC_0(VAR_4, &FUNC_4(VAR_2)->daddr);

 FUNC_8(VAR_2);
 VAR_2->encapsulation = 1;

 VAR_5 = FUNC_6(VAR_2, VAR_3->srh, VAR_1);
 if (VAR_5)
  goto drop;

 FUNC_4(VAR_2)->payload_len = FUNC_3(VAR_2->len - sizeof(struct ipv6hdr));
 FUNC_9(VAR_2, sizeof(struct ipv6hdr));

 FUNC_7(VAR_2, ((void*)0), 0);

 return FUNC_1(VAR_2);

drop:
 FUNC_5(VAR_2);
 return VAR_5;
}
