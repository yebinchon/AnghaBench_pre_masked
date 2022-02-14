
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smcd_ops {int dummy; } ;
struct TYPE_3__ {int release; struct device* parent; } ;
struct smcd_dev {struct smcd_dev* conn; int event_wq; int vlan; int lock; int pnetid; struct smcd_ops const* ops; TYPE_1__ dev; } ;
struct smc_connection {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct smcd_dev* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct smcd_dev*) ;
 struct smcd_dev* FUNC_6 (int,int ) ;
 int FUNC_7 (struct device*,int ,int ) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;

struct smcd_dev *FUNC_9(struct device *VAR_3, const char *VAR_4,
    const struct smcd_ops *VAR_5, int VAR_6)
{
 struct smcd_dev *VAR_7;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->conn = FUNC_4(VAR_6, sizeof(struct smc_connection *),
        VAR_0);
 if (!VAR_7->conn) {
  FUNC_5(VAR_7);
  return ((void*)0);
 }

 VAR_7->dev.parent = VAR_3;
 VAR_7->dev.release = VAR_2;
 FUNC_3(&VAR_7->dev);
 FUNC_2(&VAR_7->dev, VAR_4);
 VAR_7->ops = VAR_5;
 FUNC_7(VAR_3, 0, VAR_7->pnetid);

 FUNC_8(&VAR_7->lock);
 FUNC_0(&VAR_7->vlan);
 VAR_7->event_wq = FUNC_1("ism_evt_wq-%s)",
       VAR_1, VAR_4);
 if (!VAR_7->event_wq) {
  FUNC_5(VAR_7->conn);
  FUNC_5(VAR_7);
  return ((void*)0);
 }
 return VAR_7;
}
