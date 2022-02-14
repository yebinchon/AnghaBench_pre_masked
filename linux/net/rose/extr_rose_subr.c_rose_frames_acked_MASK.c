
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rose_sock {unsigned short va; int ack_queue; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct rose_sock* FUNC_1 (struct sock*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

void FUNC_4(struct sock *VAR_1, unsigned short VAR_2)
{
 struct sk_buff *VAR_3;
 struct rose_sock *VAR_4 = FUNC_1(VAR_1);




 if (VAR_4->va != VAR_2) {
  while (FUNC_3(&VAR_4->ack_queue) != ((void*)0) && VAR_4->va != VAR_2) {
   VAR_3 = FUNC_2(&VAR_4->ack_queue);
   FUNC_0(VAR_3);
   VAR_4->va = (VAR_4->va + 1) % VAR_0;
  }
 }
}
