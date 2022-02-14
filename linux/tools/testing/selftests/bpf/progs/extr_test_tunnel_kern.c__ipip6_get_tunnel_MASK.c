
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_tunnel_key {int * remote_ipv6; } ;
struct __sk_buff {int dummy; } ;
typedef int key ;
typedef int fmt ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;
 int FUNC_3 (char*,int,int ,int ) ;

int FUNC_4(struct __sk_buff *VAR_3)
{
 int VAR_4;
 struct bpf_tunnel_key VAR_5;
 char VAR_6[] = "remote ip6 %x::%x\n";

 VAR_4 = FUNC_2(VAR_3, &VAR_5, sizeof(VAR_5),
         VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(VAR_4);
  return VAR_2;
 }

 FUNC_3(VAR_6, sizeof(VAR_6), FUNC_1(VAR_5.remote_ipv6[0]),
    FUNC_1(VAR_5.remote_ipv6[3]));
 return VAR_1;
}
