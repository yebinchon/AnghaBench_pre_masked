
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tunnel_key {int remote_ipv4; } ;
struct __sk_buff {int dummy; } ;
typedef int key ;
typedef int fmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;
 int FUNC_2 (char*,int,int ) ;

int FUNC_3(struct __sk_buff *VAR_2)
{
 int VAR_3;
 struct bpf_tunnel_key VAR_4;
 char VAR_5[] = "remote ip 0x%x\n";

 VAR_3 = FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4), 0);
 if (VAR_3 < 0) {
  FUNC_0(VAR_3);
  return VAR_1;
 }

 FUNC_2(VAR_5, sizeof(VAR_5), VAR_4.remote_ipv4);
 return VAR_0;
}
