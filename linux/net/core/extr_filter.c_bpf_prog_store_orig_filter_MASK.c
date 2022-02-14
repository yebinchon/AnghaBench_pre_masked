
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog_kern {int filter; int len; } ;
struct sock_fprog {int len; } ;
struct bpf_prog {struct sock_fprog_kern* orig_prog; int insns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct sock_fprog const*) ;
 int FUNC_1 (struct sock_fprog_kern*) ;
 struct sock_fprog_kern* FUNC_2 (int,int) ;
 int FUNC_3 (int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct bpf_prog *VAR_3,
          const struct sock_fprog *VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_4);
 struct sock_fprog_kern *VAR_6;

 VAR_3->orig_prog = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_3->orig_prog)
  return -VAR_0;

 VAR_6 = VAR_3->orig_prog;
 VAR_6->len = VAR_4->len;

 VAR_6->filter = FUNC_3(VAR_3->insns, VAR_5,
     VAR_1 | VAR_2);
 if (!VAR_6->filter) {
  FUNC_1(VAR_3->orig_prog);
  return -VAR_0;
 }

 return 0;
}
