
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct tcphdr {int doff; } ;
struct sk_buff {unsigned char* data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int buf ;
typedef int _tcph ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*) ;
 struct nf_conn* FUNC_3 (struct sk_buff*,int*) ;
 int FUNC_4 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,int,char*,int) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,int,char*,int) ;
 struct tcphdr* FUNC_6 (struct sk_buff*,int,int,struct tcphdr*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned char **VAR_3, int VAR_4,
      unsigned int VAR_5, __be32 VAR_6, __be16 VAR_7)
{
 enum ip_conntrack_info VAR_8;
 struct nf_conn *VAR_9 = FUNC_3(VAR_1, &VAR_8);
 struct {
  __be32 ip;
  __be16 port;
 } __attribute__ ((__packed__)) VAR_10;
 const struct tcphdr *VAR_11;
 struct tcphdr VAR_12;

 VAR_10.ip = VAR_6;
 VAR_10.port = VAR_7;
 VAR_5 += VAR_4;

 if (FUNC_0(VAR_1)->protocol == VAR_0) {
  if (!FUNC_4(VAR_1, VAR_9, VAR_8,
           VAR_2, VAR_5, sizeof(VAR_10),
           (char *) &VAR_10, sizeof(VAR_10))) {
   FUNC_2("nf_nat_h323: nf_nat_mangle_tcp_packet error\n");
   return -1;
  }


  VAR_11 = FUNC_6(VAR_1, FUNC_1(VAR_1),
     sizeof(VAR_12), &VAR_12);
  if (VAR_11 == ((void*)0))
   return -1;
  *VAR_3 = VAR_1->data + FUNC_1(VAR_1) + VAR_11->doff * 4 + VAR_4;
 } else {
  if (!FUNC_5(VAR_1, VAR_9, VAR_8,
           VAR_2, VAR_5, sizeof(VAR_10),
           (char *) &VAR_10, sizeof(VAR_10))) {
   FUNC_2("nf_nat_h323: nf_nat_mangle_udp_packet error\n");
   return -1;
  }



  *VAR_3 = VAR_1->data + FUNC_1(VAR_1) + sizeof(struct udphdr);
 }

 return 0;
}
