
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct raw_sock {int filter; } ;
struct TYPE_2__ {scalar_t__ inet_num; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ,int) ;
 struct raw_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_1)
{
 struct raw_sock *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_1)->inet_num == VAR_0)
  FUNC_1(&VAR_2->filter, 0, sizeof(VAR_2->filter));
 return 0;
}
