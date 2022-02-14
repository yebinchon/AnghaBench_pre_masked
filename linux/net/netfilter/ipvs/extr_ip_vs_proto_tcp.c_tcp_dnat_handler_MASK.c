
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcphdr {scalar_t__ check; int dest; } ;
struct sk_buff {unsigned int len; scalar_t__ ip_summed; int csum; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {unsigned int len; scalar_t__ fragoffs; } ;
struct TYPE_5__ {int ip; int in6; } ;
struct TYPE_4__ {int ip; int in6; } ;
struct ip_vs_conn {scalar_t__ af; int protocol; TYPE_2__ daddr; TYPE_1__ caddr; int * app; int dport; int vport; int vaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ip_vs_conn*,struct sk_buff*,struct ip_vs_iphdr*) ;
 int FUNC_4 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_8 (scalar_t__,struct tcphdr*,int *,TYPE_2__*,int ,int ) ;
 int FUNC_9 (scalar_t__,struct tcphdr*,int *,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct sk_buff *VAR_5, struct ip_vs_protocol *VAR_6,
   struct ip_vs_conn *VAR_7, struct ip_vs_iphdr *VAR_8)
{
 struct tcphdr *VAR_9;
 unsigned int VAR_10 = VAR_8->len;
 bool VAR_11 = 0;
 int VAR_12;





 VAR_12 = VAR_5->len - VAR_10;


 if (FUNC_5(VAR_5, VAR_10 + sizeof(*VAR_9)))
  return 0;

 if (FUNC_10(VAR_7->app != ((void*)0))) {
  int VAR_13;


  if (!FUNC_7(VAR_7->af, VAR_5, VAR_6))
   return 0;





  if (!(VAR_13 = FUNC_3(VAR_7, VAR_5, VAR_8)))
   return 0;

  if (VAR_13 == 1)
   VAR_12 = VAR_5->len - VAR_10;
  else
   VAR_11 = 1;
 }

 VAR_9 = (void *)FUNC_6(VAR_5) + VAR_10;
 VAR_9->dest = VAR_7->dport;




 if (VAR_5->ip_summed == VAR_3) {
  FUNC_9(VAR_7->af, VAR_9, &VAR_7->vaddr, &VAR_7->daddr,
     FUNC_2(VAR_12),
     FUNC_2(VAR_5->len - VAR_10));
 } else if (!VAR_11) {

  FUNC_8(VAR_7->af, VAR_9, &VAR_7->vaddr, &VAR_7->daddr,
         VAR_7->vport, VAR_7->dport);
  if (VAR_5->ip_summed == VAR_1)
   VAR_5->ip_summed = VAR_7->app ?
      VAR_4 : VAR_2;
 } else {

  VAR_9->check = 0;
  VAR_5->csum = FUNC_4(VAR_5, VAR_10, VAR_5->len - VAR_10, 0);
   VAR_9->check = FUNC_1(VAR_7->caddr.ip,
       VAR_7->daddr.ip,
       VAR_5->len - VAR_10,
       VAR_7->protocol,
       VAR_5->csum);
  VAR_5->ip_summed = VAR_4;
 }
 return 1;
}
