
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_psock {int * sk; } ;
struct sk_buff {int * sk; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sk_psock *VAR_0, struct bpf_prog *VAR_1,
       struct sk_buff *VAR_2)
{
 int VAR_3;

 VAR_2->sk = VAR_0->sk;
 FUNC_1(VAR_2);
 FUNC_2();
 VAR_3 = FUNC_0(VAR_1, VAR_2);
 FUNC_3();






 VAR_2->sk = ((void*)0);
 return VAR_3;
}
