
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strparser {int dummy; } ;
struct TYPE_2__ {int skb_parser; } ;
struct sk_psock {TYPE_1__ progs; } ;
struct sk_buff {int len; } ;
struct bpf_prog {int dummy; } ;


 struct bpf_prog* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_psock*,struct bpf_prog*,struct sk_buff*) ;
 struct sk_psock* FUNC_5 (struct strparser*) ;

__attribute__((used)) static int FUNC_6(struct strparser *VAR_0, struct sk_buff *VAR_1)
{
 struct sk_psock *VAR_2 = FUNC_5(VAR_0);
 struct bpf_prog *VAR_3;
 int VAR_4 = VAR_1->len;

 FUNC_2();
 VAR_3 = FUNC_0(VAR_2->progs.skb_parser);
 if (FUNC_1(VAR_3))
  VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_1);
 FUNC_3();
 return VAR_4;
}
