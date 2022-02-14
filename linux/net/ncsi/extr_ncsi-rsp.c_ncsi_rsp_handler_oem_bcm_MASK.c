
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_rsp_oem_pkt {scalar_t__ data; } ;
struct ncsi_rsp_oem_bcm_pkt {scalar_t__ type; } ;
struct ncsi_request {int rsp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ncsi_request*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ncsi_request *VAR_1)
{
 struct ncsi_rsp_oem_bcm_pkt *VAR_2;
 struct ncsi_rsp_oem_pkt *VAR_3;


 VAR_3 = (struct ncsi_rsp_oem_pkt *)FUNC_1(VAR_1->rsp);
 VAR_2 = (struct ncsi_rsp_oem_bcm_pkt *)(VAR_3->data);

 if (VAR_2->type == VAR_0)
  return FUNC_0(VAR_1);
 return 0;
}
