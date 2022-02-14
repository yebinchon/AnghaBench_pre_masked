
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,char*,int) ;

void FUNC_4(tms320_dasm_t * VAR_11)
{


 if (FUNC_1 (VAR_11, VAR_2)) {
  FUNC_3 (VAR_11->syntax, "K8", "0x%02X", FUNC_2 (VAR_11, VAR_2));
 }
 if (FUNC_1 (VAR_11, VAR_1)) {
  FUNC_3 (VAR_11->syntax, "K16", "0x%04X", FUNC_0 (FUNC_2 (VAR_11, VAR_1)));
 }



 if (FUNC_1 (VAR_11, VAR_8)) {
  FUNC_3 (VAR_11->syntax, "K4", "0x%01X", FUNC_2 (VAR_11, VAR_8));
 }
 if (FUNC_1 (VAR_11, VAR_9)) {
  FUNC_3 (VAR_11->syntax, "k5", "0x%02X", FUNC_2 (VAR_11, VAR_9));
 }
 if (FUNC_1 (VAR_11, VAR_10)) {
  FUNC_3 (VAR_11->syntax, "k8", "0x%02X", FUNC_2 (VAR_11, VAR_10));
 }

 if (FUNC_1 (VAR_11, VAR_5)) {
  FUNC_3 (VAR_11->syntax, "k12", "0x%03X", FUNC_0 (FUNC_2 (VAR_11, VAR_5)));
 }
 if (FUNC_1 (VAR_11, VAR_6)) {
  FUNC_3 (VAR_11->syntax, "k16", "0x%04X", FUNC_0 (FUNC_2 (VAR_11, VAR_6)));
 }

 if (FUNC_1 (VAR_11, VAR_8) && FUNC_1 (VAR_11, VAR_7)) {
  FUNC_3 (VAR_11->syntax, "k7", "0x%02X", (FUNC_2 (VAR_11, VAR_7) << 4) | FUNC_2 (VAR_11, VAR_8));
 }
 if (FUNC_1 (VAR_11, VAR_8) && FUNC_1 (VAR_11, VAR_9)) {
  FUNC_3 (VAR_11->syntax, "k9", "0x%03X", (FUNC_2 (VAR_11, VAR_9) << 4) | FUNC_2 (VAR_11, VAR_8));
 }
 if (FUNC_1 (VAR_11, VAR_8) && FUNC_1 (VAR_11, VAR_10)) {
  FUNC_3 (VAR_11->syntax, "k12", "0x%03X", (FUNC_2 (VAR_11, VAR_10) << 4) | FUNC_2 (VAR_11, VAR_8));
 }



 if (FUNC_1 (VAR_11, VAR_0)) {
  FUNC_3 (VAR_11->syntax, "D16", "0x%04X", FUNC_0 (FUNC_2 (VAR_11, VAR_0)));
 }



 if (FUNC_1 (VAR_11, VAR_3)) {
  FUNC_3 (VAR_11->syntax, "#SHFT", "0x%01X", FUNC_2 (VAR_11, VAR_3));
 }
 if (FUNC_1 (VAR_11, VAR_4)) {
  FUNC_3 (VAR_11->syntax, "#SHIFTW", "0x%02X", FUNC_2 (VAR_11, VAR_4));
 }
}
