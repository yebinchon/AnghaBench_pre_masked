
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog {int len; int filter; } ;
struct sock {int dummy; } ;
struct bpf_prog {int len; int insns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bpf_prog* FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct sock_fprog*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*,int *) ;
 struct bpf_prog* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bpf_prog*,struct sock_fprog*) ;
 scalar_t__ FUNC_8 (int ,int ,unsigned int) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static
struct bpf_prog *FUNC_10(struct sock_fprog *VAR_5, struct sock *VAR_6)
{
 unsigned int VAR_7 = FUNC_3(VAR_5);
 struct bpf_prog *VAR_8;
 int VAR_9;

 if (FUNC_9(VAR_6, VAR_4))
  return FUNC_0(-VAR_3);


 if (!FUNC_2(VAR_5->filter, VAR_5->len))
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_5(FUNC_6(VAR_5->len), 0);
 if (!VAR_8)
  return FUNC_0(-VAR_2);

 if (FUNC_8(VAR_8->insns, VAR_5->filter, VAR_7)) {
  FUNC_1(VAR_8);
  return FUNC_0(-VAR_0);
 }

 VAR_8->len = VAR_5->len;

 VAR_9 = FUNC_7(VAR_8, VAR_5);
 if (VAR_9) {
  FUNC_1(VAR_8);
  return FUNC_0(-VAR_2);
 }




 return FUNC_4(VAR_8, ((void*)0));
}
