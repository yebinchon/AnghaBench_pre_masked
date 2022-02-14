
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tunnel_key {int tunnel_label; int * remote_ipv6; int tunnel_id; } ;
struct __sk_buff {int dummy; } ;
typedef int key ;
typedef int fmt ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;
 int FUNC_2 (char*,int,int ,int ,int ) ;

int FUNC_3(struct __sk_buff *VAR_3)
{
 char VAR_4[] = "key %d remote ip6 ::%x label %x\n";
 struct bpf_tunnel_key VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5),
         VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(VAR_6);
  return VAR_2;
 }

 FUNC_2(VAR_4, sizeof(VAR_4),
    VAR_5.tunnel_id, VAR_5.remote_ipv6[3], VAR_5.tunnel_label);

 return VAR_1;
}
