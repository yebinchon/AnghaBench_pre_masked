
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int esil; } ;
typedef TYPE_1__ RAnalOp ;


 int FUNC_0 (int *,char*,int,char) ;

__attribute__((used)) static void FUNC_1(RAnalOp *VAR_0, ut8 VAR_1) {
 int VAR_2=0;
 char VAR_3 ='u';
 switch(VAR_1) {
 case 0x78:
  VAR_2 = 1;
  VAR_3 = 'I';
  break;
 case 0x58:
  VAR_2 = 0;
  VAR_3 = 'I';
  break;
 case 0x38:
  VAR_2 = 1;
  VAR_3 = 'C';
  break;
 case 0x18:
  VAR_2 = 0;
  VAR_3 = 'C';
  break;
 case 0xf8:
  VAR_2 = 1;
  VAR_3 = 'D';
  break;
 case 0xd8:
  VAR_2 = 0;
  VAR_3 = 'D';
  break;
 case 0xb8:
  VAR_2 = 0;
  VAR_3 = 'V';
  break;
  break;
 }
 FUNC_0 (&VAR_0->esil, "%d,%c,=", VAR_2, VAR_3);
}
