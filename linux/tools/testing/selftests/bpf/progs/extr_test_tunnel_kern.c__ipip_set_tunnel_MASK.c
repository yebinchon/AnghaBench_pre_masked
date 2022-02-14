
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {scalar_t__ dest; } ;
struct iphdr {scalar_t__ protocol; int ihl; } ;
struct bpf_tunnel_key {int tunnel_ttl; int remote_ipv4; } ;
struct __sk_buff {scalar_t__ data_end; scalar_t__ data; } ;
typedef int key ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;

int FUNC_3(struct __sk_buff *VAR_4)
{
 struct bpf_tunnel_key VAR_5 = {};
 void *VAR_6 = (void *)(long)VAR_4->data;
 struct iphdr *VAR_7 = VAR_6;
 struct tcphdr *VAR_8 = VAR_6 + sizeof(*VAR_7);
 void *VAR_9 = (void *)(long)VAR_4->data_end;
 int VAR_10;


 if (VAR_6 + sizeof(*VAR_7) + sizeof(*VAR_8) > VAR_9) {
  FUNC_0(1);
  return VAR_3;
 }

 VAR_5.tunnel_ttl = 64;
 if (VAR_7->protocol == VAR_0) {
  VAR_5.remote_ipv4 = 0xac100164;
 } else {
  if (VAR_7->protocol != VAR_1 || VAR_7->ihl != 5)
   return VAR_3;

  if (VAR_8->dest == FUNC_1(5200))
   VAR_5.remote_ipv4 = 0xac100164;
  else if (VAR_8->dest == FUNC_1(5201))
   VAR_5.remote_ipv4 = 0xac100165;
  else
   return VAR_3;
 }

 VAR_10 = FUNC_2(VAR_4, &VAR_5, sizeof(VAR_5), 0);
 if (VAR_10 < 0) {
  FUNC_0(VAR_10);
  return VAR_3;
 }

 return VAR_2;
}
