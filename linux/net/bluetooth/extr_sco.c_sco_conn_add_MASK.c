
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sco_conn {scalar_t__ mtu; struct hci_conn* hcon; int lock; } ;
struct hci_dev {scalar_t__ sco_mtu; } ;
struct hci_conn {struct sco_conn* sco_data; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct hci_conn*,struct sco_conn*) ;
 int VAR_0 ;
 struct sco_conn* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct sco_conn *FUNC_3(struct hci_conn *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1->hdev;
 struct sco_conn *VAR_3 = VAR_1->sco_data;

 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(sizeof(struct sco_conn), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->lock);

 VAR_1->sco_data = VAR_3;
 VAR_3->hcon = VAR_1;

 if (VAR_2->sco_mtu > 0)
  VAR_3->mtu = VAR_2->sco_mtu;
 else
  VAR_3->mtu = 60;

 FUNC_0("hcon %p conn %p", VAR_1, VAR_3);

 return VAR_3;
}
