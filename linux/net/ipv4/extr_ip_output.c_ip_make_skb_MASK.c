
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rtable {int dummy; } ;
struct ipcm_cookie {int dummy; } ;
struct inet_cork {int * opt; scalar_t__ addr; scalar_t__ flags; } ;
struct flowi4 {int dummy; } ;
struct TYPE_2__ {int task_frag; } ;


 struct sk_buff* FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sock*,struct flowi4*,struct sk_buff_head*,struct inet_cork*,int *,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,unsigned int) ;
 int FUNC_2 (struct sock*,struct sk_buff_head*,struct inet_cork*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct flowi4*,struct sk_buff_head*,struct inet_cork*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_5 (struct sock*,struct inet_cork*,struct ipcm_cookie*,struct rtable**) ;

struct sk_buff *FUNC_6(struct sock *VAR_2,
       struct flowi4 *VAR_3,
       int VAR_4(void *VAR_5, char *VAR_6, int VAR_7,
     int VAR_8, int VAR_9, struct sk_buff *VAR_10),
       void *VAR_11, int VAR_12, int VAR_13,
       struct ipcm_cookie *VAR_14, struct rtable **VAR_15,
       struct inet_cork *VAR_16, unsigned int VAR_17)
{
 struct sk_buff_head VAR_18;
 int VAR_19;

 if (VAR_17 & VAR_0)
  return ((void*)0);

 FUNC_4(&VAR_18);

 VAR_16->flags = 0;
 VAR_16->addr = 0;
 VAR_16->opt = ((void*)0);
 VAR_19 = FUNC_5(VAR_2, VAR_16, VAR_14, VAR_15);
 if (VAR_19)
  return FUNC_0(VAR_19);

 VAR_19 = FUNC_1(VAR_2, VAR_3, &VAR_18, VAR_16,
          &VAR_1->task_frag, VAR_4,
          VAR_11, VAR_12, VAR_13, VAR_17);
 if (VAR_19) {
  FUNC_2(VAR_2, &VAR_18, VAR_16);
  return FUNC_0(VAR_19);
 }

 return FUNC_3(VAR_2, VAR_3, &VAR_18, VAR_16);
}
