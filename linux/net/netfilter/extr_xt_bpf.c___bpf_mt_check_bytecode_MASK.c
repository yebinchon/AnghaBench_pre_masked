
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_fprog_kern {struct sock_filter* filter; scalar_t__ len; } ;
struct sock_filter {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bpf_prog**,struct sock_fprog_kern*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct sock_filter *VAR_2, __u16 VAR_3,
       struct bpf_prog **VAR_4)
{
 struct sock_fprog_kern VAR_5;

 if (VAR_3 > VAR_1)
  return -VAR_0;

 VAR_5.len = VAR_3;
 VAR_5.filter = VAR_2;

 if (FUNC_0(VAR_4, &VAR_5)) {
  FUNC_1("check failed: parse error\n");
  return -VAR_0;
 }

 return 0;
}
