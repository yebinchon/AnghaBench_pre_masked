
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int rhash_table; } ;
struct ila_net {TYPE_1__ xlat; } ;


 int FUNC_0 (struct ila_net*) ;
 int VAR_0 ;
 struct ila_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;

int FUNC_3(struct net *VAR_2)
{
 struct ila_net *VAR_3 = FUNC_1(VAR_2, VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_2(&VAR_3->xlat.rhash_table, &VAR_1);

 return 0;
}
