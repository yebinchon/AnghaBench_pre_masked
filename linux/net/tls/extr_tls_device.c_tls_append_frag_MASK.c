
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_record_info {int num_frags; int len; int * frags; } ;
struct page_frag {scalar_t__ offset; int page; } ;
typedef int skb_frag_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct tls_record_info *VAR_0,
       struct page_frag *VAR_1,
       int VAR_2)
{
 skb_frag_t *VAR_3;

 VAR_3 = &VAR_0->frags[VAR_0->num_frags - 1];
 if (FUNC_4(VAR_3) == VAR_1->page &&
     FUNC_2(VAR_3) + FUNC_5(VAR_3) == VAR_1->offset) {
  FUNC_6(VAR_3, VAR_2);
 } else {
  ++VAR_3;
  FUNC_0(VAR_3, VAR_1->page);
  FUNC_3(VAR_3, VAR_1->offset);
  FUNC_7(VAR_3, VAR_2);
  ++VAR_0->num_frags;
  FUNC_1(VAR_1->page);
 }

 VAR_1->offset += VAR_2;
 VAR_0->len += VAR_2;
}
