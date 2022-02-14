
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_request {TYPE_1__* hdev; } ;
struct TYPE_2__ {int flow_ctl_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_request*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct hci_request *VAR_4)
{
 VAR_4->hdev->flow_ctl_mode = VAR_0;


 FUNC_0(VAR_4, VAR_2, 0, ((void*)0));


 FUNC_0(VAR_4, VAR_3, 0, ((void*)0));


 FUNC_0(VAR_4, VAR_1, 0, ((void*)0));
}
