
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct seg6_local_lwt {int srh; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_sr_hdr {int dummy; } ;
struct TYPE_2__ {int payload_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct ipv6_sr_hdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int *,int ) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_1, struct seg6_local_lwt *VAR_2)
{
 struct ipv6_sr_hdr *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  goto drop;

 VAR_4 = FUNC_5(VAR_1, VAR_2->srh);
 if (VAR_4)
  goto drop;

 FUNC_3(VAR_1)->payload_len = FUNC_2(VAR_1->len - sizeof(struct ipv6hdr));
 FUNC_7(VAR_1, sizeof(struct ipv6hdr));

 FUNC_6(VAR_1, ((void*)0), 0);

 return FUNC_0(VAR_1);

drop:
 FUNC_4(VAR_1);
 return VAR_4;
}
