
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_record_info {scalar_t__ len; int * frags; } ;
struct tls_prot_info {int tag_size; scalar_t__ overhead_size; int version; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct sock {int sk_allocation; } ;
struct page_frag {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct page_frag*,int ) ;
 int FUNC_3 (struct tls_record_info*,struct page_frag*,int) ;
 int FUNC_4 (struct tls_context*,int ,scalar_t__,unsigned char,int ) ;

__attribute__((used)) static int FUNC_5(struct sock *VAR_1,
       struct tls_context *VAR_2,
       struct tls_record_info *VAR_3,
       struct page_frag *VAR_4,
       unsigned char VAR_5)
{
 struct tls_prot_info *VAR_6 = &VAR_2->prot_info;
 int VAR_7;







 if (FUNC_0(FUNC_2(VAR_6->tag_size, VAR_4,
     VAR_1->sk_allocation))) {
  VAR_7 = 0;
  FUNC_3(VAR_3, VAR_4, VAR_6->tag_size);
 } else {
  VAR_7 = VAR_6->tag_size;
  if (VAR_3->len <= VAR_6->overhead_size)
   return -VAR_0;
 }


 FUNC_4(VAR_2, FUNC_1(&VAR_3->frags[0]),
    VAR_3->len - VAR_6->overhead_size,
    VAR_5, VAR_6->version);
 return VAR_7;
}
