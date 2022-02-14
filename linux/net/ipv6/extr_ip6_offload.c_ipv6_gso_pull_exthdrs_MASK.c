
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_offload {int flags; } ;
struct ipv6_opt_hdr {int nexthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int * VAR_2 ;
 int FUNC_1 (struct ipv6_opt_hdr*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 struct net_offload* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, int VAR_4)
{
 const struct net_offload *VAR_5 = ((void*)0);

 for (;;) {
  struct ipv6_opt_hdr *VAR_6;
  int VAR_7;

  if (VAR_4 != VAR_1) {
   VAR_5 = FUNC_3(VAR_2[VAR_4]);

   if (FUNC_4(!VAR_5))
    break;

   if (!(VAR_5->flags & VAR_0))
    break;
  }

  if (FUNC_4(!FUNC_2(VAR_3, 8)))
   break;

  VAR_6 = (void *)VAR_3->data;
  VAR_7 = FUNC_1(VAR_6);

  if (FUNC_4(!FUNC_2(VAR_3, VAR_7)))
   break;

  VAR_6 = (void *)VAR_3->data;
  VAR_4 = VAR_6->nexthdr;
  FUNC_0(VAR_3, VAR_7);
 }

 return VAR_4;
}
