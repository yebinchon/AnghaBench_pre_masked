
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_queue; } ;
struct rtable {int dummy; } ;
struct ipcm_cookie {int dummy; } ;
struct TYPE_2__ {int base; } ;
struct inet_sock {TYPE_1__ cork; } ;
struct flowi4 {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sock*,struct flowi4*,int *,int *,int ,int (*) (void*,char*,int,int,int,struct sk_buff*),void*,int,int,unsigned int) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *,struct ipcm_cookie*,struct rtable**) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int *) ;

int FUNC_5(struct sock *VAR_1, struct flowi4 *VAR_2,
     int VAR_3(void *VAR_4, char *VAR_5, int VAR_6, int VAR_7,
          int VAR_8, struct sk_buff *VAR_9),
     void *VAR_10, int VAR_11, int VAR_12,
     struct ipcm_cookie *VAR_13, struct rtable **VAR_14,
     unsigned int VAR_15)
{
 struct inet_sock *VAR_16 = FUNC_1(VAR_1);
 int VAR_17;

 if (VAR_15&VAR_0)
  return 0;

 if (FUNC_4(&VAR_1->sk_write_queue)) {
  VAR_17 = FUNC_2(VAR_1, &VAR_16->cork.base, VAR_13, VAR_14);
  if (VAR_17)
   return VAR_17;
 } else {
  VAR_12 = 0;
 }

 return FUNC_0(VAR_1, VAR_2, &VAR_1->sk_write_queue, &VAR_16->cork.base,
    FUNC_3(VAR_1), VAR_3,
    VAR_10, VAR_11, VAR_12, VAR_15);
}
