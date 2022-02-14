
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int service_cache; int workqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static bool FUNC_3(struct hci_dev *VAR_2)
{
 if (!FUNC_1(VAR_2))
  return 0;

 if (!FUNC_0(VAR_2, VAR_1)) {
  FUNC_2(VAR_2->workqueue, &VAR_2->service_cache,
       VAR_0);
  return 1;
 }

 return 0;
}
