
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncsi_rsp_oem_pkt {int mfr_id; } ;
struct ncsi_rsp_oem_handler {unsigned int mfr_id; int (* handler ) (struct ncsi_request*) ;} ;
struct ncsi_request {TYPE_2__* ndp; int rsp; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ ndev; } ;


 unsigned int FUNC_0 (struct ncsi_rsp_oem_handler*) ;
 int VAR_0 ;
 struct ncsi_rsp_oem_handler* VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ncsi_request*) ;

__attribute__((used)) static int FUNC_5(struct ncsi_request *VAR_2)
{
 struct ncsi_rsp_oem_handler *VAR_3 = ((void*)0);
 struct ncsi_rsp_oem_pkt *VAR_4;
 unsigned int VAR_5, VAR_6;


 VAR_4 = (struct ncsi_rsp_oem_pkt *)FUNC_3(VAR_2->rsp);
 VAR_5 = FUNC_2(VAR_4->mfr_id);


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_1[VAR_6].mfr_id == VAR_5) {
   if (VAR_1[VAR_6].handler)
    VAR_3 = &VAR_1[VAR_6];
   else
    VAR_3 = ((void*)0);

   break;
  }
 }

 if (!VAR_3) {
  FUNC_1(VAR_2->ndp->ndev.dev, "Received unrecognized OEM packet with MFR-ID (0x%x)\n",
      VAR_5);
  return -VAR_0;
 }


 return VAR_3->handler(VAR_2);
}
