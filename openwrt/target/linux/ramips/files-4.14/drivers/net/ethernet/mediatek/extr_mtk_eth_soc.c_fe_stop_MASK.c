
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fe_priv {int page_lock; TYPE_2__* phy; int rx_napi; TYPE_1__* soc; } ;
struct TYPE_4__ {int (* stop ) (struct fe_priv*) ;} ;
struct TYPE_3__ {int tx_int; int rx_int; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fe_priv*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct fe_priv*) ;
 int FUNC_6 (int *) ;
 struct fe_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct fe_priv*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6)
{
 struct fe_priv *VAR_7 = FUNC_7(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 FUNC_8(VAR_6);
 FUNC_1(VAR_7->soc->tx_int | VAR_7->soc->rx_int);
 FUNC_6(&VAR_7->rx_napi);

 if (VAR_7->phy)
  VAR_7->phy->stop(VAR_7);

 FUNC_9(&VAR_7->page_lock, VAR_8);

 FUNC_3(FUNC_2(VAR_0) &
       ~(VAR_5 | VAR_2 | VAR_4),
       VAR_0);
 FUNC_10(&VAR_7->page_lock, VAR_8);


 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  if (FUNC_2(VAR_0) &
    (VAR_3 | VAR_1)) {
   FUNC_4(20);
   continue;
  }
  break;
 }

 FUNC_0(VAR_7);





 return 0;
}
