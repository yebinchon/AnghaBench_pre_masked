
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int dest; } ;
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
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *,unsigned int,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,unsigned int,int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct ip_vs_conn*,struct sk_buff*,struct ip_vs_iphdr*) ;
 int FUNC_4 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_8 (scalar_t__,struct udphdr*,int *,TYPE_2__*,int ,int ) ;
 int FUNC_9 (scalar_t__,struct udphdr*,int *,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct sk_buff *VAR_6, struct ip_vs_protocol *VAR_7,
   struct ip_vs_conn *VAR_8, struct ip_vs_iphdr *VAR_9)
{
 struct udphdr *VAR_10;
 unsigned int VAR_11 = VAR_9->len;
 bool VAR_12 = 0;
 int VAR_13;





 VAR_13 = VAR_6->len - VAR_11;


 if (FUNC_5(VAR_6, VAR_11 + sizeof(*VAR_10)))
  return 0;

 if (FUNC_10(VAR_8->app != ((void*)0))) {
  int VAR_14;


  if (!FUNC_7(VAR_8->af, VAR_6, VAR_7))
   return 0;





  if (!(VAR_14 = FUNC_3(VAR_8, VAR_6, VAR_9)))
   return 0;

  if (VAR_14 == 1)
   VAR_13 = VAR_6->len - VAR_11;
  else
   VAR_12 = 1;
 }

 VAR_10 = (void *)FUNC_6(VAR_6) + VAR_11;
 VAR_10->dest = VAR_8->dport;




 if (VAR_6->ip_summed == VAR_3) {
  FUNC_9(VAR_8->af, VAR_10, &VAR_8->vaddr, &VAR_8->daddr,
     FUNC_2(VAR_13),
     FUNC_2(VAR_6->len - VAR_11));
 } else if (!VAR_12 && (VAR_10->check != 0)) {

  FUNC_8(VAR_8->af, VAR_10, &VAR_8->vaddr, &VAR_8->daddr,
         VAR_8->vport, VAR_8->dport);
  if (VAR_6->ip_summed == VAR_1)
   VAR_6->ip_summed = VAR_8->app ?
      VAR_4 : VAR_2;
 } else {

  VAR_10->check = 0;
  VAR_6->csum = FUNC_4(VAR_6, VAR_11, VAR_6->len - VAR_11, 0);
   VAR_10->check = FUNC_1(VAR_8->caddr.ip,
       VAR_8->daddr.ip,
       VAR_6->len - VAR_11,
       VAR_8->protocol,
       VAR_6->csum);
  if (VAR_10->check == 0)
   VAR_10->check = VAR_5;
  VAR_6->ip_summed = VAR_4;
 }
 return 1;
}
