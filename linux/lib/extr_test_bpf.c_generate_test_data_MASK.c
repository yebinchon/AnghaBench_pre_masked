
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void sk_buff ;
struct page {int dummy; } ;
struct bpf_test {int aux; int frag_data; TYPE_1__* test; int data; } ;
struct TYPE_2__ {int data_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (void*,int ,int ) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (void*,int ,struct page*,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_8(struct bpf_test *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 struct page *VAR_7;

 if (VAR_4->aux & VAR_0)
  return ((void*)0);





 VAR_6 = FUNC_6(VAR_4->data, VAR_4->test[VAR_5].data_size);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_4->aux & VAR_1) {





  void *VAR_8;

  VAR_7 = FUNC_1(VAR_2);

  if (!VAR_7)
   goto err_kfree_skb;

  VAR_8 = FUNC_3(VAR_7);
  if (!VAR_8)
   goto err_free_page;
  FUNC_5(VAR_8, VAR_4->frag_data, VAR_3);
  FUNC_4(VAR_7);
  FUNC_7(VAR_6, 0, VAR_7, 0, VAR_3, VAR_3);
 }

 return VAR_6;

err_free_page:
 FUNC_0(VAR_7);
err_kfree_skb:
 FUNC_2(VAR_6);
 return ((void*)0);
}
