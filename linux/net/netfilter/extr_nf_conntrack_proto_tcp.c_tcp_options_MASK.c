
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct tcphdr {int doff; } ;
struct sk_buff {int dummy; } ;
struct ip_ct_tcp_state {scalar_t__ flags; scalar_t__ td_scale; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char* FUNC_1 (struct sk_buff const*,unsigned int,int,unsigned char*) ;

__attribute__((used)) static void FUNC_2(const struct sk_buff *VAR_7,
   unsigned int VAR_8,
   const struct tcphdr *VAR_9,
   struct ip_ct_tcp_state *VAR_10)
{
 unsigned char VAR_11[(15 * 4) - sizeof(struct tcphdr)];
 const unsigned char *VAR_12;
 int VAR_13 = (VAR_9->doff*4) - sizeof(struct tcphdr);

 if (!VAR_13)
  return;

 VAR_12 = FUNC_1(VAR_7, VAR_8 + sizeof(struct tcphdr),
     VAR_13, VAR_11);
 FUNC_0(VAR_12 == ((void*)0));

 VAR_10->td_scale =
 VAR_10->flags = 0;

 while (VAR_13 > 0) {
  int VAR_14=*VAR_12++;
  int VAR_15;

  switch (VAR_14) {
  case 129:
   return;
  case 128:
   VAR_13--;
   continue;
  default:
   if (VAR_13 < 2)
    return;
   VAR_15=*VAR_12++;
   if (VAR_15 < 2)
    return;
   if (VAR_15 > VAR_13)
    return;

   if (VAR_14 == VAR_4
       && VAR_15 == VAR_2)
    VAR_10->flags |= VAR_0;
   else if (VAR_14 == VAR_5
     && VAR_15 == VAR_3) {
    VAR_10->td_scale = *(u_int8_t *)VAR_12;

    if (VAR_10->td_scale > VAR_6)
     VAR_10->td_scale = VAR_6;

    VAR_10->flags |=
     VAR_1;
   }
   VAR_12 += VAR_15 - 2;
   VAR_13 -= VAR_15;
  }
 }
}
