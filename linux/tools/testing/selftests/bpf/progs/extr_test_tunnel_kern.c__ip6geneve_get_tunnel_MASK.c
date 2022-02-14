
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


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct __sk_buff*,struct bpf_tunnel_key*,int,int ) ;
 int FUNC_2 (struct __sk_buff*,struct geneve_opt*,int) ;
 int FUNC_3 (char*,int,int ,int ,int ) ;

int FUNC_4(struct __sk_buff *VAR_3)
{
 char VAR_4[] = "key %d remote ip 0x%x geneve class 0x%x\n";
 struct bpf_tunnel_key VAR_5;
 struct geneve_opt VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, &VAR_5, sizeof(VAR_5),
         VAR_0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_7);
  return VAR_2;
 }

 VAR_7 = FUNC_2(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0) {
  FUNC_0(VAR_7);
  return VAR_2;
 }

 FUNC_3(VAR_4, sizeof(VAR_4),
   VAR_5.tunnel_id, VAR_5.remote_ipv4, VAR_6.opt_class);

 return VAR_1;
}
