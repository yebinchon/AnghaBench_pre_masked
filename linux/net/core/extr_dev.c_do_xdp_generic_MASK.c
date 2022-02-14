
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_buff {int dummy; } ;
struct sk_buff {int dev; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sk_buff*,struct bpf_prog*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_3 (int ,struct sk_buff*,struct xdp_buff*,struct bpf_prog*) ;

int FUNC_4(struct bpf_prog *VAR_2, struct sk_buff *VAR_3)
{
 if (VAR_2) {
  struct xdp_buff VAR_4;
  u32 VAR_5;
  int VAR_6;

  VAR_5 = FUNC_2(VAR_3, &VAR_4, VAR_2);
  if (VAR_5 != VAR_1) {
   switch (VAR_5) {
   case 129:
    VAR_6 = FUNC_3(VAR_3->dev, VAR_3,
             &VAR_4, VAR_2);
    if (VAR_6)
     goto out_redir;
    break;
   case 128:
    FUNC_0(VAR_3, VAR_2);
    break;
   }
   return VAR_0;
  }
 }
 return VAR_1;
out_redir:
 FUNC_1(VAR_3);
 return VAR_0;
}
