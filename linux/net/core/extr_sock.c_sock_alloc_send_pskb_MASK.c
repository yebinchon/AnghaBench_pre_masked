
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_shutdown; int sk_allocation; TYPE_1__* sk_socket; int sk_sndbuf; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (unsigned long,unsigned long,int,int*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (long) ;
 long FUNC_9 (struct sock*,int) ;
 long FUNC_10 (struct sock*,long) ;

struct sk_buff *FUNC_11(struct sock *VAR_6, unsigned long VAR_7,
         unsigned long VAR_8, int VAR_9,
         int *VAR_10, int VAR_11)
{
 struct sk_buff *VAR_12;
 long VAR_13;
 int VAR_14;

 VAR_13 = FUNC_9(VAR_6, VAR_9);
 for (;;) {
  VAR_14 = FUNC_7(VAR_6);
  if (VAR_14 != 0)
   goto failure;

  VAR_14 = -VAR_1;
  if (VAR_6->sk_shutdown & VAR_2)
   goto failure;

  if (FUNC_5(VAR_6) < FUNC_0(VAR_6->sk_sndbuf))
   break;

  FUNC_4(VAR_3, VAR_6);
  FUNC_2(VAR_4, &VAR_6->sk_socket->flags);
  VAR_14 = -VAR_0;
  if (!VAR_13)
   goto failure;
  if (FUNC_3(VAR_5))
   goto interrupted;
  VAR_13 = FUNC_10(VAR_6, VAR_13);
 }
 VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_11,
       VAR_10, VAR_6->sk_allocation);
 if (VAR_12)
  FUNC_6(VAR_12, VAR_6);
 return VAR_12;

interrupted:
 VAR_14 = FUNC_8(VAR_13);
failure:
 *VAR_10 = VAR_14;
 return ((void*)0);
}
