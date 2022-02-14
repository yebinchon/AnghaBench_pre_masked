
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tcf_bpf_cfg {int bpf_num_ops; int is_ebpf; struct bpf_prog* filter; struct sock_filter* bpf_ops; } ;
struct sock_fprog_kern {int len; struct sock_filter* filter; } ;
struct sock_filter {int dummy; } ;
struct nlattr {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct bpf_prog**,struct sock_fprog_kern*) ;
 int FUNC_1 (struct sock_filter*) ;
 struct sock_filter* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;

__attribute__((used)) static int FUNC_6(struct nlattr **VAR_6, struct tcf_bpf_cfg *VAR_7)
{
 struct sock_filter *VAR_8;
 struct sock_fprog_kern VAR_9;
 struct bpf_prog *VAR_10;
 u16 VAR_11, VAR_12;
 int VAR_13;

 VAR_12 = FUNC_4(VAR_6[VAR_5]);
 if (VAR_12 > VAR_0 || VAR_12 == 0)
  return -VAR_1;

 VAR_11 = VAR_12 * sizeof(*VAR_8);
 if (VAR_11 != FUNC_5(VAR_6[VAR_4]))
  return -VAR_1;

 VAR_8 = FUNC_2(FUNC_3(VAR_6[VAR_4]), VAR_11, VAR_3);
 if (VAR_8 == ((void*)0))
  return -VAR_2;

 VAR_9.len = VAR_12;
 VAR_9.filter = VAR_8;

 VAR_13 = FUNC_0(&VAR_10, &VAR_9);
 if (VAR_13 < 0) {
  FUNC_1(VAR_8);
  return VAR_13;
 }

 VAR_7->bpf_ops = VAR_8;
 VAR_7->bpf_num_ops = VAR_12;
 VAR_7->filter = VAR_10;
 VAR_7->is_ebpf = 0;

 return 0;
}
