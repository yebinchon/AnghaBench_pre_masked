
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int flags; int rx_dropped; } ;
struct gro_cells {int cells; } ;
struct gro_cell {int napi; int napi_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 struct gro_cell* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct gro_cells *VAR_4, struct sk_buff *VAR_5)
{
 struct net_device *VAR_6 = VAR_5->dev;
 struct gro_cell *VAR_7;
 int VAR_8;

 FUNC_6();
 if (FUNC_11(!(VAR_6->flags & VAR_0)))
  goto drop;

 if (!VAR_4->cells || FUNC_8(VAR_5) || FUNC_4(VAR_6)) {
  VAR_8 = FUNC_5(VAR_5);
  goto unlock;
 }

 VAR_7 = FUNC_10(VAR_4->cells);

 if (FUNC_9(&VAR_7->napi_skbs) > VAR_3) {
drop:
  FUNC_1(&VAR_6->rx_dropped);
  FUNC_2(VAR_5);
  VAR_8 = VAR_1;
  goto unlock;
 }

 FUNC_0(&VAR_7->napi_skbs, VAR_5);
 if (FUNC_9(&VAR_7->napi_skbs) == 1)
  FUNC_3(&VAR_7->napi);

 VAR_8 = VAR_2;

unlock:
 FUNC_7();
 return VAR_8;
}
