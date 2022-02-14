
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int devfn; int subsystem_device; int subsystem_vendor; int device; int vendor; int dev; } ;
struct hpi_response {int dummy; } ;
struct hpi_pci {int * ap_mem_base; } ;
struct TYPE_5__ {scalar_t__ parameter2; scalar_t__ parameter1; int property; } ;
struct TYPE_6__ {TYPE_1__ property_set; } ;
struct TYPE_7__ {TYPE_2__ ax; } ;
struct hpi_message {int adapter_index; TYPE_3__ u; } ;
struct hpi_adapter {TYPE_4__* adapter; int p_buffer; scalar_t__ irq; } ;
struct TYPE_8__ {int index; struct hpi_pci pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,struct hpi_adapter*) ;
 int FUNC_2 (struct hpi_message*,struct hpi_response*,int ,int ) ;
 int FUNC_3 (struct hpi_message*,struct hpi_response*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hpi_adapter*,int ,int) ;
 struct hpi_adapter* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct pci_dev *VAR_6)
{
 int VAR_7;
 struct hpi_message VAR_8;
 struct hpi_response VAR_9;
 struct hpi_adapter *VAR_10;
 struct hpi_pci VAR_11;

 VAR_10 = FUNC_6(VAR_6);
 VAR_11 = VAR_10->adapter->pci;


 FUNC_2(&VAR_8, &VAR_9, VAR_5,
  VAR_3);
 VAR_8.adapter_index = VAR_10->adapter->index;
 VAR_8.u.ax.property_set.property = VAR_2;
 VAR_8.u.ax.property_set.parameter1 = 0;
 VAR_8.u.ax.property_set.parameter2 = 0;
 FUNC_3(&VAR_8, &VAR_9, VAR_0);

 FUNC_2(&VAR_8, &VAR_9, VAR_5,
  VAR_1);
 VAR_8.adapter_index = VAR_10->adapter->index;
 FUNC_3(&VAR_8, &VAR_9, VAR_0);


 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
  FUNC_4(VAR_11.ap_mem_base[VAR_7]);

 if (VAR_10->irq)
  FUNC_1(VAR_10->irq, VAR_10);

 FUNC_7(VAR_10->p_buffer);

 if (1)
  FUNC_0(&VAR_6->dev,
    "remove %04x:%04x,%04x:%04x,%04x, HPI index %d\n",
    VAR_6->vendor, VAR_6->device,
    VAR_6->subsystem_vendor, VAR_6->subsystem_device,
    VAR_6->devfn, VAR_10->adapter->index);

 FUNC_5(VAR_10, 0, sizeof(*VAR_10));
}
