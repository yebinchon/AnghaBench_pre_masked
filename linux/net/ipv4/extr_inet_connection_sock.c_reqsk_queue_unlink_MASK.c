
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request_sock {int rsk_timer; int rsk_hash; } ;
struct inet_hashinfo {int dummy; } ;
typedef int spinlock_t ;
struct TYPE_8__ {TYPE_2__* sk_prot; } ;
struct TYPE_6__ {struct inet_hashinfo* hashinfo; } ;
struct TYPE_7__ {TYPE_1__ h; } ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (struct inet_hashinfo*,int ) ;
 TYPE_3__* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (struct request_sock*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static bool FUNC_9(struct request_sock *VAR_0)
{
 struct inet_hashinfo *VAR_1 = FUNC_3(VAR_0)->sk_prot->h.hashinfo;
 bool VAR_2 = 0;

 if (FUNC_5(FUNC_3(VAR_0))) {
  spinlock_t *VAR_3 = FUNC_2(VAR_1, VAR_0->rsk_hash);

  FUNC_6(VAR_3);
  VAR_2 = FUNC_0(FUNC_3(VAR_0));
  FUNC_7(VAR_3);
 }
 if (FUNC_8(&VAR_0->rsk_timer) && FUNC_1(&VAR_0->rsk_timer))
  FUNC_4(VAR_0);
 return VAR_2;
}
