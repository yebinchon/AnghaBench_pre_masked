
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tuple ;
struct bpf_sock_tuple {int dummy; } ;
struct bpf_sock {int dummy; } ;
struct __sk_buff {int dummy; } ;


 int VAR_0 ;
 struct bpf_sock* FUNC_0 (struct __sk_buff*,struct bpf_sock_tuple*,int,int ,int ) ;
 int FUNC_1 (struct bpf_sock*) ;

int FUNC_2(struct __sk_buff *VAR_1)
{
 struct bpf_sock_tuple VAR_2 = {};
 struct bpf_sock *VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2), VAR_0, 0);
 FUNC_1(VAR_3);
 return 0;
}
