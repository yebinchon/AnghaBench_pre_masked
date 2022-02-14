
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ revision; int length; } ;
struct ncsi_rsp_pkt_hdr {int reason; int code; TYPE_1__ common; } ;
struct ncsi_request {TYPE_3__* ndp; int rsp; } ;
typedef unsigned short __be32 ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_2__ ndev; } ;


 int FUNC_0 (unsigned short,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (unsigned short) ;
 unsigned short FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ncsi_request *VAR_5,
     unsigned short VAR_6)
{
 struct ncsi_rsp_pkt_hdr *VAR_7;
 u32 VAR_8;
 __be32 *VAR_9;





 VAR_7 = (struct ncsi_rsp_pkt_hdr *)FUNC_6(VAR_5->rsp);

 if (VAR_7->common.revision != VAR_2) {
  FUNC_3(VAR_5->ndp->ndev.dev,
      "NCSI: unsupported header revision\n");
  return -VAR_0;
 }
 if (FUNC_5(VAR_7->common.length) != VAR_6) {
  FUNC_3(VAR_5->ndp->ndev.dev,
      "NCSI: payload length mismatched\n");
  return -VAR_0;
 }


 if (FUNC_5(VAR_7->code) != VAR_3 ||
     FUNC_5(VAR_7->reason) != VAR_4) {
  FUNC_3(VAR_5->ndp->ndev.dev,
      "NCSI: non zero response/reason code %04xh, %04xh\n",
       FUNC_5(VAR_7->code), FUNC_5(VAR_7->reason));
  return -VAR_1;
 }





 VAR_9 = (__be32 *)((void *)(VAR_7 + 1) + FUNC_0(VAR_6, 4) - 4);
 if (FUNC_4(*VAR_9) == 0)
  return 0;

 VAR_8 = FUNC_2((unsigned char *)VAR_7,
        sizeof(*VAR_7) + VAR_6 - 4);

 if (*VAR_9 != FUNC_1(VAR_8)) {
  FUNC_3(VAR_5->ndp->ndev.dev,
      "NCSI: checksum mismatched; recd: %08x calc: %08x\n",
      *VAR_9, FUNC_1(VAR_8));
  return -VAR_0;
 }

 return 0;
}
