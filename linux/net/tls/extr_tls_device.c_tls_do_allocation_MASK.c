
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_offload_context_tx {int open_record; } ;
struct sock {TYPE_1__* sk_prot; int sk_allocation; } ;
struct page_frag {scalar_t__ size; scalar_t__ offset; } ;
struct TYPE_2__ {int (* enter_memory_pressure ) (struct sock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct page_frag*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (size_t,struct page_frag*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct tls_offload_context_tx*,struct page_frag*,size_t) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_1,
        struct tls_offload_context_tx *VAR_2,
        struct page_frag *VAR_3,
        size_t VAR_4)
{
 int VAR_5;

 if (!VAR_2->open_record) {
  if (FUNC_5(!FUNC_2(VAR_4, VAR_3,
         VAR_1->sk_allocation))) {
   VAR_1->sk_prot->enter_memory_pressure(VAR_1);
   FUNC_1(VAR_1);
   return -VAR_0;
  }

  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;

  if (VAR_3->size > VAR_3->offset)
   return 0;
 }

 if (!FUNC_0(VAR_1, VAR_3))
  return -VAR_0;

 return 0;
}
