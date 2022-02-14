
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog_kern {struct sock_fprog_kern* filter; } ;
struct bpf_prog {struct sock_fprog_kern* orig_prog; } ;


 int FUNC_0 (struct sock_fprog_kern*) ;

__attribute__((used)) static void FUNC_1(struct bpf_prog *VAR_0)
{
 struct sock_fprog_kern *VAR_1 = VAR_0->orig_prog;

 if (VAR_1) {
  FUNC_0(VAR_1->filter);
  FUNC_0(VAR_1);
 }
}
