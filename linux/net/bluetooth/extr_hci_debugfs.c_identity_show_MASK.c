
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {struct hci_dev* private; } ;
struct hci_dev {int rpa; int irk; } ;
typedef int bdaddr_t ;


 int FUNC_0 (struct hci_dev*,int *,int *) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct seq_file*,char*,int *,int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_0->private;
 bdaddr_t VAR_3;
 u8 VAR_4;

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, &VAR_3, &VAR_4);

 FUNC_3(VAR_0, "%pMR (type %u) %*phN %pMR\n", &VAR_3, VAR_4,
     16, VAR_2->irk, &VAR_2->rpa);

 FUNC_2(VAR_2);

 return 0;
}
