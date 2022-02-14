
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {scalar_t__ type; int * dn_ptr; } ;
struct dn_dev_parms {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ (* up ) (struct net_device*) ;} ;
struct dn_dev {TYPE_1__ parms; int neigh_parms; int uptime; int timer; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 struct dn_dev_parms* VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct dn_dev*) ;
 struct dn_dev* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_1__*,struct dn_dev_parms*,int) ;
 int FUNC_6 (struct net_device*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,struct dn_dev*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static struct dn_dev *FUNC_11(struct net_device *VAR_8, int *VAR_9)
{
 int VAR_10;
 struct dn_dev_parms *VAR_11 = VAR_4;
 struct dn_dev *VAR_12;

 for(VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_11++) {
  if (VAR_11->type == VAR_8->type)
   break;
 }

 *VAR_9 = -VAR_2;
 if (VAR_10 == VAR_0)
  return ((void*)0);

 *VAR_9 = -VAR_1;
 if ((VAR_12 = FUNC_4(sizeof(struct dn_dev), VAR_3)) == ((void*)0))
  return ((void*)0);

 FUNC_5(&VAR_12->parms, VAR_11, sizeof(struct dn_dev_parms));

 FUNC_8(VAR_8->dn_ptr, VAR_12);
 VAR_12->dev = VAR_8;
 FUNC_10(&VAR_12->timer, VAR_5, 0);

 VAR_12->uptime = VAR_7;

 VAR_12->neigh_parms = FUNC_6(VAR_8, &VAR_6);
 if (!VAR_12->neigh_parms) {
  FUNC_0(VAR_8->dn_ptr, ((void*)0));
  FUNC_3(VAR_12);
  return ((void*)0);
 }

 if (VAR_12->parms.up) {
  if (VAR_12->parms.up(VAR_8) < 0) {
   FUNC_7(&VAR_6, VAR_12->neigh_parms);
   VAR_8->dn_ptr = ((void*)0);
   FUNC_3(VAR_12);
   return ((void*)0);
  }
 }

 FUNC_2(VAR_8, &VAR_12->parms);

 FUNC_1(VAR_8);

 *VAR_9 = 0;
 return VAR_12;
}
