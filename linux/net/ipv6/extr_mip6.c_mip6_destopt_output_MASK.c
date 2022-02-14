
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int header_len; } ;
struct xfrm_state {TYPE_1__ props; int lock; int * coaddr; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int saddr; } ;
struct ipv6_destopt_hdr {int hdrlen; int nexthdr; } ;
struct ipv6_destopt_hao {int length; int addr; int type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 struct ipv6hdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int *,int) ;
 struct ipv6_destopt_hao* FUNC_5 (char*,int ) ;
 int * FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct xfrm_state *VAR_2, struct sk_buff *VAR_3)
{
 struct ipv6hdr *VAR_4;
 struct ipv6_destopt_hdr *VAR_5;
 struct ipv6_destopt_hao *VAR_6;
 u8 VAR_7;
 int VAR_8;

 FUNC_8(VAR_3, -FUNC_7(VAR_3));
 VAR_4 = FUNC_3(VAR_3);

 VAR_7 = *FUNC_6(VAR_3);
 *FUNC_6(VAR_3) = VAR_0;

 VAR_5 = (struct ipv6_destopt_hdr *)FUNC_9(VAR_3);
 VAR_5->nexthdr = VAR_7;

 VAR_6 = FUNC_5((char *)(VAR_5 + 1),
   FUNC_2(sizeof(*VAR_5), 6));

 VAR_6->type = VAR_1;
 FUNC_0(sizeof(*VAR_6) != 18);
 VAR_6->length = sizeof(*VAR_6) - 2;

 VAR_8 = ((char *)VAR_6 - (char *)VAR_5) + sizeof(*VAR_6);

 FUNC_4(&VAR_6->addr, &VAR_4->saddr, sizeof(VAR_6->addr));
 FUNC_10(&VAR_2->lock);
 FUNC_4(&VAR_4->saddr, VAR_2->coaddr, sizeof(VAR_4->saddr));
 FUNC_11(&VAR_2->lock);

 FUNC_1(VAR_8 != VAR_2->props.header_len);
 VAR_5->hdrlen = (VAR_2->props.header_len >> 3) - 1;

 return 0;
}
