
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct socket {int sk; } ;
struct bpf_sk_storage_data {int dummy; } ;
struct bpf_map {int dummy; } ;


 int FUNC_0 (struct bpf_sk_storage_data*) ;
 struct bpf_sk_storage_data* FUNC_1 (int ,struct bpf_map*,void*,int ) ;
 struct socket* FUNC_2 (int,int*) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static int FUNC_4(struct bpf_map *VAR_0, void *VAR_1,
      void *VAR_2, u64 VAR_3)
{
 struct bpf_sk_storage_data *VAR_4;
 struct socket *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = *(int *)VAR_1;
 VAR_5 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_5) {
  VAR_4 = FUNC_1(VAR_5->sk, VAR_0, VAR_2, VAR_3);
  FUNC_3(VAR_5);
  return FUNC_0(VAR_4);
 }

 return VAR_7;
}
