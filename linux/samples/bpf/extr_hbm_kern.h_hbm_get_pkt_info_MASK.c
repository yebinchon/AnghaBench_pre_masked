
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6hdr {int nexthdr; int* flow_lbl; } ;
struct iphdr {int version; int protocol; int tos; } ;
struct hbm_pkt_info {int is_ip; int is_tcp; int ecn; scalar_t__ rtt; scalar_t__ cwnd; } ;
struct __sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct __sk_buff*,int ,struct iphdr*,int) ;
 int FUNC_1 (struct __sk_buff*,struct hbm_pkt_info*) ;

__attribute__((used)) static void FUNC_2(struct __sk_buff *VAR_1,
        struct hbm_pkt_info *VAR_2)
{
 struct iphdr VAR_3;
 struct ipv6hdr *VAR_4;

 VAR_2->cwnd = 0;
 VAR_2->rtt = 0;
 FUNC_0(VAR_1, 0, &VAR_3, 12);
 if (VAR_3.version == 6) {
  VAR_4 = (struct ipv6hdr *)&VAR_3;
  VAR_2->is_ip = 1;
  VAR_2->is_tcp = (VAR_4->nexthdr == 6);
  VAR_2->ecn = (VAR_4->flow_lbl[0] >> 4) & VAR_0;
 } else if (VAR_3.version == 4) {
  VAR_2->is_ip = 1;
  VAR_2->is_tcp = (VAR_3.protocol == 6);
  VAR_2->ecn = VAR_3.tos & VAR_0;
 } else {
  VAR_2->is_ip = 0;
  VAR_2->is_tcp = 0;
  VAR_2->ecn = 0;
 }
 if (VAR_2->is_tcp)
  FUNC_1(VAR_1, VAR_2);
}
