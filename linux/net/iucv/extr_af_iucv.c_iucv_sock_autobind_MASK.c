
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_allocation; } ;
struct iucv_sock {scalar_t__ msglimit; int transport; int src_user_id; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iucv_sock*) ;
 struct iucv_sock* FUNC_1 (struct sock*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct sock *VAR_7)
{
 struct iucv_sock *VAR_8 = FUNC_1(VAR_7);
 int VAR_9 = 0;

 if (FUNC_3(!VAR_6))
  return -VAR_1;

 FUNC_2(VAR_8->src_user_id, VAR_5, 8);
 VAR_8->transport = VAR_0;
 VAR_7->sk_allocation |= VAR_2;

 FUNC_4(&VAR_4.lock);
 FUNC_0(VAR_8);
 FUNC_5(&VAR_4.lock);

 if (!VAR_8->msglimit)
  VAR_8->msglimit = VAR_3;

 return VAR_9;
}
