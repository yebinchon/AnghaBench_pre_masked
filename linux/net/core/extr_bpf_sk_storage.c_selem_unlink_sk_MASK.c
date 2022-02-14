
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_sk_storage_elem {int sk_storage; } ;
struct bpf_sk_storage {int lock; } ;


 int FUNC_0 (struct bpf_sk_storage*,struct bpf_sk_storage_elem*,int) ;
 int FUNC_1 (struct bpf_sk_storage*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct bpf_sk_storage* FUNC_5 (int ) ;
 int FUNC_6 (struct bpf_sk_storage_elem*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct bpf_sk_storage_elem *VAR_1)
{
 struct bpf_sk_storage *VAR_2;
 bool VAR_3 = 0;

 if (FUNC_7(!FUNC_6(VAR_1)))

  return;

 VAR_2 = FUNC_5(VAR_1->sk_storage);
 FUNC_3(&VAR_2->lock);
 if (FUNC_2(FUNC_6(VAR_1)))
  VAR_3 = FUNC_0(VAR_2, VAR_1, 1);
 FUNC_4(&VAR_2->lock);

 if (VAR_3)
  FUNC_1(VAR_2, VAR_0);
}
