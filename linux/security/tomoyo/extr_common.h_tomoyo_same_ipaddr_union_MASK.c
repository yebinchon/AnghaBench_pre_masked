
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_ipaddr_union {scalar_t__ group; scalar_t__ is_ipv6; int ip; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline bool FUNC_1
(const struct tomoyo_ipaddr_union *VAR_0, const struct tomoyo_ipaddr_union *VAR_1)
{
 return !FUNC_0(VAR_0->ip, VAR_1->ip, sizeof(VAR_0->ip)) && VAR_0->group == VAR_1->group &&
  VAR_0->is_ipv6 == VAR_1->is_ipv6;
}
