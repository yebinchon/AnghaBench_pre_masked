
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct bictcp {int dummy; } ;
struct TYPE_2__ {scalar_t__ snd_ssthresh; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct bictcp*) ;
 scalar_t__ VAR_0 ;
 struct bictcp* FUNC_2 (struct sock*) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2)
{
 struct bictcp *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_3);

 if (VAR_0)
  FUNC_0(VAR_2);

 if (!VAR_0 && VAR_1)
  FUNC_3(VAR_2)->snd_ssthresh = VAR_1;
}
