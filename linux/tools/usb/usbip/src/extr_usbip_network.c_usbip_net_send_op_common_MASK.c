
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct op_common {void* status; void* code; int version; } ;
typedef int op_common ;


 int FUNC_0 (int,struct op_common*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct op_common*,int ,int) ;
 int FUNC_3 (int,struct op_common*,int) ;

int FUNC_4(int VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 struct op_common VAR_4;
 int VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.version = VAR_0;
 VAR_4.code = VAR_2;
 VAR_4.status = VAR_3;

 FUNC_0(1, &VAR_4);

 VAR_5 = FUNC_3(VAR_1, &VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0) {
  FUNC_1("usbip_net_send failed: %d", VAR_5);
  return -1;
 }

 return 0;
}
