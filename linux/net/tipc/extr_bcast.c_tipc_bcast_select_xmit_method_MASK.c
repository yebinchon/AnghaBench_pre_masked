
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_mc_method {unsigned long expires; int rcast; scalar_t__ mandatory; } ;
struct tipc_bc_base {int bc_threshold; scalar_t__ force_rcast; scalar_t__ force_bcast; int rcast_support; int bcast_support; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 struct tipc_bc_base* FUNC_1 (struct net*) ;
 TYPE_1__* FUNC_2 (struct net*) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_3, int VAR_4,
       struct tipc_mc_method *VAR_5)
{
 struct tipc_bc_base *VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7 = VAR_5->expires;


 if (!VAR_6->bcast_support) {
  VAR_5->rcast = 1;
  return;
 }

 if (!VAR_6->rcast_support) {
  VAR_5->rcast = 0;
  return;
 }

 VAR_5->expires = VAR_2 + VAR_1;
 if (VAR_5->mandatory)
  return;

 if (!(FUNC_2(VAR_3)->capabilities & VAR_0) &&
     FUNC_0(VAR_2, VAR_7))
  return;


 if (VAR_6->force_bcast) {
  VAR_5->rcast = 0;
  return;
 }

 if (VAR_6->force_rcast) {
  VAR_5->rcast = 1;
  return;
 }


 VAR_5->rcast = VAR_4 <= VAR_6->bc_threshold;
}
