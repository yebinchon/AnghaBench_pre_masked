
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct sockaddr_ll {int sll_halen; scalar_t__ ss_family; struct sockaddr_ll* sll_addr; void* sll_protocol; int sll_ifindex; int sll_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct msghdr {int msg_iovlen; int msg_namelen; struct iovec* msg_iov; struct sockaddr_ll* msg_name; int member_0; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct iovec {int iov_len; struct ethhdr* iov_base; int member_0; } ;
struct ethhdr {void* h_proto; struct sockaddr_ll* h_source; struct sockaddr_ll* h_dest; } ;
typedef int laddr ;
typedef int eth ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 struct sockaddr_ll VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_19 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,struct msghdr*,scalar_t__,int) ;
 int FUNC_5 (int,struct msghdr*) ;
 int FUNC_6 (int,int,int) ;
 int VAR_20 ;
 int FUNC_7 (int,int ,char*) ;
 int FUNC_8 (int ,char*,int ,int,int ,char) ;
 scalar_t__ FUNC_9 () ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (struct sockaddr_ll*,int,int) ;
 int VAR_21 ;
 struct ethhdr* VAR_22 ;
 int FUNC_12 (struct ipv6hdr*,int) ;
 int FUNC_13 (struct iphdr*,int) ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void FUNC_14(int VAR_25, int VAR_26, int VAR_27)
{
 struct iovec VAR_28[3] = { {0} };
 struct sockaddr_ll VAR_29;
 struct msghdr VAR_30 = {0};
 struct ethhdr VAR_31;
 union {
  struct ipv6hdr ip6h;
  struct iphdr iph;
 } VAR_32;
 uint64_t VAR_33;
 int VAR_34;

 VAR_34 = FUNC_6(VAR_25, VAR_26, VAR_27);

 if (VAR_25 == VAR_7) {
  uint16_t VAR_35 = VAR_14 == VAR_6 ? VAR_3 : VAR_4;


  if (VAR_26 == VAR_10) {
   FUNC_11(VAR_31.h_dest, 0x06, VAR_2);
   FUNC_11(VAR_31.h_source, 0x02, VAR_2);
   VAR_31.h_proto = FUNC_10(VAR_35);
   VAR_28[0].iov_base = &VAR_31;
   VAR_28[0].iov_len = sizeof(VAR_31);
   VAR_30.msg_iovlen++;
  }


  FUNC_11(&VAR_29, 0, sizeof(VAR_29));
  VAR_29.sll_family = VAR_1;
  VAR_29.sll_ifindex = VAR_15;
  VAR_29.sll_protocol = FUNC_10(VAR_35);
  VAR_29.sll_halen = VAR_2;

  FUNC_11(VAR_29.sll_addr, 0x06, VAR_2);

  VAR_30.msg_name = &VAR_29;
  VAR_30.msg_namelen = sizeof(VAR_29);
 }


 if (VAR_25 == VAR_7 || VAR_27 == VAR_5) {
  if (VAR_14 == VAR_6)
   VAR_28[1].iov_len = FUNC_13(&VAR_32.iph, VAR_16);
  else
   VAR_28[1].iov_len = FUNC_12(&VAR_32.ip6h, VAR_16);

  VAR_28[1].iov_base = (void *) &VAR_32;
  VAR_30.msg_iovlen++;
 }

 if (VAR_25 == VAR_8) {
  VAR_30.msg_name = &VAR_13;
  VAR_30.msg_namelen = (VAR_13.ss_family == VAR_0 ?
        sizeof(struct sockaddr_in) :
        sizeof(struct sockaddr_in6));
 }

 VAR_28[2].iov_base = VAR_22;
 VAR_28[2].iov_len = VAR_16;
 VAR_30.msg_iovlen++;
 VAR_30.msg_iov = &VAR_28[3 - VAR_30.msg_iovlen];

 VAR_33 = FUNC_9() + VAR_17;
 do {
  if (VAR_12)
   FUNC_5(VAR_34, &VAR_30);
  else
   FUNC_4(VAR_34, &VAR_30, VAR_18, VAR_25);

  while (!FUNC_1(VAR_34, VAR_9)) {
   if (VAR_18)
    FUNC_2(VAR_34, VAR_25);
  }

 } while (FUNC_9() < VAR_33);

 if (VAR_18)
  FUNC_3(VAR_34, VAR_25);

 if (FUNC_0(VAR_34))
  FUNC_7(1, VAR_20, "close");

 FUNC_8(VAR_23, "tx=%d (%d MB) txc=%d zc=%c\n",
  VAR_21, VAR_11 >> 20, VAR_19,
  VAR_24 == 1 ? 'y' : 'n');
}
