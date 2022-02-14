
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_member {scalar_t__ state; } ;
struct tipc_group {int active_cnt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct tipc_group *VAR_3,
       struct tipc_member *VAR_4)
{
 if (VAR_4->state == VAR_0 || VAR_4->state == VAR_1 ||
     VAR_4->state == VAR_2)
  VAR_3->active_cnt--;
}
