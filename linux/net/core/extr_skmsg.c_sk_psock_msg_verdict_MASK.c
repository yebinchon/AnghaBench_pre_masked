
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int msg_parser; } ;
struct sk_psock {int sk_redir; int apply_bytes; TYPE_1__ progs; } ;
struct sk_msg {int sk_redir; int apply_bytes; struct sock* sk; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,struct sk_msg*) ;
 struct bpf_prog* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_msg*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct sock *VAR_3, struct sk_psock *VAR_4,
    struct sk_msg *VAR_5)
{
 struct bpf_prog *VAR_6;
 int VAR_7;

 FUNC_2();
 FUNC_4();
 VAR_6 = FUNC_1(VAR_4->progs.msg_parser);
 if (FUNC_10(!VAR_6)) {
  VAR_7 = VAR_1;
  goto out;
 }

 FUNC_6(VAR_5);
 VAR_5->sk = VAR_3;
 VAR_7 = FUNC_0(VAR_6, VAR_5);
 VAR_7 = FUNC_7(VAR_7, VAR_5->sk_redir);
 VAR_4->apply_bytes = VAR_5->apply_bytes;
 if (VAR_7 == VAR_2) {
  if (VAR_4->sk_redir)
   FUNC_9(VAR_4->sk_redir);
  VAR_4->sk_redir = VAR_5->sk_redir;
  if (!VAR_4->sk_redir) {
   VAR_7 = VAR_0;
   goto out;
  }
  FUNC_8(VAR_4->sk_redir);
 }
out:
 FUNC_5();
 FUNC_3();
 return VAR_7;
}
