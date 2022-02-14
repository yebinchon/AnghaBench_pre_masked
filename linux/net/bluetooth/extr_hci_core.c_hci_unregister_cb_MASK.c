
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_cb {int list; int name; } ;


 int FUNC_0 (char*,struct hci_cb*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hci_cb *VAR_1)
{
 FUNC_0("%p name %s", VAR_1, VAR_1->name);

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->list);
 FUNC_3(&VAR_0);

 return 0;
}
