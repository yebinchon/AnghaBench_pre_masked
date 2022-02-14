
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_omem_alloc; } ;
struct TYPE_3__ {int value_size; } ;
struct bpf_sk_storage_map {int elem_size; TYPE_1__ map; } ;
struct bpf_sk_storage_elem {int dummy; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct bpf_sk_storage_elem*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 struct bpf_sk_storage_elem* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,void*,int ) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static struct bpf_sk_storage_elem *FUNC_5(struct bpf_sk_storage_map *VAR_2,
            struct sock *VAR_3, void *VAR_4,
            bool VAR_5)
{
 struct bpf_sk_storage_elem *VAR_6;

 if (VAR_5 && FUNC_4(VAR_3, VAR_2->elem_size))
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_2->elem_size, VAR_0 | VAR_1);
 if (VAR_6) {
  if (VAR_4)
   FUNC_3(FUNC_0(VAR_6)->data, VAR_4, VAR_2->map.value_size);
  return VAR_6;
 }

 if (VAR_5)
  FUNC_1(VAR_2->elem_size, &VAR_3->sk_omem_alloc);

 return ((void*)0);
}
