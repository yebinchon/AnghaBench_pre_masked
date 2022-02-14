
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct hci_dev* private; } ;
struct hci_dev {int devid_version; int devid_product; int devid_vendor; int devid_source; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0->private;

 FUNC_0(VAR_2);
 FUNC_2(VAR_0, "%4.4x:%4.4x:%4.4x:%4.4x\n", VAR_2->devid_source,
    VAR_2->devid_vendor, VAR_2->devid_product, VAR_2->devid_version);
 FUNC_1(VAR_2);

 return 0;
}
