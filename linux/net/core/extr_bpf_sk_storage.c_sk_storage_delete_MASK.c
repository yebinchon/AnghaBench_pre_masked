
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct bpf_sk_storage_data {int dummy; } ;
struct bpf_map {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_sk_storage_data*) ;
 int FUNC_1 (int ) ;
 struct bpf_sk_storage_data* FUNC_2 (struct sock*,struct bpf_map*,int) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1, struct bpf_map *VAR_2)
{
 struct bpf_sk_storage_data *VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2, 0);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(FUNC_0(VAR_3));

 return 0;
}
