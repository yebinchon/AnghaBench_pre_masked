
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_ct_tcp {TYPE_1__* seen; int state; } ;
struct TYPE_2__ {scalar_t__ td_maxwin; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ip_ct_tcp *VAR_1)
{
 VAR_1->state = VAR_0;
 VAR_1->seen[0].td_maxwin = 0;
 VAR_1->seen[1].td_maxwin = 0;
}
