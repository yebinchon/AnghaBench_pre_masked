
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct bpf_sk_storage_data {void* data; } ;
struct bpf_map {int dummy; } ;


 void* FUNC_0 (int) ;
 struct bpf_sk_storage_data* FUNC_1 (int ,struct bpf_map*,int) ;
 struct socket* FUNC_2 (int,int*) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static void *FUNC_4(struct bpf_map *VAR_0, void *VAR_1)
{
 struct bpf_sk_storage_data *VAR_2;
 struct socket *VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = *(int *)VAR_1;
 VAR_3 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_3) {
  VAR_2 = FUNC_1(VAR_3->sk, VAR_0, 1);
  FUNC_3(VAR_3);
  return VAR_2 ? VAR_2->data : ((void*)0);
 }

 return FUNC_0(VAR_5);
}
