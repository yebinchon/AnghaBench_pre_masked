
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock_filter {int dummy; } ;
struct bpf_prog {int len; int insns; } ;
struct bpf_insn {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct bpf_prog* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bpf_prog*) ;
 int FUNC_3 (struct sock_filter*,int,struct bpf_prog*,int*,int*) ;
 struct bpf_prog* FUNC_4 (struct bpf_prog*,int ,int ) ;
 struct bpf_prog* FUNC_5 (struct bpf_prog*,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct sock_filter*) ;
 struct sock_filter* FUNC_8 (int ,int,int) ;

__attribute__((used)) static struct bpf_prog *FUNC_9(struct bpf_prog *VAR_3)
{
 struct sock_filter *VAR_4;
 struct bpf_prog *VAR_5;
 int VAR_6, VAR_7, VAR_8 = VAR_3->len;
 bool VAR_9 = 0;






 FUNC_0(sizeof(struct sock_filter) !=
       sizeof(struct bpf_insn));





 VAR_4 = FUNC_8(VAR_3->insns, VAR_8 * sizeof(struct sock_filter),
      VAR_1 | VAR_2);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto out_err;
 }


 VAR_6 = FUNC_3(VAR_4, VAR_8, ((void*)0), &VAR_7,
     &VAR_9);
 if (VAR_6)
  goto out_err_free;


 VAR_5 = VAR_3;
 VAR_3 = FUNC_4(VAR_5, FUNC_6(VAR_7), 0);
 if (!VAR_3) {



  VAR_3 = VAR_5;
  VAR_6 = -VAR_0;
  goto out_err_free;
 }

 VAR_3->len = VAR_7;


 VAR_6 = FUNC_3(VAR_4, VAR_8, VAR_3, &VAR_7,
     &VAR_9);
 if (VAR_6)





  goto out_err_free;

 VAR_3 = FUNC_5(VAR_3, &VAR_6);
 if (VAR_6)
  goto out_err_free;

 FUNC_7(VAR_4);
 return VAR_3;

out_err_free:
 FUNC_7(VAR_4);
out_err:
 FUNC_2(VAR_3);
 return FUNC_1(VAR_6);
}
