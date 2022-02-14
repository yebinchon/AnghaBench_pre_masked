
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dest; } ;
struct ipv6hdr {int nexthdr; } ;
struct bpf_tunnel_key {int tunnel_ttl; void** remote_ipv6; } ;
struct __sk_buff {scalar_t__ data_end; scalar_t__ data; } ;
typedef int key ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;

int FUNC_4(struct __sk_buff *VAR_3)
{
 struct bpf_tunnel_key VAR_4 = {};
 void *VAR_5 = (void *)(long)VAR_3->data;
 struct ipv6hdr *VAR_6 = VAR_5;
 struct tcphdr *VAR_7 = VAR_5 + sizeof(*VAR_6);
 void *VAR_8 = (void *)(long)VAR_3->data_end;
 int VAR_9;


 if (VAR_5 + sizeof(*VAR_6) + sizeof(*VAR_7) > VAR_8) {
  FUNC_0(1);
  return VAR_2;
 }

 VAR_4.remote_ipv6[0] = FUNC_1(0x2401db00);
 VAR_4.tunnel_ttl = 64;

 if (VAR_6->nexthdr == 58 ) {
  VAR_4.remote_ipv6[3] = FUNC_1(1);
 } else {
  if (VAR_6->nexthdr != 6 ) {
   FUNC_0(VAR_6->nexthdr);
   return VAR_2;
  }

  if (VAR_7->dest == FUNC_2(5200)) {
   VAR_4.remote_ipv6[3] = FUNC_1(1);
  } else if (VAR_7->dest == FUNC_2(5201)) {
   VAR_4.remote_ipv6[3] = FUNC_1(2);
  } else {
   FUNC_0(VAR_7->dest);
   return VAR_2;
  }
 }

 VAR_9 = FUNC_3(VAR_3, &VAR_4, sizeof(VAR_4),
         VAR_0);
 if (VAR_9 < 0) {
  FUNC_0(VAR_9);
  return VAR_2;
 }

 return VAR_1;
}
