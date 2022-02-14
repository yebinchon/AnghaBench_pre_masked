
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct bpf_sk_storage_map {int map; } ;
struct bpf_sk_storage_elem {int dummy; } ;
struct TYPE_2__ {int data; } ;


 TYPE_1__* FUNC_0 (struct bpf_sk_storage_elem*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 struct bpf_sk_storage_elem* FUNC_4 (struct bpf_sk_storage_map*,struct sock*,int *,int) ;

__attribute__((used)) static struct bpf_sk_storage_elem *
FUNC_5(struct sock *VAR_0,
     struct bpf_sk_storage_map *VAR_1,
     struct bpf_sk_storage_elem *VAR_2)
{
 struct bpf_sk_storage_elem *VAR_3;

 VAR_3 = FUNC_4(VAR_1, VAR_0, ((void*)0), 1);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_3(&VAR_1->map))
  FUNC_2(&VAR_1->map, FUNC_0(VAR_3)->data,
          FUNC_0(VAR_2)->data, 1);
 else
  FUNC_1(&VAR_1->map, FUNC_0(VAR_3)->data,
          FUNC_0(VAR_2)->data);

 return VAR_3;
}
