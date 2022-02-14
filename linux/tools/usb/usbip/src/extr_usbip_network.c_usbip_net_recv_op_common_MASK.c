
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct op_common {scalar_t__ version; int status; int code; } ;
typedef int op_common ;



 int FUNC_0 (int ,struct op_common*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct op_common*,int ,int) ;
 int FUNC_4 (int,struct op_common*,int) ;

int FUNC_5(int VAR_3, uint16_t *VAR_4, int *VAR_5)
{
 struct op_common VAR_6;
 int VAR_7;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));

 VAR_7 = FUNC_4(VAR_3, &VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0) {
  FUNC_1("usbip_net_recv failed: %d", VAR_7);
  goto err;
 }

 FUNC_0(0, &VAR_6);

 if (VAR_6.version != VAR_2) {
  FUNC_2("USBIP Kernel and tool version mismatch: %d %d:",
      VAR_6.version, VAR_2);
  goto err;
 }

 switch (*VAR_4) {
 case 128:
  break;
 default:
  if (VAR_6.code != *VAR_4) {
   FUNC_1("unexpected pdu %#0x for %#0x", VAR_6.code,
       *VAR_4);

   *VAR_5 = VAR_0;
   goto err;
  }
 }

 *VAR_5 = VAR_6.status;

 if (VAR_6.status != VAR_1) {
  FUNC_1("request failed at peer: %d", VAR_6.status);
  goto err;
 }

 *VAR_4 = VAR_6.code;

 return 0;
err:
 return -1;
}
