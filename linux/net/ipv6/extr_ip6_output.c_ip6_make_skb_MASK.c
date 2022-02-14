
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rt6_info {int dummy; } ;
struct ipcm6_cookie {scalar_t__ dontfrag; TYPE_1__* opt; } ;
struct TYPE_8__ {int * dst; int * opt; scalar_t__ addr; scalar_t__ flags; } ;
struct inet_cork_full {TYPE_4__ base; } ;
struct inet6_cork {int * opt; } ;
struct flowi6 {int dummy; } ;
struct TYPE_7__ {int task_frag; } ;
struct TYPE_6__ {scalar_t__ dontfrag; } ;
struct TYPE_5__ {int opt_flen; } ;


 struct sk_buff* FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct sock*,struct flowi6*,struct sk_buff_head*,TYPE_4__*,struct inet6_cork*,int *,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,unsigned int,struct ipcm6_cookie*) ;
 int FUNC_2 (struct sock*,struct sk_buff_head*,struct inet_cork_full*,struct inet6_cork*) ;
 struct sk_buff* FUNC_3 (struct sock*,struct sk_buff_head*,struct inet_cork_full*,struct inet6_cork*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct inet_cork_full*,struct inet6_cork*) ;
 int FUNC_7 (struct sock*,struct inet_cork_full*,struct inet6_cork*,struct ipcm6_cookie*,struct rt6_info*,struct flowi6*) ;

struct sk_buff *FUNC_8(struct sock *VAR_2,
        int VAR_3(void *VAR_4, char *VAR_5, int VAR_6,
      int VAR_7, int VAR_8, struct sk_buff *VAR_9),
        void *VAR_10, int VAR_11, int VAR_12,
        struct ipcm6_cookie *VAR_13, struct flowi6 *VAR_14,
        struct rt6_info *VAR_15, unsigned int VAR_16,
        struct inet_cork_full *VAR_17)
{
 struct inet6_cork VAR_18;
 struct sk_buff_head VAR_19;
 int VAR_20 = (VAR_13->opt ? VAR_13->opt->opt_flen : 0);
 int VAR_21;

 if (VAR_16 & VAR_0)
  return ((void*)0);

 FUNC_4(&VAR_19);

 VAR_17->base.flags = 0;
 VAR_17->base.addr = 0;
 VAR_17->base.opt = ((void*)0);
 VAR_17->base.dst = ((void*)0);
 VAR_18.opt = ((void*)0);
 VAR_21 = FUNC_7(VAR_2, VAR_17, &VAR_18, VAR_13, VAR_15, VAR_14);
 if (VAR_21) {
  FUNC_6(VAR_17, &VAR_18);
  return FUNC_0(VAR_21);
 }
 if (VAR_13->dontfrag < 0)
  VAR_13->dontfrag = FUNC_5(VAR_2)->dontfrag;

 VAR_21 = FUNC_1(VAR_2, VAR_14, &VAR_19, &VAR_17->base, &VAR_18,
    &VAR_1->task_frag, VAR_3, VAR_10,
    VAR_11 + VAR_20, VAR_12 + VAR_20,
    VAR_16, VAR_13);
 if (VAR_21) {
  FUNC_2(VAR_2, &VAR_19, VAR_17, &VAR_18);
  return FUNC_0(VAR_21);
 }

 return FUNC_3(VAR_2, &VAR_19, VAR_17, &VAR_18);
}
