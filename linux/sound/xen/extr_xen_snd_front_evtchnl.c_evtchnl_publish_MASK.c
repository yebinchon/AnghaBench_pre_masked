
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_transaction {int dummy; } ;
struct xenbus_device {int dev; } ;
struct xen_snd_front_evtchnl {int port; int gref; TYPE_1__* front_info; } ;
struct TYPE_2__ {struct xenbus_device* xb_dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct xenbus_transaction,char const*,char const*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct xenbus_transaction VAR_0,
      struct xen_snd_front_evtchnl *VAR_1,
      const char *VAR_2, const char *VAR_3,
      const char *VAR_4)
{
 struct xenbus_device *VAR_5 = VAR_1->front_info->xb_dev;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, "%u", VAR_1->gref);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "Error writing ring-ref: %d\n", VAR_6);
  return VAR_6;
 }


 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_4, "%u", VAR_1->port);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_5->dev, "Error writing event channel: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
