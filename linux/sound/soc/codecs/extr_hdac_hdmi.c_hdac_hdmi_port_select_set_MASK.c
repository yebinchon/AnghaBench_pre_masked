
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_hdmi_port {int id; TYPE_1__* pin; } ;
struct hdac_device {int dev; } ;
struct TYPE_2__ {int nid; int mst_capable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct hdac_device*,int ) ;
 int FUNC_2 (struct hdac_device*,struct hdac_hdmi_port*) ;
 int FUNC_3 (struct hdac_device*,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hdac_device *VAR_2,
     struct hdac_hdmi_port *VAR_3)
{
 int VAR_4;

 if (!VAR_3->pin->mst_capable)
  return 0;


 VAR_4 = FUNC_1(VAR_2, VAR_3->pin->nid);
 if (VAR_4 < 0)
  return -VAR_1;




 if (VAR_4 + 1 < VAR_3->id)
  return 0;

 FUNC_3(VAR_2, VAR_3->pin->nid, 0,
   VAR_0, VAR_3->id);

 if (VAR_3->id != FUNC_2(VAR_2, VAR_3))
  return -VAR_1;

 FUNC_0(&VAR_2->dev, "Selected the port=%d\n", VAR_3->id);

 return 0;
}
