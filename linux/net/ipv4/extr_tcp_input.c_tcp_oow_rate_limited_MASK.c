
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ seq; scalar_t__ end_seq; } ;
struct TYPE_3__ {int syn; } ;


 TYPE_2__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct net*,int,int *) ;
 TYPE_1__* FUNC_2 (struct sk_buff const*) ;

bool FUNC_3(struct net *VAR_0, const struct sk_buff *VAR_1,
     int VAR_2, u32 *VAR_3)
{

 if ((FUNC_0(VAR_1)->seq != FUNC_0(VAR_1)->end_seq) &&
     !FUNC_2(VAR_1)->syn)
  return 0;

 return FUNC_1(VAR_0, VAR_2, VAR_3);
}
