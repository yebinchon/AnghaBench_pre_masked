
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; int dev; } ;
struct netns_ipvs {struct net* net; } ;
struct net {int loopback_dev; } ;
struct ip_vs_iphdr {int fragoffs; } ;
struct TYPE_4__ {int frag_off; int saddr; } ;
struct TYPE_3__ {int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ,int) ;
 TYPE_2__* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ip_vs_iphdr*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct netns_ipvs*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static inline bool FUNC_12(struct netns_ipvs *VAR_6, int VAR_7,
       int VAR_8,
       struct ip_vs_iphdr *VAR_9,
       struct sk_buff *VAR_10, int VAR_11)
{
 {



  if ((VAR_8 & VAR_5) && !FUNC_10(VAR_6))
   return 1;

  if (FUNC_11(FUNC_6(VAR_10)->frag_off & FUNC_3(VAR_4) &&
        VAR_10->len > VAR_11 && !FUNC_9(VAR_10) &&
        !FUNC_7(VAR_9))) {
   FUNC_4(VAR_10, VAR_2, VAR_3,
      FUNC_2(VAR_11));
   FUNC_0(1, "frag needed for %pI4\n",
      &FUNC_6(VAR_10)->saddr);
   return 0;
  }
 }

 return 1;
}
