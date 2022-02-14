
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int dummy; } ;
struct hci_dev {struct l2cap_chan* smp_bredr_data; struct l2cap_chan* smp_data; int debugfs; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct l2cap_chan*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct l2cap_chan*) ;
 scalar_t__ FUNC_3 (struct l2cap_chan*) ;
 int FUNC_4 (char*,int,int ,struct hci_dev*,int *) ;
 int VAR_3 ;
 int FUNC_5 (struct hci_dev*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct hci_dev*) ;
 int FUNC_7 (struct hci_dev*) ;
 struct l2cap_chan* FUNC_8 (struct hci_dev*,int ) ;
 int FUNC_9 (struct l2cap_chan*) ;

int FUNC_10(struct hci_dev *VAR_6)
{
 struct l2cap_chan *VAR_7;

 FUNC_0("%s", VAR_6->name);




 if (!FUNC_6(VAR_6))
  return 0;

 if (FUNC_3(VAR_6->smp_data)) {
  VAR_7 = VAR_6->smp_data;
  VAR_6->smp_data = ((void*)0);
  FUNC_9(VAR_7);
 }

 VAR_7 = FUNC_8(VAR_6, VAR_1);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_6->smp_data = VAR_7;

 FUNC_4("le_min_key_size", 0644, VAR_6->debugfs, VAR_6,
       &VAR_5);
 FUNC_4("le_max_key_size", 0644, VAR_6->debugfs, VAR_6,
       &VAR_4);
 if (!FUNC_7(VAR_6)) {
  FUNC_4("force_bredr_smp", 0644, VAR_6->debugfs,
        VAR_6, &VAR_3);


  if (!FUNC_5(VAR_6, VAR_0))
   return 0;
 }

 if (FUNC_3(VAR_6->smp_bredr_data)) {
  VAR_7 = VAR_6->smp_bredr_data;
  VAR_6->smp_bredr_data = ((void*)0);
  FUNC_9(VAR_7);
 }

 VAR_7 = FUNC_8(VAR_6, VAR_2);
 if (FUNC_1(VAR_7)) {
  int VAR_8 = FUNC_2(VAR_7);
  VAR_7 = VAR_6->smp_data;
  VAR_6->smp_data = ((void*)0);
  FUNC_9(VAR_7);
  return VAR_8;
 }

 VAR_6->smp_bredr_data = VAR_7;

 return 0;
}
