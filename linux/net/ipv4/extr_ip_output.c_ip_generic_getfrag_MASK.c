
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int csum; } ;
struct msghdr {int msg_iter; } ;
typedef int __wsum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int *) ;
 int FUNC_1 (char*,int,int *,int *) ;
 int FUNC_2 (int ,int ,int) ;

int
FUNC_3(void *VAR_2, char *VAR_3, int VAR_4, int VAR_5, int VAR_6, struct sk_buff *VAR_7)
{
 struct msghdr *VAR_8 = VAR_2;

 if (VAR_7->ip_summed == VAR_0) {
  if (!FUNC_0(VAR_3, VAR_5, &VAR_8->msg_iter))
   return -VAR_1;
 } else {
  __wsum VAR_9 = 0;
  if (!FUNC_1(VAR_3, VAR_5, &VAR_9, &VAR_8->msg_iter))
   return -VAR_1;
  VAR_7->csum = FUNC_2(VAR_7->csum, VAR_9, VAR_6);
 }
 return 0;
}
