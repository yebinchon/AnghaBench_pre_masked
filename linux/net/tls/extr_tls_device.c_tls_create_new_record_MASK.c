
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_record_info {int num_frags; size_t len; int * frags; } ;
struct tls_offload_context_tx {struct tls_record_info* open_record; } ;
struct page_frag {size_t offset; int page; } ;
typedef int skb_frag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 struct tls_record_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,size_t) ;
 int FUNC_4 (int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct tls_offload_context_tx *VAR_2,
     struct page_frag *VAR_3,
     size_t VAR_4)
{
 struct tls_record_info *VAR_5;
 skb_frag_t *VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = &VAR_5->frags[0];
 FUNC_0(VAR_6, VAR_3->page);
 FUNC_3(VAR_6, VAR_3->offset);
 FUNC_4(VAR_6, VAR_4);

 FUNC_1(VAR_3->page);
 VAR_3->offset += VAR_4;

 VAR_5->num_frags = 1;
 VAR_5->len = VAR_4;
 VAR_2->open_record = VAR_5;
 return 0;
}
