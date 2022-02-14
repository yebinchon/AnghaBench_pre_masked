
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct bpf_prog {int dummy; } ;


 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_2 (int ,struct sock*) ;
 int FUNC_3 (struct bpf_prog*,struct sock*) ;
 int FUNC_4 (struct bpf_prog*) ;

int FUNC_5(u32 VAR_0, struct sock *VAR_1)
{
 struct bpf_prog *VAR_2 = FUNC_2(VAR_0, VAR_1);
 int VAR_3;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_4(VAR_2);
  return VAR_3;
 }

 return 0;
}
