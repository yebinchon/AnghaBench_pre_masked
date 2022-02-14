
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct udphdr {scalar_t__ check; void* len; void* dest; void* source; } ;
struct sockaddr {int dummy; } ;
struct ip6_hdr {void* ip6_plen; } ;
struct ip6_frag {void* ip6f_offlg; } ;
struct ip {void* ip_len; void* ip_off; } ;
typedef int socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,...) ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,struct udphdr*,int) ;
 int VAR_11 ;
 int FUNC_3 (int,int *,int,int ,struct sockaddr*,int ) ;
 scalar_t__ FUNC_4 (struct ip6_hdr*,struct udphdr*) ;
 scalar_t__ FUNC_5 (struct ip*,struct udphdr*) ;
 struct udphdr* VAR_12 ;

__attribute__((used)) static void FUNC_6(int VAR_13, struct sockaddr *VAR_14, socklen_t VAR_15,
    int VAR_16, bool VAR_17)
{
 int VAR_18;
 int VAR_19;
 int VAR_20 = VAR_16 > 0 ? VAR_16 - VAR_5 : 0;
 uint8_t *VAR_21 = VAR_17 ? VAR_9 + VAR_3 + VAR_0 :
     VAR_9 + VAR_1;

 if (VAR_16 == 0) {
  struct udphdr VAR_22;
  VAR_22.source = FUNC_1(VAR_6 + 1);
  VAR_22.dest = FUNC_1(VAR_6);
  VAR_22.len = FUNC_1(VAR_5 + VAR_11);
  VAR_22.check = 0;
  if (VAR_17)
   VAR_22.check = FUNC_4((struct ip6_hdr *)VAR_9, &VAR_22);
  else
   VAR_22.check = FUNC_5((struct ip *)VAR_9, &VAR_22);
  FUNC_2(VAR_21, &VAR_22, VAR_5);
 }

 if (VAR_17) {
  struct ip6_hdr *VAR_23 = (struct ip6_hdr *)VAR_9;
  struct ip6_frag *VAR_24 = (struct ip6_frag *)(VAR_9 + VAR_3);
  if (VAR_11 - VAR_20 <= VAR_10 && VAR_16 > 0) {

   VAR_18 = VAR_0 + VAR_11 - VAR_20;
   VAR_24->ip6f_offlg = FUNC_1(VAR_16);
  } else {
   VAR_18 = VAR_0 + VAR_10;
   VAR_24->ip6f_offlg = FUNC_1(VAR_16 | VAR_4);
  }
  VAR_23->ip6_plen = FUNC_1(VAR_18);
  if (VAR_16 == 0)
   FUNC_2(VAR_21 + VAR_5, VAR_12,
    VAR_18 - VAR_0 - VAR_5);
  else
   FUNC_2(VAR_21, VAR_12 + VAR_20,
    VAR_18 - VAR_0);
  VAR_18 += VAR_3;
 } else {
  struct ip *VAR_25 = (struct ip *)VAR_9;
  if (VAR_11 - VAR_20 <= VAR_10 && VAR_16 > 0) {

   VAR_18 = VAR_1 + VAR_11 - VAR_20;
   VAR_25->ip_off = FUNC_1(VAR_16 / 8);
  } else {
   VAR_18 = VAR_1 + VAR_10;
   VAR_25->ip_off = FUNC_1(VAR_16 / 8 | VAR_2);
  }
  VAR_25->ip_len = FUNC_1(VAR_18);
  if (VAR_16 == 0)
   FUNC_2(VAR_21 + VAR_5, VAR_12,
    VAR_18 - VAR_1 - VAR_5);
  else
   FUNC_2(VAR_21, VAR_12 + VAR_20,
    VAR_18 - VAR_1);
 }

 VAR_19 = FUNC_3(VAR_13, VAR_9, VAR_18, 0, VAR_14, VAR_15);
 if (VAR_19 < 0)
  FUNC_0(1, VAR_7, "send_fragment");
 if (VAR_19 != VAR_18)
  FUNC_0(1, 0, "send_fragment: %d vs %d", VAR_19, VAR_18);

 VAR_8++;
}
