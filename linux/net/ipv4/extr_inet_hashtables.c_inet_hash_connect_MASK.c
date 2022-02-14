
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct inet_timewait_death_row {int dummy; } ;
struct TYPE_2__ {int inet_num; } ;


 int VAR_0 ;
 int FUNC_0 (struct inet_timewait_death_row*,struct sock*,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct inet_timewait_death_row *VAR_1,
        struct sock *VAR_2)
{
 u32 VAR_3 = 0;

 if (!FUNC_1(VAR_2)->inet_num)
  VAR_3 = FUNC_2(VAR_2);
 return FUNC_0(VAR_1, VAR_2, VAR_3,
       VAR_0);
}
