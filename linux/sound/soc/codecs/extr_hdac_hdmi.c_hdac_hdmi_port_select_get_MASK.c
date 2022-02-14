
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_hdmi_port {TYPE_1__* pin; } ;
struct hdac_device {int dummy; } ;
struct TYPE_2__ {int nid; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdac_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hdac_device *VAR_1,
     struct hdac_hdmi_port *VAR_2)
{
 return FUNC_0(VAR_1, VAR_2->pin->nid,
    0, VAR_0, 0);
}
