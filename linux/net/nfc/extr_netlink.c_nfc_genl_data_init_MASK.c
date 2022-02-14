
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_genl_data {int genl_data_mutex; scalar_t__ poll_req_portid; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct nfc_genl_data *VAR_0)
{
 VAR_0->poll_req_portid = 0;
 FUNC_0(&VAR_0->genl_data_mutex);
}
