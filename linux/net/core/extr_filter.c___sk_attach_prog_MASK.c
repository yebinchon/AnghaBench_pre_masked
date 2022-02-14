
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int refcnt; struct bpf_prog* prog; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sk_filter*) ;
 int FUNC_1 (struct sk_filter*) ;
 struct sk_filter* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,struct sk_filter*) ;
 struct sk_filter* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (struct sock*,struct sk_filter*) ;

__attribute__((used)) static int FUNC_8(struct bpf_prog *VAR_2, struct sock *VAR_3)
{
 struct sk_filter *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->prog = VAR_2;

 if (!FUNC_0(VAR_3, VAR_4)) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 FUNC_6(&VAR_4->refcnt, 1);

 VAR_5 = FUNC_5(VAR_3->sk_filter,
        FUNC_3(VAR_3));
 FUNC_4(VAR_3->sk_filter, VAR_4);

 if (VAR_5)
  FUNC_7(VAR_3, VAR_5);

 return 0;
}
