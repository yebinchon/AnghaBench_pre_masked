
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rev; scalar_t__ sdid; scalar_t__ did; scalar_t__ svid; scalar_t__ vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (char,char*) ;
 scalar_t__ FUNC_5 (char*,scalar_t__*) ;
 scalar_t__ FUNC_6 (char*,scalar_t__*) ;

int
FUNC_7(char VAR_3, char *VAR_4)
{
 char VAR_5[VAR_1];
 char *VAR_6[VAR_0];
 int VAR_7;
 char *VAR_8;

 if (FUNC_4(VAR_3, VAR_4)) {
  goto err_out;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_5, VAR_6);


 VAR_8 = VAR_6[0];
 if (FUNC_2(VAR_8)) {
  FUNC_1(0,"vendor id is missing from -%c %s",VAR_3, VAR_4);
  goto err_out;
 } else if (FUNC_5(VAR_8, &VAR_2.vid) != 0) {
  FUNC_1(0,"invalid vendor id: %s", VAR_8);
  goto err_out;
 }

 FUNC_0(1, "vendor id is set to 0x%04X", VAR_2.vid);


 VAR_8 = VAR_6[1];
 if (FUNC_2(VAR_8)) {
  FUNC_1(0,"device id is missing from -%c %s",VAR_3, VAR_4);
  goto err_out;
 } else if (FUNC_5(VAR_8, &VAR_2.did) != 0) {
  FUNC_1(0,"invalid device id: %s", VAR_8);
  goto err_out;
 }

 FUNC_0(1, "device id is set to 0x%04X", VAR_2.did);


 VAR_8 = VAR_6[2];
 if (FUNC_2(VAR_8)) {
  VAR_2.svid = VAR_2.vid;
 } else if (FUNC_5(VAR_8, &VAR_2.svid) != 0) {
  FUNC_1(0,"invalid sub vendor id: %s", VAR_8);
  goto err_out;
 }

 FUNC_0(1, "sub vendor id is set to 0x%04X", VAR_2.svid);


 VAR_8 = VAR_6[3];
 if (FUNC_2(VAR_8)) {
  VAR_2.sdid = VAR_2.did;
 } else if (FUNC_5(VAR_8, &VAR_2.sdid) != 0) {
  FUNC_1(0,"invalid sub device id: %s", VAR_8);
  goto err_out;
 }

 FUNC_0(1, "sub device id is set to 0x%04X", VAR_2.sdid);


 VAR_8 = VAR_6[4];
 if (FUNC_2(VAR_8)) {
  VAR_2.rev = 0;
 } else if (FUNC_6(VAR_4, &VAR_2.rev) != 0) {
  FUNC_1(0,"invalid revision number: %s", VAR_8);
  goto err_out;
 }

 FUNC_0(1, "board revision is set to 0x%08X", VAR_2.rev);

 return 0;

err_out:
 return -1;
}
