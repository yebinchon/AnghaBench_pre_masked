
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ hooks_registered; int locks; int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ila_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,int ,int ) ;
 int FUNC_4 (int *,int ,int *) ;

void FUNC_5(struct net *VAR_3)
{
 struct ila_net *VAR_4 = FUNC_2(VAR_3, VAR_1);

 FUNC_4(&VAR_4->xlat.rhash_table, VAR_0, ((void*)0));

 FUNC_1(VAR_4->xlat.locks);

 if (VAR_4->xlat.hooks_registered)
  FUNC_3(VAR_3, VAR_2,
     FUNC_0(VAR_2));
}
