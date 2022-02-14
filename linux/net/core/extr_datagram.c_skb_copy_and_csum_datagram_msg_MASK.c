
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; scalar_t__ ip_summed; int csum_complete_sw; int csum; int data; } ;
struct msghdr {int msg_iter; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct msghdr*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int,int *,int,int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int,struct msghdr*,int) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct sk_buff *VAR_3,
       int VAR_4, struct msghdr *VAR_5)
{
 __wsum VAR_6;
 int VAR_7 = VAR_3->len - VAR_4;

 if (!VAR_7)
  return 0;

 if (FUNC_4(VAR_5) < VAR_7) {
  if (FUNC_0(VAR_3))
   return -VAR_2;
  if (FUNC_7(VAR_3, VAR_4, VAR_5, VAR_7))
   goto fault;
 } else {
  VAR_6 = FUNC_2(VAR_3->data, VAR_4, VAR_3->csum);
  if (FUNC_6(VAR_3, VAR_4, &VAR_5->msg_iter,
            VAR_7, &VAR_6))
   goto fault;

  if (FUNC_1(VAR_6)) {
   FUNC_3(&VAR_5->msg_iter, VAR_7);
   return -VAR_2;
  }

  if (FUNC_8(VAR_3->ip_summed == VAR_0) &&
      !VAR_3->csum_complete_sw)
   FUNC_5(((void*)0), VAR_3);
 }
 return 0;
fault:
 return -VAR_1;
}
