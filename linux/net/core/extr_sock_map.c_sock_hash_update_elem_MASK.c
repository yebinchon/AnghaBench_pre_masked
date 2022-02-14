
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct socket {int file; struct sock* sk; } ;
struct sock {scalar_t__ sk_state; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bpf_map*,void*,struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct socket* FUNC_5 (int ,int*) ;

__attribute__((used)) static int FUNC_6(struct bpf_map *VAR_3, void *VAR_4,
     void *VAR_5, u64 VAR_6)
{
 u32 VAR_7 = *(u32 *)VAR_5;
 struct socket *VAR_8;
 struct sock *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_7, &VAR_10);
 if (!VAR_8)
  return VAR_10;
 VAR_9 = VAR_8->sk;
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto out;
 }
 if (!FUNC_3(VAR_9) ||
     VAR_9->sk_state != VAR_2) {
  VAR_10 = -VAR_1;
  goto out;
 }

 FUNC_2(VAR_9);
 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_9, VAR_6);
 FUNC_4(VAR_9);
out:
 FUNC_0(VAR_8->file);
 return VAR_10;
}
