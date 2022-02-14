
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_psock_progs {int skb_verdict; int skb_parser; int msg_parser; } ;
struct bpf_prog {int dummy; } ;
struct bpf_map {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (int *,struct bpf_prog*) ;
 struct sk_psock_progs* FUNC_1 (struct bpf_map*) ;

int FUNC_2(struct bpf_map *VAR_1, struct bpf_prog *VAR_2,
    u32 VAR_3)
{
 struct sk_psock_progs *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_3) {
 case 130:
  FUNC_0(&VAR_4->msg_parser, VAR_2);
  break;
 case 129:
  FUNC_0(&VAR_4->skb_parser, VAR_2);
  break;
 case 128:
  FUNC_0(&VAR_4->skb_verdict, VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
