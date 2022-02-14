
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct seq_file {struct hci_dev* private; } ;
struct hci_dev {size_t max_page; int le_features; int * features; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct seq_file*,char*,size_t,...) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct hci_dev *VAR_3 = VAR_1->private;
 u8 VAR_4;

 FUNC_0(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_4 <= VAR_3->max_page; VAR_4++)
  FUNC_3(VAR_1, "%2u: %8ph\n", VAR_4, VAR_3->features[VAR_4]);
 if (FUNC_2(VAR_3))
  FUNC_3(VAR_1, "LE: %8ph\n", VAR_3->le_features);
 FUNC_1(VAR_3);

 return 0;
}
