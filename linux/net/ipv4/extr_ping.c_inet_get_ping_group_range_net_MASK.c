
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int * range; } ;
struct TYPE_4__ {TYPE_1__ ping_group_range; } ;
struct net {TYPE_2__ ipv4; } ;
typedef int kgid_t ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_0, kgid_t *VAR_1,
       kgid_t *VAR_2)
{
 kgid_t *VAR_3 = VAR_0->ipv4.ping_group_range.range;
 unsigned int VAR_4;

 do {
  VAR_4 = FUNC_0(&VAR_0->ipv4.ping_group_range.lock);

  *VAR_1 = VAR_3[0];
  *VAR_2 = VAR_3[1];
 } while (FUNC_1(&VAR_0->ipv4.ping_group_range.lock, VAR_4));
}
