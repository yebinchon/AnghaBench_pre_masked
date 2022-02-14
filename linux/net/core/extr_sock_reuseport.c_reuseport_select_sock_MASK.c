
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sock_reuseport {int num_socks; struct sock** socks; int prog; } ;
struct sock {scalar_t__ sk_state; int sk_reuseport_cb; } ;
struct sk_buff {int dummy; } ;
struct bpf_prog {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct sock* FUNC_1 (struct sock_reuseport*,struct sock*,struct bpf_prog*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 struct sock* FUNC_7 (struct sock_reuseport*,int ,struct bpf_prog*,struct sk_buff*,int) ;
 int FUNC_8 () ;

struct sock *FUNC_9(struct sock *VAR_2,
       u32 VAR_3,
       struct sk_buff *VAR_4,
       int VAR_5)
{
 struct sock_reuseport *VAR_6;
 struct bpf_prog *VAR_7;
 struct sock *VAR_8 = ((void*)0);
 u16 VAR_9;

 FUNC_4();
 VAR_6 = FUNC_3(VAR_2->sk_reuseport_cb);


 if (!VAR_6)
  goto out;

 VAR_7 = FUNC_3(VAR_6->prog);
 VAR_9 = FUNC_0(VAR_6->num_socks);
 if (FUNC_2(VAR_9)) {

  FUNC_8();

  if (!VAR_7 || !VAR_4)
   goto select_by_hash;

  if (VAR_7->type == VAR_0)
   VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_7, VAR_4, VAR_3);
  else
   VAR_8 = FUNC_7(VAR_6, VAR_9, VAR_7, VAR_4, VAR_5);

select_by_hash:

  if (!VAR_8) {
   int VAR_10, VAR_11;

   VAR_10 = VAR_11 = FUNC_6(VAR_3, VAR_9);
   while (VAR_6->socks[VAR_10]->sk_state == VAR_1) {
    VAR_10++;
    if (VAR_10 >= VAR_6->num_socks)
     VAR_10 = 0;
    if (VAR_10 == VAR_11)
     goto out;
   }
   VAR_8 = VAR_6->socks[VAR_10];
  }
 }

out:
 FUNC_5();
 return VAR_8;
}
