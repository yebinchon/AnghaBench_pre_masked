
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inquiry_entry {int name_state; } ;
struct discovery_state {int resolve; } ;
struct hci_dev {struct discovery_state discovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inquiry_entry* FUNC_0 (struct hci_dev*,int ,int ) ;
 scalar_t__ FUNC_1 (struct hci_dev*,struct inquiry_entry*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct hci_dev *VAR_3)
{
 struct discovery_state *VAR_4 = &VAR_3->discovery;
 struct inquiry_entry *VAR_5;

 if (FUNC_2(&VAR_4->resolve))
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_1);
 if (!VAR_5)
  return 0;

 if (FUNC_1(VAR_3, VAR_5) == 0) {
  VAR_5->name_state = VAR_2;
  return 1;
 }

 return 0;
}
