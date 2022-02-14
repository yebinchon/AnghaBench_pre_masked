
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {scalar_t__ syntax; } ;
struct TYPE_6__ {int size; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*,int) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 char* FUNC_2 (char*,int const,int const) ;

void FUNC_3(RAsm *VAR_1, RAsmOp *VAR_2, const ut8 *VAR_3, int VAR_4) {
 const char *VAR_5 = "invalid";
 if (VAR_4 > 3 && VAR_3[0] == 0x0F && VAR_3[1] == 0x3F && (FUNC_0 (VAR_3, 0x01) || FUNC_0 (VAR_3, 0x05) || FUNC_0 (VAR_3, 0x07) || FUNC_0 (VAR_3, 0x0D) || FUNC_0 (VAR_3, 0x10))) {
  if (VAR_1->syntax == VAR_0) {
   VAR_5 = FUNC_2 ("vpcext $0x%x, $0x%x", VAR_3[3], VAR_3[2]);
  } else {
   VAR_5 = FUNC_2 ("vpcext %xh, %xh", VAR_3[2], VAR_3[3]);
  }
  VAR_2->size = 4;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x00 && VAR_3[4] == 0x00) {

  VAR_5 ="vmgetinfo";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x00 && VAR_3[4] == 0x01) {

  VAR_5 ="vmsetinfo";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x00 && VAR_3[4] == 0x02) {

  VAR_5 ="vmdxdsbl";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x00 && VAR_3[4] == 0x03) {

  VAR_5 ="vmdxenbl";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x01 && VAR_3[4] == 0x00) {

  VAR_5 ="vmcpuid";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x01 && VAR_3[4] == 0x01) {

  VAR_5 ="vmhlt";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x01 && VAR_3[4] == 0x02) {

  VAR_5 ="vmsplaf";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x02 && VAR_3[4] == 0x00) {

  VAR_5 ="vmpushfd";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x02 && VAR_3[4] == 0x01) {

  VAR_5 ="vmpopfd";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x02 && VAR_3[4] == 0x02) {

  VAR_5 ="vmcli";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x02 && VAR_3[4] == 0x03) {

  VAR_5 ="vmsti";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x02 && VAR_3[4] == 0x04) {

  VAR_5 ="vmiretd";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x03 && VAR_3[4] == 0x00) {

  VAR_5 ="vmsgdt";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x03 && VAR_3[4] == 0x01) {

  VAR_5 ="vmsidt";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x03 && VAR_3[4] == 0x02) {

  VAR_5 ="vmsldt";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x03 && VAR_3[4] == 0x03) {

  VAR_5 ="vmstr";
  VAR_2->size = 5;
 } else if (VAR_4 > 4 && VAR_3[0] == 0x0F && VAR_3[1] == 0xC6 && VAR_3[2] == 0x28 && VAR_3[3] == 0x04 && VAR_3[4] == 0x00) {

  VAR_5 ="vmsdte";
  VAR_2->size = 5;
 }
 FUNC_1 (VAR_2, VAR_5);
}
