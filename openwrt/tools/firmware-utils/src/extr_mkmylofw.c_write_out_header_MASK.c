
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mylo_fw_header {void* flags; void* fwlo; void* fwhi; void* rev; void* sdid; void* svid; void* did; void* vid; void* crc; void* magic; } ;
typedef int hdr ;
struct TYPE_2__ {int flags; int fwlo; int fwhi; int rev; int sdid; int svid; int did; int vid; int crc; } ;
typedef int FILE ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 (struct mylo_fw_header*,int ,int) ;
 int FUNC_5 (int *,int *,int,int *) ;

int
FUNC_6(FILE *VAR_3, uint32_t *VAR_4)
{
 struct mylo_fw_header VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.magic = FUNC_1(VAR_0);
 VAR_5.crc = FUNC_1(VAR_2.crc);
 VAR_5.vid = FUNC_0(VAR_2.vid);
 VAR_5.did = FUNC_0(VAR_2.did);
 VAR_5.svid = FUNC_0(VAR_2.svid);
 VAR_5.sdid = FUNC_0(VAR_2.sdid);
 VAR_5.rev = FUNC_1(VAR_2.rev);
 VAR_5.fwhi = FUNC_1(VAR_2.fwhi);
 VAR_5.fwlo = FUNC_1(VAR_2.fwlo);
 VAR_5.flags = FUNC_1(VAR_2.flags);

 if (FUNC_3(VAR_3, 0, VAR_1) != 0) {
  FUNC_2(1,"fseek failed on output file");
  return -1;
 }

 return FUNC_5(VAR_3, (uint8_t *)&VAR_5, sizeof(VAR_5), VAR_4);
}
