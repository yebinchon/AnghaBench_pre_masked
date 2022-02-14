
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct inet_bind_bucket {int owners; } ;
struct TYPE_4__ {struct inet_bind_bucket* icsk_bind_hash; } ;
struct TYPE_3__ {unsigned short inet_num; } ;


 TYPE_2__* FUNC_0 (struct sock*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int *) ;

void FUNC_3(struct sock *VAR_0, struct inet_bind_bucket *VAR_1,
      const unsigned short VAR_2)
{
 FUNC_1(VAR_0)->inet_num = VAR_2;
 FUNC_2(VAR_0, &VAR_1->owners);
 FUNC_0(VAR_0)->icsk_bind_hash = VAR_1;
}
