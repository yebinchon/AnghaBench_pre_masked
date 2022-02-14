
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct geneve_opt {int opt_class; } ;
struct bpf_tunnel_key {int remote_ipv4; int tunnel_id; } ;
struct __sk_buff {int dummy; } ;
typedef int key ;
typedef int gopt ;
typedef int fmt ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;
 int FUNC_2 (struct __sk_buff*,struct geneve_opt*,int) ;
 int FUNC_3 (char*,int,int ,int ,int ) ;

int FUNC_4(struct __sk_buff *VAR_2)
{
 int VAR_3;
 struct bpf_tunnel_key VAR_4;
 struct geneve_opt VAR_5;
 char VAR_6[] = "key %d remote ip 0x%x geneve class 0x%x\n";

 VAR_3 = FUNC_1(VAR_2, &VAR_4, sizeof(VAR_4), 0);
 if (VAR_3 < 0) {
  FUNC_0(VAR_3);
  return VAR_1;
 }

 VAR_3 = FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5));
 if (VAR_3 < 0) {
  FUNC_0(VAR_3);
  return VAR_1;
 }

 FUNC_3(VAR_6, sizeof(VAR_6),
   VAR_4.tunnel_id, VAR_4.remote_ipv4, VAR_5.opt_class);
 return VAR_0;
}
