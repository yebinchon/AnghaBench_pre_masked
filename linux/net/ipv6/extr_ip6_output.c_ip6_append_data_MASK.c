
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct rt6_info {int dummy; } ;
struct ipv6_pinfo {int cork; } ;
struct ipcm6_cookie {TYPE_1__* opt; } ;
struct flowi6 {int dummy; } ;
struct TYPE_6__ {struct flowi6 ip6; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {int base; TYPE_3__ fl; } ;
struct inet_sock {TYPE_4__ cork; } ;
struct TYPE_5__ {int opt_flen; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sock*,struct flowi6*,int *,int *,int *,int ,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,unsigned int,struct ipcm6_cookie*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,TYPE_4__*,int *,struct ipcm6_cookie*,struct rt6_info*,struct flowi6*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int *) ;

int FUNC_6(struct sock *VAR_1,
      int VAR_2(void *VAR_3, char *VAR_4, int VAR_5, int VAR_6,
    int VAR_7, struct sk_buff *VAR_8),
      void *VAR_9, int VAR_10, int VAR_11,
      struct ipcm6_cookie *VAR_12, struct flowi6 *VAR_13,
      struct rt6_info *VAR_14, unsigned int VAR_15)
{
 struct inet_sock *VAR_16 = FUNC_2(VAR_1);
 struct ipv6_pinfo *VAR_17 = FUNC_1(VAR_1);
 int VAR_18;
 int VAR_19;

 if (VAR_15&VAR_0)
  return 0;
 if (FUNC_5(&VAR_1->sk_write_queue)) {



  VAR_19 = FUNC_3(VAR_1, &VAR_16->cork, &VAR_17->cork,
         VAR_12, VAR_14, VAR_13);
  if (VAR_19)
   return VAR_19;

  VAR_18 = (VAR_12->opt ? VAR_12->opt->opt_flen : 0);
  VAR_10 += VAR_18;
  VAR_11 += VAR_18;
 } else {
  VAR_13 = &VAR_16->cork.fl.u.ip6;
  VAR_11 = 0;
 }

 return FUNC_0(VAR_1, VAR_13, &VAR_1->sk_write_queue, &VAR_16->cork.base,
     &VAR_17->cork, FUNC_4(VAR_1), VAR_2,
     VAR_9, VAR_10, VAR_11, VAR_15, VAR_12);
}
