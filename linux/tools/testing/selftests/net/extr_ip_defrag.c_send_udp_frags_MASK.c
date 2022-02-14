
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {void* s_addr; } ;
struct ip6_hdr {int ip6_hops; int ip_hl; int ip_v; int ip_ttl; void* ip_len; void* ip_off; void* ip6_plen; scalar_t__ ip_sum; int ip_dst; TYPE_1__ ip_src; void* ip_p; void* ip_id; scalar_t__ ip_tos; void* ip6_dst; void* ip6_src; int ip6_nxt; void* ip6_flow; } ;
struct ip6_frag {void* ip6f_offlg; void* ip6f_ident; scalar_t__ ip6f_reserved; void* ip6f_nxt; } ;
struct ip {int ip6_hops; int ip_hl; int ip_v; int ip_ttl; void* ip_len; void* ip_off; void* ip6_plen; scalar_t__ ip_sum; int ip_dst; TYPE_1__ ip_src; void* ip_p; void* ip_id; scalar_t__ ip_tos; void* ip6_dst; void* ip6_src; int ip6_nxt; void* ip6_flow; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int ,char*,int,...) ;
 int VAR_12 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (struct ip6_hdr*,int ,int) ;
 int VAR_16 ;
 int FUNC_4 () ;
 int FUNC_5 (int,struct sockaddr*,int ,int,int) ;
 int FUNC_6 (int,scalar_t__,int,int ,struct sockaddr*,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_17, struct sockaddr *VAR_18,
    socklen_t VAR_19, bool VAR_20)
{
 struct ip *VAR_21 = (struct ip *)VAR_13;
 struct ip6_hdr *VAR_22 = (struct ip6_hdr *)VAR_13;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 if (VAR_20) {
  struct ip6_frag *VAR_26 = (struct ip6_frag *)(VAR_13 + VAR_3);
  ((struct sockaddr_in6 *)VAR_18)->sin6_port = 0;
  FUNC_3(VAR_22, 0, sizeof(*VAR_22));
  VAR_22->ip6_flow = FUNC_1(6<<28);
  VAR_22->ip6_nxt = VAR_5;
  VAR_22->ip6_hops = 255;
  VAR_22->ip6_src = VAR_9;
  VAR_22->ip6_dst = VAR_9;
  VAR_26->ip6f_nxt = VAR_6;
  VAR_26->ip6f_reserved = 0;
  VAR_26->ip6f_ident = FUNC_1(VAR_14++);
 } else {
  FUNC_3(VAR_21, 0, sizeof(*VAR_21));
  VAR_21->ip_hl = 5;
  VAR_21->ip_v = 4;
  VAR_21->ip_tos = 0;
  VAR_21->ip_id = FUNC_2(VAR_14++);
  VAR_21->ip_ttl = 0x40;
  VAR_21->ip_p = VAR_6;
  VAR_21->ip_src.s_addr = FUNC_1(VAR_0);
  VAR_21->ip_dst = VAR_8;
  VAR_21->ip_sum = 0;
 }


 if (!VAR_10 && (FUNC_4() % 100 < 15)) {
  VAR_24 = 0;
  while (VAR_24 < (VAR_7 + VAR_16)) {
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
   VAR_24 += VAR_15;
  }
  return;
 }


 if (!VAR_10 && (FUNC_4() % 100 < 20) &&
   (VAR_16 > 9 * VAR_15)) {
  VAR_24 = 6 * VAR_15;
  while (VAR_24 < (VAR_7 + VAR_16)) {
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
   VAR_24 += VAR_15;
  }
  VAR_24 = 3 * VAR_15;
  while (VAR_24 < 6 * VAR_15) {
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
   VAR_24 += VAR_15;
  }
  VAR_24 = 0;
  while (VAR_24 < 3 * VAR_15) {
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
   VAR_24 += VAR_15;
  }
  return;
 }


 VAR_24 = VAR_15;
 while (VAR_24 < (VAR_7 + VAR_16)) {
  FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);

  if (FUNC_4() % 100 == 1)
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
  VAR_24 += 2 * VAR_15;
 }

 if (VAR_10) {
  if (VAR_15 * 4 < VAR_16 || VAR_15 < 16) {

   VAR_24 = 8;
   VAR_25 = VAR_7 + VAR_15;
  } else {
   VAR_24 = FUNC_4() % (VAR_16 / 2);
   VAR_25 = 2 * VAR_15 + 1 + FUNC_4() % 256;
  }
  if (VAR_20) {
   struct ip6_frag *VAR_27 = (struct ip6_frag *)(VAR_13 + VAR_3);


   VAR_25 &= ~0x7;
   VAR_27->ip6f_offlg = FUNC_2(VAR_24 / 8 | VAR_4);
   VAR_22->ip6_plen = FUNC_2(VAR_25);
   VAR_25 += VAR_3;
  } else {
   VAR_25 += VAR_1;
   VAR_21->ip_off = FUNC_2(VAR_24 / 8 | VAR_2);
   VAR_21->ip_len = FUNC_2(VAR_25);
  }
  VAR_23 = FUNC_6(VAR_17, VAR_13, VAR_25, 0, VAR_18, VAR_19);
  if (VAR_23 < 0)
   FUNC_0(1, VAR_11, "sendto overlap: %d", VAR_25);
  if (VAR_23 != VAR_25)
   FUNC_0(1, 0, "sendto overlap: %d vs %d", (int)VAR_23, VAR_25);
  VAR_12++;
 }


 VAR_24 = 0;
 while (VAR_24 < (VAR_7 + VAR_16)) {
  FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);

  if (FUNC_4() % 100 == 1)
   FUNC_5(VAR_17, VAR_18, VAR_19, VAR_24, VAR_20);
  VAR_24 += 2 * VAR_15;
 }
}
