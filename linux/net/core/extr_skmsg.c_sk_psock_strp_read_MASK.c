
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strparser {int dummy; } ;
struct TYPE_2__ {int skb_verdict; } ;
struct sk_psock {TYPE_1__ progs; } ;
struct sk_buff {int dummy; } ;
struct bpf_prog {int dummy; } ;


 struct bpf_prog* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_psock*,struct bpf_prog*,struct sk_buff*) ;
 struct sk_psock* FUNC_5 (struct strparser*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct sk_psock*,struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct strparser *VAR_1, struct sk_buff *VAR_2)
{
 struct sk_psock *VAR_3 = FUNC_5(VAR_1);
 struct bpf_prog *VAR_4;
 int VAR_5 = VAR_0;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_3->progs.skb_verdict);
 if (FUNC_1(VAR_4)) {
  FUNC_8(VAR_2);
  FUNC_9(VAR_2);
  VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_2);
  VAR_5 = FUNC_6(VAR_5, FUNC_10(VAR_2));
 }
 FUNC_3();
 FUNC_7(VAR_3, VAR_2, VAR_5);
}
