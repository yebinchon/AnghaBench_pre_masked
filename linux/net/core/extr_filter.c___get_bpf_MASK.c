
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bpf_prog* FUNC_0 (int ) ;
 int VAR_2 ;
 struct bpf_prog* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct sock*,int ) ;

__attribute__((used)) static struct bpf_prog *FUNC_3(u32 VAR_3, struct sock *VAR_4)
{
 if (FUNC_2(VAR_4, VAR_2))
  return FUNC_0(-VAR_1);

 return FUNC_1(VAR_3, VAR_0);
}
