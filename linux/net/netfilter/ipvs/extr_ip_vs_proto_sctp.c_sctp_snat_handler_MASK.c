
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; } ;
struct sctphdr {scalar_t__ source; } ;
struct ip_vs_protocol {int dummy; } ;
struct ip_vs_iphdr {unsigned int len; scalar_t__ fragoffs; } ;
struct ip_vs_conn {scalar_t__ af; scalar_t__ vport; int * app; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ip_vs_conn*,struct sk_buff*,struct ip_vs_iphdr*) ;
 int FUNC_1 (scalar_t__,struct sk_buff*,struct ip_vs_protocol*) ;
 int FUNC_2 (struct sk_buff*,struct sctphdr*,unsigned int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_3, struct ip_vs_protocol *VAR_4,
    struct ip_vs_conn *VAR_5, struct ip_vs_iphdr *VAR_6)
{
 struct sctphdr *VAR_7;
 unsigned int VAR_8 = VAR_6->len;
 bool VAR_9 = 0;







 if (FUNC_3(VAR_3, VAR_8 + sizeof(*VAR_7)))
  return 0;

 if (FUNC_5(VAR_5->app != ((void*)0))) {
  int VAR_10;


  if (!FUNC_1(VAR_5->af, VAR_3, VAR_4))
   return 0;


  VAR_10 = FUNC_0(VAR_5, VAR_3, VAR_6);
  if (VAR_10 == 0)
   return 0;

  if (VAR_10 == 2)
   VAR_9 = 1;
 }

 VAR_7 = (void *) FUNC_4(VAR_3) + VAR_8;


 if (VAR_7->source != VAR_5->vport || VAR_9 ||
     VAR_3->ip_summed == VAR_1) {
  VAR_7->source = VAR_5->vport;
  FUNC_2(VAR_3, VAR_7, VAR_8);
 } else {
  VAR_3->ip_summed = VAR_2;
 }

 return 1;
}
