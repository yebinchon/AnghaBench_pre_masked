
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int jump; int esil; } ;
typedef TYPE_1__ RAnalOp ;


 int FUNC_0 (int *,char*,char*,int) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, ut8 VAR_1) {
 char *VAR_2;
 switch (VAR_1) {
 case 0x10:
  VAR_2 = "N,!";
  break;
 case 0x30:
  VAR_2 = "N";
  break;
 case 0x50:
  VAR_2 = "V,!";
  break;
 case 0x70:
  VAR_2 = "V";
  break;
 case 0x90:
  VAR_2 = "C,!";
  break;
 case 0xb0:
  VAR_2 = "C";
  break;
 case 0xd0:
  VAR_2 = "Z,!";
  break;
 case 0xf0:
  VAR_2 = "Z";
  break;
 default:

  VAR_2 = "unk";
  break;
 }
 FUNC_0 (&VAR_0->esil, "%s,?{,0x%04x,pc,=,}", VAR_2, (VAR_0->jump & 0xffff));
}
