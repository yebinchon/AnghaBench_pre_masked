
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; } ;
struct sctphdr {scalar_t__ dest; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {unsigned int len; scalar_t__ fragoffs; } ;
struct ip_vs_conn {scalar_t__ af; scalar_t__ dport; int * app; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int features; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip_vs_conn*,struct sk_buff*,struct ip_vs_iphdr*) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_2 (struct sk_buff*,struct sctphdr*,unsigned int) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_4, struct ip_vs_protocol *VAR_5,
    struct ip_vs_conn *VAR_6, struct ip_vs_iphdr *VAR_7)
{
 struct sctphdr *VAR_8;
 unsigned int VAR_9 = VAR_7->len;
 bool VAR_10 = 0;







 if (FUNC_4(VAR_4, VAR_9 + sizeof(*VAR_8)))
  return 0;

 if (FUNC_6(VAR_6->app != ((void*)0))) {
  int VAR_11;


  if (!FUNC_1(VAR_6->af, VAR_4, VAR_5))
   return 0;


  VAR_11 = FUNC_0(VAR_6, VAR_4, VAR_7);
  if (VAR_11 == 0)
   return 0;

  if (VAR_11 == 2)
   VAR_10 = 1;
 }

 VAR_8 = (void *) FUNC_5(VAR_4) + VAR_9;


 if (VAR_8->dest != VAR_6->dport || VAR_10 ||
     (VAR_4->ip_summed == VAR_1 &&
      !(FUNC_3(VAR_4)->dev->features & VAR_3))) {
  VAR_8->dest = VAR_6->dport;
  FUNC_2(VAR_4, VAR_8, VAR_9);
 } else if (VAR_4->ip_summed != VAR_1) {
  VAR_4->ip_summed = VAR_2;
 }

 return 1;
}
