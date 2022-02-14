
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int lock; int list; } ;
struct caif_net {int cfg; TYPE_1__ caifdevs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct caif_net* FUNC_3 (struct net*,int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2)
{
 struct caif_net *VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_0(&VAR_3->caifdevs.list);
 FUNC_2(&VAR_3->caifdevs.lock);

 VAR_3->cfg = FUNC_1();
 if (!VAR_3->cfg)
  return -VAR_0;

 return 0;
}
