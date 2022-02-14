
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog_kern {int len; int filter; } ;
struct bpf_prog {int * orig_prog; int len; int insns; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (struct sock_fprog_kern*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*,int *) ;
 struct bpf_prog* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,unsigned int) ;

int FUNC_8(struct bpf_prog **VAR_2, struct sock_fprog_kern *VAR_3)
{
 unsigned int VAR_4 = FUNC_3(VAR_3);
 struct bpf_prog *VAR_5;


 if (!FUNC_2(VAR_3->filter, VAR_3->len))
  return -VAR_0;

 VAR_5 = FUNC_5(FUNC_6(VAR_3->len), 0);
 if (!VAR_5)
  return -VAR_1;

 FUNC_7(VAR_5->insns, VAR_3->filter, VAR_4);

 VAR_5->len = VAR_3->len;




 VAR_5->orig_prog = ((void*)0);




 VAR_5 = FUNC_4(VAR_5, ((void*)0));
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 *VAR_2 = VAR_5;
 return 0;
}
